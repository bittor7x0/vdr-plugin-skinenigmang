#ifdef HAVE_IMAGEMAGICK
#include "bitmap.h"
#include "config.h"

#include <vdr/themes.h>

#define X_DISPLAY_MISSING
#include <Magick++.h>
using namespace Magick;

#include <vector>
using namespace std;
 
cOSDImageBitmap::cOSDImageBitmap()
{}


cOSDImageBitmap::~cOSDImageBitmap()
{}

bool cOSDImageBitmap::LoadImage(const char *fileNameP, int w, int h, int colors, cBitmap &bmp)
{
  return LoadMagick(fileNameP, w, h, colors, bmp);
}

bool cOSDImageBitmap::LoadMagick(const char *Filename, int width, int height, int colors, cBitmap &bmp)
{
  Image image;
  try {
    image.read(Filename);
    int w = image.columns();
    int h = image.rows();
    if (height != h || width != w) {
      switch (EnigmaConfig.resizeImages) {
        case 0:
          image.sample(Geometry(width, height));
          break;
        case 1:
          image.scale(Geometry(width, height));
          break;
        case 2:
          image.zoom(Geometry(width, height));
          break;
      }
    }
    w = image.columns();
    h = image.rows();
    if (colors != 0){
      image.opacity(OpaqueOpacity);
      image.backgroundColor(Color(0, 0, 0, 0));
      image.quantizeColorSpace(RGBColorspace);
      image.quantizeColors(colors);
      image.quantize();
    }
    bmp.SetSize(w, h);
    bmp.SetBpp(colors <= 16 ? 4 : 8);

    const PixelPacket *pix = image.getConstPixels(0, 0, w, h);
    for (int iy = 0; iy < h; ++iy) {
      for (int ix = 0; ix < w; ++ix) {
        tColor col = (~(pix->opacity * 255 / MaxRGB) << 24)
                     | ((pix->red * 255 / MaxRGB) << 16)
                     | ((pix->green * 255 / MaxRGB) << 8)
                     | (pix->blue * 255 / MaxRGB);
        bmp.DrawPixel(ix, iy, col);
        ++pix;
      }
    }
  } catch (Exception &e) {
    esyslog("ERROR: Couldn't load %s: %s", Filename, e.what());
    return false;
  } catch (...) {
    esyslog("ERROR: Couldn't load %s: Unknown exception caught", Filename);
    return false;
  }
  return true;
}
#endif //HAVE_IMAGEMAGICK
// vim:et:sw=2:ts=2:
