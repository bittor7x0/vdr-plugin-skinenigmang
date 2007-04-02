/*
 * config.h: 'EnigmaNG' skin for the Video Disk Recorder
 *
 * See the README file for copyright information and how to reach the author.
 *
 */

#ifndef __SKINENIGMA_CONFIG_H
#define __SKINENIGMA_CONFIG_H

#ifdef HAVE_IMAGEMAGICK
#define NUM_IMAGEEXTENSIONTEXTS 3
extern const char *imageExtensionTexts[NUM_IMAGEEXTENSIONTEXTS];
#else
#define NUM_IMAGEEXTENSIONTEXTS 0
#endif

struct cEnigmaConfig
{
private:
  char logoDir[255];
	char strImagesDir[255];
public:
  cEnigmaConfig();
  ~cEnigmaConfig();
  void SetLogoDir(const char *logodirP);
  char *GetLogoDir(void) { return logoDir; }
	void SetImagesDir(const char *dir);
	char *GetImagesDir(void) {return strImagesDir; }
	const char *GetImageExtension(void);
  int showAuxInfo;
  int showLogo;
  int showVps;
  int showSymbols;
  int showListSymbols;
  int showProgressbar;
  int cacheSize;
  int useChannelId;
  int showInfo;
  int showRemaining;
  int showMarker;
  int singleArea;
  int singleArea8Bpp;
  int showFlags;
  int numReruns;
  int useSubtitleRerun;
  int showTimerConflicts;
	int showRecSize;
	int showImages;
	int resizeImages;
	int showMailIcon;
	int imageWidth;
	int imageHeight;
	int imageExtension;
	int fullTitleWidth;
};

extern cEnigmaConfig EnigmaConfig;

#endif // __SKINENIGMA_CONFIG_H
