/*
 * config.h: 'EnigmaNG' skin for the Video Disk Recorder
 *
 * See the README file for copyright information and how to reach the author.
 *
 */

#ifndef __SKINENIGMA_CONFIG_H
#define __SKINENIGMA_CONFIG_H

struct cEnigmaConfig
{
private:
  char logoDir[255];
public:
  cEnigmaConfig();
  ~cEnigmaConfig();
  void SetLogoDir(const char *logodirP);
  char *GetLogoDir(void) { return logoDir; }
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
};

extern cEnigmaConfig EnigmaConfig;

#endif // __SKINENIGMA_CONFIG_H
