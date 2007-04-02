/*
 * logo.c: The 'EnigmaNG' VDR skin
 *
 * See the README file for copyright information and how to reach the author.
 *
 */

#include <strings.h>

#include "bitmap.h"
#include "common.h"
#include "config.h"
#include "logo.h"
#include <vdr/tools.h>
#include <vdr/plugin.h>

cEnigmaLogoCache EnigmaLogoCache(0);

cEnigmaLogoCache::cEnigmaLogoCache(unsigned int cacheSizeP) :cacheSizeM(cacheSizeP), bitmapM(NULL)
{
#ifdef HAVE_IMAGEMAGICK
  bmpImage = new cBitmap(8, 8, 1);
#endif
}

cEnigmaLogoCache::~cEnigmaLogoCache()
{
#ifdef HAVE_IMAGEMAGICK
  delete bmpImage;
#endif

  // let's flush the cache
  Flush();
}

bool cEnigmaLogoCache::Resize(unsigned int cacheSizeP)
{
  debug("cPluginSkinEnigma::Resize(%d)\n", cacheSizeP);
  // flush cache only if it's smaller than before
  if (cacheSizeP < cacheSizeM) {
    Flush();
  }
  // resize current cache
  cacheSizeM = cacheSizeP;
  return true;
}

bool cEnigmaLogoCache::LoadEventImage(const cEvent *Event, int w, int h, int c)
{
  if (Event == NULL)
    return false;

  char *strFilename = NULL;
  asprintf(&strFilename, "%s/%d.%s", EnigmaConfig.GetImagesDir(), Event->EventID(), EnigmaConfig.GetImageExtension());
  int rc = LoadImage(strFilename, w, h, c);
  free (strFilename);
  return rc;
}

bool cEnigmaLogoCache::LoadRecordingImage(const cRecording *Recording, int w, int h, int c)
{
  if (Recording == NULL)
    return false;

  char *strFilename = NULL;
  asprintf(&strFilename, "%s/%s.%s", Recording->FileName(), RECORDING_COVER, EnigmaConfig.GetImageExtension());
  int rc = LoadImage(strFilename, w, h, c);
  free (strFilename);
  return rc;
}

bool cEnigmaLogoCache::LoadImage(const char *fileNameP, int w, int h, int c)
{
  struct stat stbuf;
  if (lstat(fileNameP, &stbuf) != 0) {
    error("cPluginSkinEnigma::LoadImage(%s) FILE NOT FOUND\n", fileNameP);
    bitmapM = NULL;
    return false;
  }

#ifdef HAVE_IMAGEMAGICK
  int rc = image.LoadImage(fileNameP, w, h, c, *bmpImage);
  bitmapM = rc ? bmpImage : NULL;
  return rc;
#else
  return LoadXpm(fileNameP, w, h);
#endif
}

bool cEnigmaLogoCache::LoadChannelLogo(const cChannel *Channel)
{
  if (Channel == NULL)
    return false;

  bool fFoundLogo = false;
  char *strChannelID = EnigmaConfig.useChannelId ? strdup(*Channel->GetChannelID().ToString()) : NULL;
  const char *logoname = EnigmaConfig.useChannelId ? strChannelID : Channel->Name();
  if (logoname) {
    char *filename = (char *)malloc(strlen(logoname) + 20 /* should be enough for folder */);
    if (filename == NULL) return false;
    strcpy(filename, "hqlogos/");
    strcat(filename, logoname);
    if (!(fFoundLogo = Load(filename, ChannelLogoWidth, ChannelLogoHeight))) {
      strcpy(filename, "logos/");
      strcat(filename, logoname);
      if (!(fFoundLogo = EnigmaLogoCache.Load(filename, ChannelLogoWidth, ChannelLogoHeight))) {
        fFoundLogo = Load("hqlogos/no_logo", ChannelLogoWidth, ChannelLogoHeight); //TODO? different default logo for channel/group?
      }
    }
    free(filename);
    free(strChannelID);
  }
  return fFoundLogo;
}

bool cEnigmaLogoCache::LoadSymbol(const char *fileNameP)
{
  return Load(fileNameP, SymbolWidth, SymbolHeight);
}

bool cEnigmaLogoCache::LoadIcon(const char *fileNameP)
{
  return Load(fileNameP, IconWidth, IconHeight);
}

bool cEnigmaLogoCache::Load(const char *fileNameP, int w, int h)
{
  if (fileNameP == NULL)
    return false;

  char *strFilename;
  asprintf(&strFilename, "%s/%s.xpm", EnigmaConfig.GetLogoDir(), fileNameP);
  if (strFilename == NULL)
    return false;

  debug("cPluginSkinEnigma::Load(%s)\n", strFilename);
  // does the logo exist already in map
  std::map < std::string, cBitmap * >::iterator i = cacheMapM.find(strFilename);
  if (i != cacheMapM.end()) {
    // yes - cache hit!
    debug("cPluginSkinEnigma::Load() CACHE HIT!\n");
    // check if logo really exist
    if (i->second == NULL) {
      debug("cPluginSkinEnigma::Load() EMPTY\n");
      // empty logo in cache
      free(strFilename);
      return false;
    }
    bitmapM = i->second;
  } else {
    // no - cache miss!
    debug("cPluginSkinEnigma::Load() CACHE MISS!\n");
    // try to load xpm logo
    if (!LoadXpm(strFilename, w, h))
      return false;
    // check if cache is active
    if (cacheSizeM) {
      // update map
      if (cacheMapM.size() >= cacheSizeM) {
        // cache full - remove first
        debug("cPluginSkinEnigma::Load() DELETE\n");
        if (cacheMapM.begin()->second != NULL) {
          // logo exists - delete it
          cBitmap *bmp = cacheMapM.begin()->second;
          DELETENULL(bmp);
        }
        // erase item
        cacheMapM.erase(cacheMapM.begin());
      }
      // insert logo into map
      debug("cPluginSkinEnigma::Load() INSERT(%s)\n", strFilename);
      cacheMapM.insert(std::make_pair(strFilename, bitmapM));
    }
    // check if logo really exist
    if (bitmapM == NULL) {
      debug("cPluginSkinEnigma::Load() EMPTY\n");
      // empty logo in cache
      free(strFilename);
      return false;
    }
  }
  free(strFilename);
  return true;
}

cBitmap & cEnigmaLogoCache::Get(void)
{
  return *bitmapM;
}

bool cEnigmaLogoCache::LoadXpm(const char *fileNameP, int w, int h)
{
  if (fileNameP == NULL)
    return false;

  struct stat stbuf;
  cBitmap *bmp = new cBitmap(1, 1, 1);

  // create absolute filename
  debug("cPluginSkinEnigma::LoadXpm(%s)\n", fileNameP);
  // check validity
  if ((lstat(fileNameP, &stbuf) == 0) && bmp->LoadXpm(fileNameP)) {
    if ((bmp->Width() <= w) && (bmp->Height() <= h)) {
      debug("cPluginSkinEnigma::LoadXpm(%s) LOGO FOUND\n", fileNameP);
      // assign bitmap
      bitmapM = bmp;
      return true;
    } else {
      // wrong size
      error("cPluginSkinEnigma::LoadXpm(%s) LOGO HAS WRONG SIZE %d/%d (%d/%d)\n", fileNameP, bmp->Width(), bmp->Height(), w, h);
    }
  } else {
    // no xpm logo found
    error("cPluginSkinEnigma::LoadXpm(%s) LOGO NOT FOUND\n", fileNameP);
  }

  delete bmp;
  bitmapM = NULL;
  return false;
}

bool cEnigmaLogoCache::Flush(void)
{
  debug("cPluginSkinEnigma::Flush()\n");
  // check if map is empty
  if (!cacheMapM.empty()) {
    debug("cPluginSkinEnigma::Flush() NON-EMPTY\n");
    // delete bitmaps and clear map
    for (std::map < std::string, cBitmap * >::iterator i = cacheMapM.begin();
         i != cacheMapM.end(); ++i) {
      cBitmap *bmp = i->second;
      if (bmp)
        DELETENULL(bmp);
      cacheMapM.erase(i);
    }
    // nullify bitmap pointer
    bitmapM = NULL;
  }
  return true;
}

// vim:et:sw=2:ts=2:
