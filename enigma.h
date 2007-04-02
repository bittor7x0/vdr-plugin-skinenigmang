/*
 * enigma.h: The 'EnigmaNG' VDR skin
 *
 */

#ifndef __ENIGMA_H
#define __ENIGMA_H

#include <vdr/skins.h>
#include <vdr/skinclassic.h>

class cSkinEnigma : public cSkin {
private:
	cSkin *skinFallback;

public:
  cSkinEnigma();
  virtual const char *Description(void);
  virtual cSkinDisplayChannel *DisplayChannel(bool WithInfo);
  virtual cSkinDisplayMenu *DisplayMenu(void);
  virtual cSkinDisplayReplay *DisplayReplay(bool ModeOnly);
  virtual cSkinDisplayVolume *DisplayVolume(void);
  virtual cSkinDisplayTracks *DisplayTracks(const char *Title, int NumTracks, const char * const *Tracks);
  virtual cSkinDisplayMessage *DisplayMessage(void);
  };

#endif //__ENIGMA_H
