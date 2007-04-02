/*
 * logo.h: The 'EnigmaNG' VDR skin
 *
 * See the README file for copyright information and how to reach the author.
 *
 */

#ifndef __SKINENIGMA_LOGO_H
#define __SKINENIGMA_LOGO_H

#include <map>
#include <string>
#include <vdr/channels.h>
#include <vdr/epg.h>
#include <vdr/recording.h>
#include <vdr/osd.h>

#ifdef HAVE_IMAGEMAGICK
#include "bitmap.h"
#endif

// size of channel logos
#define ChannelLogoWidth  80
#define ChannelLogoHeight 80
// size of icons, e.g. icons top right in the main menu...
#define IconWidth         80
#define IconHeight        80
// size of symbols, e.g. the flags
#define SymbolWidth       27
#define SymbolHeight      18

class cEnigmaLogoCache {
private:
	bool fImageRequested;
  unsigned int cacheSizeM;
  cBitmap *bitmapM;
#ifdef HAVE_IMAGEMAGICK
	cOSDImageBitmap image;
	cBitmap *bmpImage;
#endif
  std::map<std::string, cBitmap*> cacheMapM;
  bool LoadImage(const char *fileNameP, int w, int h, int c);
  bool LoadXpm(const char *fileNameP, int w, int h);
	bool Load(const char *fileNameP, int w, int h);
public:
  cEnigmaLogoCache(unsigned int cacheSizeP);
  ~cEnigmaLogoCache();
  bool Resize(unsigned int cacheSizeP);
	bool LoadEventImage(const cEvent *Event, int w, int h, int c);
	bool LoadRecordingImage(const cRecording *Recording, int w, int h, int c);
	bool LoadChannelLogo(const cChannel *Channel);
	bool LoadSymbol(const char *fileNameP);
	bool LoadIcon(const char *fileNameP);
  cBitmap& Get(void);
  bool Flush(void);
};

extern cEnigmaLogoCache EnigmaLogoCache;

#endif // __SKINENIGMA_LOGO_H
