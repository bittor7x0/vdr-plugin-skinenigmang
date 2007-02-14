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
#include <vdr/osd.h>

#define ChannelLogoWidth  80
#define ChannelLogoHeight 80

class cEnigmaLogoCache {
private:
  unsigned int cacheSizeM;
  cBitmap *bitmapM;
  std::map<std::string, cBitmap*> cacheMapM;
  bool LoadXpm(const char *fileNameP);
public:
  cEnigmaLogoCache(unsigned int cacheSizeP);
  ~cEnigmaLogoCache();
  bool Resize(unsigned int cacheSizeP);
  bool Load(const char *fileNameP);
  cBitmap& Get(void);
  bool Flush(void);
};

extern cEnigmaLogoCache EnigmaLogoCache;

#endif // __SKINENIGMA_LOGO_H
