/*
 * common.h: The 'EnigmaNG' VDR skin
 *
 * See the README file for copyright information and how to reach the author.
 *
 */

#ifndef __SKINENIGMA_COMMON_H
#define __SKINENIGMA_COMMON_H

#include <string>
#include <vdr/tools.h>

#ifdef DEBUG
#define debug(x...) printf("EnigmaNG: " x);
#define error(x...) printf("EnigmaNG: " x);
#else
#define debug(x...) ;
#define error(x...) esyslog("EnigmaNG: " x);
#endif

#endif // __SKINENIGMA_COMMON_H
