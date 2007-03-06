/*
 * tools.c: The 'EnigmaNG' VDR skin
 *
 * See the README file for copyright information and how to reach the author.
 *
 */

#include <sstream>

#ifndef __STL_CONFIG_H
#define __STL_CONFIG_H
#endif

#include <stdlib.h>
#include <string.h>
#include "common.h"
#include "i18n.h"
#include "tools.h"

using namespace std;

#define AUX_HEADER_EPGSEARCH             "EPGSearch: "
#define AUX_TAGS_EPGSEARCH_START         "<epgsearch>"
#define AUX_TAGS_EPGSEARCH_ITEM_1A_START "<Channel>"
#define AUX_TAGS_EPGSEARCH_ITEM_1A_END   "</Channel>"
#define AUX_TAGS_EPGSEARCH_ITEM_2A_START "<Search timer>"
#define AUX_TAGS_EPGSEARCH_ITEM_2A_END   "</Search timer>"
#define AUX_TAGS_EPGSEARCH_ITEM_1B_START "<update>"
#define AUX_TAGS_EPGSEARCH_ITEM_1B_END   "</update>"
#define AUX_TAGS_EPGSEARCH_ITEM_2B_START "<eventid>"
#define AUX_TAGS_EPGSEARCH_ITEM_2B_END   "</eventid>"
#define AUX_TAGS_EPGSEARCH_END           "</epgsearch>"

#define AUX_HEADER_VDRADMIN            "VDRAdmin-AM: "
#define AUX_TAGS_VDRADMIN_START        "<vdradmin-am>"
#define AUX_TAGS_VDRADMIN_ITEM1_START  "<pattern>"
#define AUX_TAGS_VDRADMIN_ITEM1_END    "</pattern>"
#define AUX_TAGS_VDRADMIN_END          "</vdradmin-am>"

#define AUX_HEADER_PIN                 "Protected: "
#define AUX_TAGS_PIN_START             "<pin-plugin>"
#define AUX_TAGS_PIN_ITEM1_START       "<protected>"
#define AUX_TAGS_PIN_ITEM1_END         "</protected>"
#define AUX_TAGS_PIN_END               "</pin-plugin>"

const char *parseaux(const char *aux)
{
	bool founditem = false;
	stringstream sstrReturn;
  char *start, *end;
  // check if egpsearch
  start = strcasestr(aux, AUX_TAGS_EPGSEARCH_START);
  end = strcasestr(aux, AUX_TAGS_EPGSEARCH_END);
  if (start && end) {
    // add header
    sstrReturn << AUX_HEADER_EPGSEARCH;
    // parse first item
    char *tmp;
    if ((tmp = strcasestr(start, AUX_TAGS_EPGSEARCH_ITEM_1A_START)) != NULL) {
      if (tmp < end) {
				tmp += strlen(AUX_TAGS_EPGSEARCH_ITEM_1A_START);
        char *tmp2;
        if ((tmp2 = strcasestr(tmp, AUX_TAGS_EPGSEARCH_ITEM_1A_END)) != NULL) {
          // add channel
          sstrReturn << string(tmp, tmp2 - tmp);
          founditem = true;
        } else {
          founditem = false;
        }
      }
    }
    // parse second item
    if ((tmp = strcasestr(start, AUX_TAGS_EPGSEARCH_ITEM_2A_START)) != NULL) {
      if (tmp < end) {
    		tmp += strlen(AUX_TAGS_EPGSEARCH_ITEM_2A_START);
        char *tmp2;
        if ((tmp2 = strcasestr(tmp, AUX_TAGS_EPGSEARCH_ITEM_2A_END)) != NULL) {
          // add separator
          if (founditem) {
            sstrReturn << ", ";
          }
          // add search item
          sstrReturn << string(tmp, tmp2 - tmp);
          founditem = true;
        } else {
          founditem = false;
        }
      }
    }
    // timer check?
    if ((tmp = strcasestr(start, AUX_TAGS_EPGSEARCH_ITEM_1B_START)) != NULL) {
      if (tmp < end) {
    		tmp += strlen(AUX_TAGS_EPGSEARCH_ITEM_1B_START);
        char *tmp2;
        if ((tmp2 = strcasestr(tmp, AUX_TAGS_EPGSEARCH_ITEM_1B_END)) != NULL) {
          if (string(tmp, tmp2 - tmp) != "0") {
            // add separator
            if (founditem) {
              sstrReturn << ", ";
            }
            founditem = true;
            // add search item
            sstrReturn << tr("Timer check");

            // parse second item
            if ((tmp = strcasestr(start, AUX_TAGS_EPGSEARCH_ITEM_2B_START)) != NULL) {
              if (tmp < end) {
                tmp += strlen(AUX_TAGS_EPGSEARCH_ITEM_2B_START);
                char *tmp2;
                if ((tmp2 = strcasestr(tmp, AUX_TAGS_EPGSEARCH_ITEM_2B_END)) != NULL) {
                  // add separator
                  if (founditem) {
                    sstrReturn << ", ";
                  }
                  // add search item
                  sstrReturn << "eventid=" << string(tmp, tmp2 - tmp);
                }
              }
            }
          } else {
            founditem = false;
          }
        } else {
          founditem = false;
        }
      }
    }

    // use old syntax
    if (!founditem) {
      start += strlen(AUX_HEADER_EPGSEARCH);
      sstrReturn << string(start, end - start);
    }
		sstrReturn << endl;
  }
  // check if VDRAdmin-AM
  start = strcasestr(aux, AUX_TAGS_VDRADMIN_START);
  end = strcasestr(aux, AUX_TAGS_VDRADMIN_END);
  if (start && end) {
    // add header
    sstrReturn << AUX_HEADER_VDRADMIN;
    // parse first item
    char *tmp;
    if ((tmp = strcasestr(start, AUX_TAGS_VDRADMIN_ITEM1_START)) != NULL) {
      if (tmp < end) {
    		tmp += strlen(AUX_TAGS_VDRADMIN_ITEM1_START);
        char *tmp2;
        if ((tmp2 = strcasestr(tmp, AUX_TAGS_VDRADMIN_ITEM1_END)) != NULL) {
          // add search item
          sstrReturn << string(tmp, tmp2 - tmp) << endl;
        }
      }
    }
  }
  // check if pin
  start = strcasestr(aux, AUX_TAGS_PIN_START);
  end = strcasestr(aux, AUX_TAGS_PIN_END);
  if (start && end) {
    // add header
    sstrReturn << AUX_HEADER_PIN;
    // parse first item
    char *tmp;
    if ((tmp = strcasestr(start, AUX_TAGS_PIN_ITEM1_START)) != NULL) {
      if (tmp < end) {
    		tmp += strlen(AUX_TAGS_PIN_ITEM1_START);
        char *tmp2;
        if ((tmp2 = strcasestr(tmp, AUX_TAGS_PIN_ITEM1_END)) != NULL) {
          // add search item
          sstrReturn << string(tmp, tmp2 - tmp) << endl;
        }
      }
    }
  }

	if (!sstrReturn.str().empty())
		return sstrReturn.str().c_str();

  return aux;
}

bool ischaracters(const char *str, const char *mask)
{
  bool match = true;
  const char *p = str;
  for (; *p; ++p) {
    const char *m = mask;
    bool tmp = false;
    for (; *m; ++m) {
      if (*p == *m)
        tmp = true;
    }
    match = match && tmp;
  }
  return match;
}
