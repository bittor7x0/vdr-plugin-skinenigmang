/*
 * tools.h: 'EnigmaNG' skin for the Video Disk Recorder
 *
 * See the README file for copyright information and how to reach the author.
 *
 */

#ifndef __SKINENIGMA_TOOLS_H
#define __SKINENIGMA_TOOLS_H

#include "common.h"

#ifdef min
#undef min
#endif
#define min(x, y) (x < y ? x : y)

#ifdef max
#undef max
#endif
#define max(x, y) (x > y ? x : y)

std::string parseaux(const char *str);
bool ischaracters(const char *aux, const char *mask);

#endif // __SKINENIGMA_TOOLS_H
// vim:et:sw=2:ts=2:
