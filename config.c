/*
 * config.c: 'EnigmaNG' skin for the Video Disk Recorder
 *
 * See the README file for copyright information and how to reach the author.
 *
 */

#include <stdlib.h>
#include "common.h"
#include "config.h"

#ifdef HAVE_IMAGEMAGICK
const char *imageExtensionTexts[NUM_IMAGEEXTENSIONTEXTS] = { "xpm", "jpg", "png" };
#endif

cEnigmaConfig EnigmaConfig;

cEnigmaConfig::cEnigmaConfig() : showAuxInfo(1), showLogo(1), showVps(1), showSymbols(1),
                                 showListSymbols(1), showProgressbar(1), cacheSize(50),
                                 useChannelId(0), showInfo(1), showRemaining(0), showMarker(1),
                                 singleArea(1), singleArea8Bpp(1), showFlags(1), numReruns(5),
                                 useSubtitleRerun(1), showTimerConflicts(1), showRecSize(2),
																 showImages(1), resizeImages(0), showMailIcon(0),
																 imageWidth(120), imageHeight(120), imageExtension(0), fullTitleWidth(0)
{
  memset(logoDir, 0, sizeof(logoDir));
  memset(strImagesDir, 0, sizeof(strImagesDir));
}

cEnigmaConfig::~cEnigmaConfig()
{
}

void cEnigmaConfig::SetLogoDir(const char *logodirP)
{
  if (logodirP)
  {
    debug("cEnigmaConfig::SetLogoDir(%s)\n", logodirP);
    strncpy(logoDir, logodirP, sizeof(logoDir));
  }
}

void cEnigmaConfig::SetImagesDir(const char *dir)
{
	if (dir)
	{
		debug("cEnigmaConfig::SetImagesDir(%s)\n", dir);
    strncpy(strImagesDir, dir, sizeof(strImagesDir));
	}
}

const char *cEnigmaConfig::GetImageExtension(void)
{
#ifdef HAVE_IMAGEMAGICK
	return (0 <= imageExtension && imageExtension < NUM_IMAGEEXTENSIONTEXTS) ? imageExtensionTexts[imageExtension] : imageExtensionTexts[0];
#else
	return "xpm";
#endif
}

