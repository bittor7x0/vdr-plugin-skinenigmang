#ifdef HAVE_IMAGEMAGICK

#ifndef _OSDIMAGE_BITMAP_H_
#define _OSDIMAGE_BITMAP_H_

#include <vdr/osd.h>
#include <vdr/skins.h>

class cOSDImageBitmap {
public:
  cOSDImageBitmap();
  ~cOSDImageBitmap();
	bool LoadImage(const char *fileNameP, int w, int h, int colors, cBitmap &bmp);

private:
	bool LoadMagick(const char *Filename, int height, int width, int colors, cBitmap &bmp);
};

#endif
#endif //HAVE_IMAGEMAGICK
