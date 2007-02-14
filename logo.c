/*
 * logo.c: The 'EnigmaNG' VDR skin
 *
 * See the README file for copyright information and how to reach the author.
 *
 */

#include "common.h"
#include "config.h"
#include "logo.h"
#include <vdr/tools.h>
#include <vdr/plugin.h>

#undef debug
#define debug(x...) ;

cEnigmaLogoCache EnigmaLogoCache(0);

cEnigmaLogoCache::cEnigmaLogoCache(unsigned int cacheSizeP) :cacheSizeM(cacheSizeP), bitmapM(NULL)
{ }

cEnigmaLogoCache::~cEnigmaLogoCache()
{
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

bool cEnigmaLogoCache::Load(const char *fileNameP)
{
  debug("cPluginSkinEnigma::Load(%s)\n", fileNameP);
  // does the logo exist already in map
  std::map < std::string, cBitmap * >::iterator i = cacheMapM.find(fileNameP);
  if (i != cacheMapM.end()) {
    // yes - cache hit!
    debug("cPluginSkinEnigma::Load() CACHE HIT!\n");
    // check if logo really exist
    if (i->second == NULL) {
      debug("cPluginSkinEnigma::Load() EMPTY\n");
      // empty logo in cache
      return false;
    }
    bitmapM = i->second;
  } else {
    // no - cache miss!
    debug("cPluginSkinEnigma::Load() CACHE MISS!\n");
    // try to load xpm logo
    LoadXpm(fileNameP);
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
      debug("cPluginSkinEnigma::Load() INSERT(%s)\n", fileNameP);
      cacheMapM.insert(std::make_pair(fileNameP, bitmapM));
    }
    // check if logo really exist
    if (bitmapM == NULL) {
      debug("cPluginSkinEnigma::Load() EMPTY\n");
      // empty logo in cache
      return false;
    }
  }
  return true;
}

cBitmap & cEnigmaLogoCache::Get(void)
{
  return *bitmapM;
}

bool cEnigmaLogoCache::LoadXpm(const char *fileNameP)
{
  struct stat stbuf;
  char *filename;
  cBitmap *bmp = new cBitmap(1, 1, 1);

  // create absolute filename
  asprintf(&filename, "%s/%s.xpm", EnigmaConfig.GetLogoDir(), fileNameP);
  debug("cPluginSkinEnigma::LoadXpm(%s)\n", filename);
  // check validity
  if ((stat(filename, &stbuf) == 0) && bmp->LoadXpm(filename)
      /*TODO? && (bmp->Width() == ChannelLogoWidth)
      && (bmp->Height() == ChannelLogoHeight)*/) {
    debug("cPluginSkinEnigma::LoadXpm() LOGO FOUND\n");
    // assign bitmap
    bitmapM = bmp;
    free(filename);
    return true;
  }
  // no xpm logo found - delete bitmap
  printf("NOT FOUND: %s\n", filename);
  debug("cPluginSkinEnigma::LoadXpm() LOGO NOT FOUND\n");
  delete bmp;
  bitmapM = NULL;
  free(filename);
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
