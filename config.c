/*
 * config.c: 'EnigmaNG' skin for the Video Disk Recorder
 *
 * See the README file for copyright information and how to reach the author.
 *
 */

#include <stdlib.h>
#include "common.h"
#include "config.h"

cEnigmaConfig EnigmaConfig;

cEnigmaConfig::cEnigmaConfig() : showAuxInfo(1), showLogo(1), showVps(1), showSymbols(1),
                                 showListSymbols(1), showProgressbar(1), cacheSize(50),
                                 useChannelId(0), showInfo(1), showRemaining(0), showMarker(1),
                                 singleArea(1), singleArea8Bpp(1), showFlags(1), numReruns(5),
                                 useSubtitleRerun(1), showTimerConflicts(1)
{
  memset(logoDir, 0, sizeof(logoDir));
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
