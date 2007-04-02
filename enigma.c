/*
 * enigma.c: The 'EnigmaNG' VDR skin
 *
 * See the README file for copyright information and how to reach the author.
 *
 */

#include <math.h>
#include <ctype.h>
#include <sstream>
#include <iomanip>
#include <locale.h>

#ifndef __STL_CONFIG_H
#define __STL_CONFIG_H
#endif

#include "common.h"
#include "tools.h"
#include "config.h"
#include "logo.h"
#include "i18n.h"
#include "enigma.h"
#include "status.h"
#include <vdr/device.h>
#include <vdr/timers.h>
#include <vdr/menu.h>
#include <vdr/font.h>
#include <vdr/osd.h>
#include <vdr/themes.h>
#include <vdr/plugin.h>

#ifdef SKINENIGMA_HAVE_EPGSEARCH
#include "../epgsearch/services.h"
#endif

using namespace std;

#define MAX_AUDIO_BITMAPS      3
#define MAX_SPEED_BITMAPS      10
#define MAX_TRICKSPEED_BITMAPS 4


#include "symbols/small/eventparttimer.xpm"
#include "symbols/small/eventtimer.xpm"
#include "symbols/small/eventvps.xpm"
#include "symbols/small/eventrunning.xpm"
#include "symbols/small/eventrecording.xpm"
#include "symbols/small/recordingnew.xpm"

// small symbols (e.g. for channelinfo)
#include "symbols/small/audio.xpm"
#include "symbols/small/audioleft.xpm"
#include "symbols/small/audioright.xpm"
#include "symbols/small/dolbydigital.xpm"
#include "symbols/small/encrypted.xpm"
#include "symbols/small/teletext.xpm"
#include "symbols/small/vps.xpm"
#include "symbols/small/radio.xpm"
#include "symbols/small/recording.xpm"
#include "symbols/small/timer.xpm"
#include "symbols/small/run.xpm"
#ifdef USE_PLUGIN_MAILBOX
#include "symbols/small/mail.xpm"
#endif

static cBitmap bmEventPartTimer(eventparttimer_xpm);
static cBitmap bmEventTimer(eventtimer_xpm);
static cBitmap bmEventVPS(eventvps_xpm);
static cBitmap bmEventRunning(eventrunning_xpm);
static cBitmap bmEventRecording(eventrecording_xpm);
static cBitmap bmRecordingNew(recordingnew_xpm);

// channel info
static cBitmap bmAudio[MAX_AUDIO_BITMAPS] = {
  cBitmap(audio_xpm),
  cBitmap(audioleft_xpm),
  cBitmap(audioright_xpm)
};
static cBitmap bmDolbyDigital(dolbydigital_xpm);
static cBitmap bmEncrypted(encrypted_xpm);
static cBitmap bmRadio(radio_xpm);
static cBitmap bmRecording(recording_xpm);
static cBitmap bmTeletext(teletext_xpm);
static cBitmap bmVPS(vps_xpm);
static cBitmap bmRun(run_xpm);
static cBitmap bmTimer(timer_xpm);
#ifdef USE_PLUGIN_MAILBOX
static cBitmap bmMail(mail_xpm);
#endif

// audio menu
static const char *strAudio_large[MAX_AUDIO_BITMAPS] = {
  "icons/audio/audioStereo",
  "icons/audio/audioLeft",
  "icons/audio/audioRight"
};

// replay
static const char *strSlowForward_large[MAX_TRICKSPEED_BITMAPS] = {
  "icons/replay/slowForward",
  "icons/replay/slowForward1",
  "icons/replay/slowForward2",
  "icons/replay/slowForward3"
};
static const char *strFastForward_large[MAX_SPEED_BITMAPS] = {
  "icons/replay/fastForward",
  "icons/replay/fastForward1",
  "icons/replay/fastForward2",
  "icons/replay/fastForward3",
  "icons/replay/fastForward4",
  "icons/replay/fastForward5",
  "icons/replay/fastForward6",
  "icons/replay/fastForward7",
  "icons/replay/fastForward8",
  "icons/replay/fastForward9"
};
static const char *strSlowRewind_large[MAX_TRICKSPEED_BITMAPS] = {
  "icons/replay/slowRewind",
  "icons/replay/slowRewind1",
  "icons/replay/slowRewind2",
  "icons/replay/slowRewind3"
};
static const char *strFastRewind_large[MAX_SPEED_BITMAPS] = {
  "icons/replay/fastRewind",
  "icons/replay/fastRewind1",
  "icons/replay/fastRewind2",
  "icons/replay/fastRewind3",
  "icons/replay/fastRewind4",
  "icons/replay/fastRewind5",
  "icons/replay/fastRewind6",
  "icons/replay/fastRewind7",
  "icons/replay/fastRewind8",
  "icons/replay/fastRewind9"
};

static cTheme Theme;

// Background colors
THEME_CLR(Theme, clrBackground, 0xE5DEE5FA);
THEME_CLR(Theme, clrAltBackground, 0xE5B2BBD6);
THEME_CLR(Theme, clrTitleBg, 0xE54158BC);
THEME_CLR(Theme, clrLogoBg, 0xE58EA4E3);
THEME_CLR(Theme, clrBottomBg, 0xE51D2F7D);
THEME_CLR(Theme, clrBotProgBarBg, 0xFF808080);
THEME_CLR(Theme, clrBotProgBarFg, 0xFFFFFFFF);
// Text colors
THEME_CLR(Theme, clrMenuTxtFg, 0xFF000000);
THEME_CLR(Theme, clrTitleFg, 0xFFFFFFFF);
THEME_CLR(Theme, clrTitleShadow, 0xFF000000);
// Symbols
THEME_CLR(Theme, clrSymbolActive, 0xFFC4C400);
THEME_CLR(Theme, clrSymbolInactive, 0xFF808080);
THEME_CLR(Theme, clrSymbolRecord, 0xFFC40000);
THEME_CLR(Theme, clrSymbolRecordBg, 0xFFFFFFFF);
THEME_CLR(Theme, clrSymbolTimerActive, 0xFF0000C4);
THEME_CLR(Theme, clrSymbolVpsActive, 0xFFC4C400);
THEME_CLR(Theme, clrSymbolRecActive, 0xFFC40000);
THEME_CLR(Theme, clrSymbolRunActive, 0xFF00C400);
// Help buttons
THEME_CLR(Theme, clrButtonRedFg, 0xFFFFFFFF);
THEME_CLR(Theme, clrButtonRedBg, 0xE5C40000);
THEME_CLR(Theme, clrButtonGreenFg, 0xFF000000);
THEME_CLR(Theme, clrButtonGreenBg, 0xE500C400);
THEME_CLR(Theme, clrButtonYellowFg, 0xFF000000);
THEME_CLR(Theme, clrButtonYellowBg, 0xE5C4C400);
THEME_CLR(Theme, clrButtonBlueFg, 0xFFFFFFFF);
THEME_CLR(Theme, clrButtonBlueBg, 0xE50000C4);
// Messages
THEME_CLR(Theme, clrMessageBorder, 0xE5FF0000);
THEME_CLR(Theme, clrMessageStatusFg, 0xFF000000);
THEME_CLR(Theme, clrMessageStatusBg, 0xE5D7FFD1);
THEME_CLR(Theme, clrMessageInfoFg, 0xFF000000);
THEME_CLR(Theme, clrMessageInfoBg, 0xE5D1DDFF);
THEME_CLR(Theme, clrMessageWarningFg, 0xFF000000);
THEME_CLR(Theme, clrMessageWarningBg, 0xE5F9FFD1);
THEME_CLR(Theme, clrMessageErrorFg, 0xFF000000);
THEME_CLR(Theme, clrMessageErrorBg, 0xE5FFD1D1);
// Volume bar
THEME_CLR(Theme, clrVolumeBar, 0xFF33CC33);
THEME_CLR(Theme, clrVolumeBarMute, 0xFFFF0000);
// Menu list items
THEME_CLR(Theme, clrMenuItemCurrentFg, 0xFF000000);
THEME_CLR(Theme, clrMenuHighlight, 0xE5B2BBD6);
THEME_CLR(Theme, clrMenuItemSelectableFg, 0xFF000000);
THEME_CLR(Theme, clrMenuItemNotSelectableFg, 0xE54158BC);
// title/subtitle
THEME_CLR(Theme, clrMenuEventTitle, 0xFF000000);
THEME_CLR(Theme, clrMenuEventShortText, 0xFF1D2F7D);
// Scrollbar
THEME_CLR(Theme, clrMenuScrollbarTotal, 0xE5B2BBD6);
THEME_CLR(Theme, clrMenuScrollbarShown, 0xFF000000);
// Replay OSD
THEME_CLR(Theme, clrReplayCurrent, 0xFF1D2F7D);
THEME_CLR(Theme, clrReplayTotal, 0xFF1D2F7D);
THEME_CLR(Theme, clrReplayModeJump, 0xFF1D2F7D);
THEME_CLR(Theme, clrReplayBarAreaBg, 0xE5DEE5FA);
THEME_CLR(Theme, clrReplayProgressSeen, 0xFF8EA4E3);
THEME_CLR(Theme, clrReplayProgressRest, 0xE5DEE5FA);
THEME_CLR(Theme, clrReplayProgressSelected, 0xFF4158BC);
THEME_CLR(Theme, clrReplayProgressMark, 0xFF4158BC);
THEME_CLR(Theme, clrReplayProgressCurrent, 0xFFFF0000);

#define TinyGap 1
#define SmallGap 2
#define Gap 4
#define BigGap 8
#define Roundness 10
#define MessageHeight (2 * SmallGap + cFont::GetFont(fontOsd)->Height() + 2 * SmallGap)

#define TitleDecoGap SmallGap
#define TitleDecoGap2 SmallGap
#define TitleDecoHeight SmallGap
#define TitleDeco (TitleDecoGap + TitleDecoHeight + TitleDecoGap2)
#define LogoDecoGap SmallGap
#define LogoDecoGap2 Gap
#define LogoDecoWidth SmallGap
#define MarkerGap 6
#define ListProgressBarGap Gap
#define ListProgressBarBorder TinyGap

// --- cSkinEnigmaDisplayChannel --------------------------------------------

class cSkinEnigmaDisplayChannel:public cSkinDisplayChannel {
private:
  cOsd *osd;
  bool fShowLogo;
  time_t lastTime;

  int xLogoLeft, xLogoRight, yLogoTop, yLogoBottom, xLogoDecoLeft, xLogoDecoRight, xLogoPos, yLogoPos;
  int xTitleLeft, xTitleRight, yTitleTop, yTitleBottom, yTitleDecoTop, yTitleDecoBottom;
  int xEventNowLeft, xEventNowRight, yEventNowTop, yEventNowBottom;
  int xEventNextLeft, xEventNextRight, yEventNextTop, yEventNextBottom;
  int xBottomLeft, xBottomRight, yBottomTop, yBottomBottom;
  int xMessageLeft, xMessageRight, yMessageTop, yMessageBottom;
  int xFirstSymbol;

  int lineHeightSml;
  int lineHeightOsd;

  bool HasChannelTimerRecording(const cChannel *Channel);
  void DrawAreas(void);
  void DrawGroupInfo(const cChannel *Channel, int Number);
  void DrawChannelInfo(const cChannel *Channel, int Number);
  cString GetChannelName(const cChannel *Channel);
  cString GetChannelNumber(const cChannel *Channel, int Number);
public:
  cSkinEnigmaDisplayChannel(bool WithInfo);
  virtual ~ cSkinEnigmaDisplayChannel();
  virtual void SetChannel(const cChannel *Channel, int Number);
  virtual void SetEvents(const cEvent *Present, const cEvent *Following);
  virtual void SetMessage(eMessageType Type, const char *Text);
  virtual void Flush(void);
};

cSkinEnigmaDisplayChannel::cSkinEnigmaDisplayChannel(bool WithInfo)
{
  fShowLogo = (!EnigmaConfig.singleArea || EnigmaConfig.singleArea8Bpp) && EnigmaConfig.showLogo;
  xFirstSymbol = 0;
  lastTime = 0;

  lineHeightSml = cFont::GetFont(fontSml)->Height();
  lineHeightOsd = cFont::GetFont(fontOsd)->Height();

  int LogoSize = max(lineHeightSml * 2 + lineHeightOsd * 2 + SmallGap, ChannelLogoHeight);
  LogoSize += (LogoSize % 2 ? 1 : 0);
  // title bar & logo area
  xLogoLeft = 0;
  xLogoRight = xLogoLeft + LogoSize;
  xLogoDecoLeft = xLogoRight + LogoDecoGap;
  xLogoDecoRight = xLogoDecoLeft + LogoDecoWidth;
  xTitleLeft = (fShowLogo && !EnigmaConfig.fullTitleWidth ? xLogoDecoRight + LogoDecoGap2 : xLogoLeft);
  xTitleRight = xTitleLeft + ((Setup.OSDWidth - xTitleLeft) & ~0x07); // width must be multiple of 8
  yTitleTop = 0;
  yTitleBottom = yTitleTop + lineHeightOsd;
  yTitleDecoTop = yTitleBottom + TitleDecoGap;
  yTitleDecoBottom = yTitleDecoTop + TitleDecoHeight;
  yLogoTop = yTitleDecoBottom + TitleDecoGap2;
  yLogoBottom = yLogoTop + LogoSize;
  xLogoPos = xLogoLeft + (LogoSize - ChannelLogoHeight) / 2;
  yLogoPos = yLogoTop + (LogoSize - ChannelLogoHeight) / 2;
  // current event area
  xEventNowLeft = (fShowLogo ? xLogoDecoRight + LogoDecoGap2 : xTitleLeft);
  xEventNowRight = xTitleRight;
  yEventNowTop = yLogoTop;
  yEventNowBottom = yEventNowTop + lineHeightOsd + lineHeightSml;
  // next event area
  xEventNextLeft = xEventNowLeft;
  xEventNextRight = xEventNowRight;
  yEventNextTop = yEventNowBottom + SmallGap;
  yEventNextBottom = yEventNextTop + lineHeightOsd + lineHeightSml;
  // progress bar area
  xBottomLeft = xTitleLeft;
  xBottomRight = xTitleRight;
  yBottomTop = yEventNextBottom + SmallGap;
  yBottomBottom = yBottomTop + lineHeightOsd;
  // message area
  xMessageLeft = xEventNowLeft;
  xMessageRight = xTitleRight;
  yMessageTop = yLogoTop + (LogoSize - 2 * SmallGap - lineHeightSml - 2 * SmallGap) / 2;
  yMessageBottom = yMessageTop + MessageHeight;

  // create osd
  osd = cOsdProvider::NewOsd(Setup.OSDLeft, Setup.OSDTop + (Setup.ChannelInfoPos ? 0 : (Setup.OSDHeight - yBottomBottom)) );
  tArea Areas[] = { {0, 0, xBottomRight - 1, yBottomBottom - 1, fShowLogo ? 8 : 4} };
  if (EnigmaConfig.singleArea && osd->CanHandleAreas(Areas, sizeof(Areas) / sizeof(tArea)) == oeOk) {
    osd->SetAreas(Areas, sizeof(Areas) / sizeof(tArea));
    // clear all
    osd->DrawRectangle(0, 0, osd->Width(), osd->Height(), clrTransparent);
  } else {
    if (fShowLogo) {
      tArea Areas[] = { {xLogoLeft, yLogoTop, xLogoDecoRight - 1, yLogoBottom - 1, 4},
                        {xTitleLeft, yTitleTop, xTitleRight - 1, yTitleDecoBottom - 1, 2},
                        {xEventNowLeft, yEventNowTop, xEventNowRight - 1, yEventNextBottom - 1, 4},
                        {xBottomLeft, yBottomTop, xBottomRight - 1, yBottomBottom - 1, 4}
      };
      eOsdError rc = osd->CanHandleAreas(Areas, sizeof(Areas) / sizeof(tArea));
      if (rc == oeOk)
        osd->SetAreas(Areas, sizeof(Areas) / sizeof(tArea));
      else {
        error("cSkinEnigmaDisplayChannel: CanHandleAreas() returned %d\n", rc);
        delete osd;
        osd = NULL;
        throw 1;
        return;
      }
    } else {
      tArea Areas[] = { {xTitleLeft, yTitleTop, xTitleRight - 1, yTitleDecoBottom - 1, 2},
                        {xEventNowLeft, yEventNowTop, xEventNowRight - 1, yEventNextBottom - 1, 4},
                        {xBottomLeft, yBottomTop, xBottomRight - 1, yBottomBottom - 1, 4}
      };
      eOsdError rc = osd->CanHandleAreas(Areas, sizeof(Areas) / sizeof(tArea));
      if (rc == oeOk)
        osd->SetAreas(Areas, sizeof(Areas) / sizeof(tArea));
      else {
        error("cSkinEnigmaDisplayChannel: CanHandleAreas() returned %d\n", rc);
        delete osd;
        osd = NULL;
        throw 1;
        return;
      }
    }
  }
}

cSkinEnigmaDisplayChannel::~cSkinEnigmaDisplayChannel()
{
  delete osd;
}

bool cSkinEnigmaDisplayChannel::HasChannelTimerRecording(const cChannel *Channel)
{
  // try to find current channel from timers
  for (cTimer * t = Timers.First(); t; t = Timers.Next(t)) {
    if ((t->Channel() == Channel) && t->Recording())
      return true;
  }
  return false;
}

void cSkinEnigmaDisplayChannel::DrawAreas(void)
{
  // draw titlebar
  osd->DrawRectangle(xTitleLeft, yTitleTop, xTitleRight - 1, yTitleBottom - 1,
                     Theme.Color(clrTitleBg));
  osd->DrawRectangle(xTitleLeft, yTitleDecoTop, xTitleRight - 1,
                     yTitleDecoBottom - 1, Theme.Color(clrTitleBg));
  // draw rounded left corner of title bar
  osd->DrawEllipse(xTitleLeft, yTitleTop, xTitleLeft + Roundness - 1,
                   yTitleTop + Roundness - 1, clrTransparent, -2);
  // draw rounded right corner of title bar
  osd->DrawEllipse(xTitleRight - Roundness, yTitleTop, xTitleRight - 1,
                   yTitleTop + Roundness - 1, clrTransparent, -1);
  // draw current event area
  osd->DrawRectangle(xEventNowLeft, yEventNowTop, xEventNowRight - 1,
                     yEventNowBottom - 1, Theme.Color(clrBackground));
  // draw next event area
  osd->DrawRectangle(xEventNextLeft, yEventNextTop, xEventNextRight - 1,
                     yEventNextBottom - 1, Theme.Color(clrAltBackground));
  // draw progress bar area
  osd->DrawRectangle(xBottomLeft, yBottomTop, xBottomRight - 1,
                     yBottomBottom - 1, Theme.Color(clrBottomBg));
  osd->DrawEllipse(xBottomLeft, yBottomBottom - Roundness,
                   xBottomLeft + Roundness, yBottomBottom - 1, clrTransparent,
                   -3);
  osd->DrawEllipse(xBottomRight - Roundness, yBottomBottom - Roundness,
                   xBottomRight - 1, yBottomBottom - 1, clrTransparent, -4);
}

void cSkinEnigmaDisplayChannel::DrawGroupInfo(const cChannel *Channel, int Number)
{
  DrawAreas();

  const cFont *font = cFont::GetFont(fontOsd);
  int xName = (fShowLogo && EnigmaConfig.fullTitleWidth ? xEventNowLeft : xTitleLeft + Roundness + font->Width("0000-") + Gap);
  // draw channel group name
  osd->DrawText(xName + 3, yTitleTop + 3, GetChannelName(Channel),
                Theme.Color(clrTitleShadow), clrTransparent, font,
                xTitleRight - Roundness - xName - 3, lineHeightOsd - 3);
  osd->DrawText(xName, yTitleTop, GetChannelName(Channel),
                Theme.Color(clrTitleFg), clrTransparent, font,
                xTitleRight - Roundness - xName, lineHeightOsd);
}

void cSkinEnigmaDisplayChannel::DrawChannelInfo(const cChannel *Channel, int Number)
{
  DrawAreas();

  const cFont *font = cFont::GetFont(fontOsd);
  int xNumber = xTitleLeft + Roundness;
  int xName = xNumber + font->Width("0000-") + Gap;
  if (fShowLogo && EnigmaConfig.fullTitleWidth) {
    xNumber = xTitleLeft + Roundness;
    xName = xEventNowLeft;
  }

  // draw channel number
  osd->DrawText(xNumber + 3, yTitleTop + 3, GetChannelNumber(Channel, Number),
                Theme.Color(clrTitleShadow), clrTransparent, font,
                xName - xNumber - Gap - 3, yTitleBottom - yTitleTop - 3, taCenter);
  osd->DrawText(xNumber, yTitleTop, GetChannelNumber(Channel, Number),
                Theme.Color(clrTitleFg), clrTransparent, font,
                xName - xNumber - Gap, yTitleBottom - yTitleTop, taCenter);
  // draw channel name
  osd->DrawText(xName + 3, yTitleTop + 3, GetChannelName(Channel),
                Theme.Color(clrTitleShadow), clrTransparent, font,
                xTitleRight - Roundness - xName - 3,
                yTitleBottom - yTitleTop - 3);
  osd->DrawText(xName, yTitleTop, GetChannelName(Channel),
                Theme.Color(clrTitleFg), clrTransparent, font,
                xTitleRight - Roundness - xName, yTitleBottom - yTitleTop);
  // draw symbols
  // right edge of logo
  int xs = xBottomRight - Roundness;
  // bottom edge of logo
  int ys = yBottomTop + (yBottomBottom - yBottomTop - SymbolHeight) / 2;
  bool isvps = false;
  if (EnigmaConfig.showVps) {
    // check if vps
    // get schedule
    cSchedulesLock SchedulesLock;
    const cSchedules *Schedules = cSchedules::Schedules(SchedulesLock);
    if (Schedules) {
      const cSchedule *Schedule = Schedules->GetSchedule(Channel);
      if (Schedule) {
        // get present event
        const cEvent *Event = Schedule->GetPresentEvent();
        // check if present event has vps
        if (Event && Event->Vps()) {
          isvps = true;
        }
      }
    }
  }

  bool fFlagFound = false;
  if ((!EnigmaConfig.singleArea || EnigmaConfig.singleArea8Bpp) && EnigmaConfig.showFlags && !isempty(Channel->Alang(0))) {
    char *strFile = NULL;
    asprintf(&strFile, "flags/%s", Channel->Alang(0));
    if (EnigmaLogoCache.LoadSymbol(strFile)) {
      xs -= (EnigmaLogoCache.Get().Width() + SmallGap);
      osd->DrawBitmap(xs, ys, EnigmaLogoCache.Get());
      fFlagFound = true;
    }
    free(strFile);
  }
  if (!fFlagFound) {
    const cFont *fontSmall = cFont::GetFont(fontSml);
    xs -= fontSmall->Width(Channel->Alang(0));
    osd->DrawText(xs, yBottomTop + SmallGap , Channel->Alang(0),
                  Theme.Color(clrSymbolActive), Theme.Color(clrBottomBg), fontSmall,
                  fontSmall->Width(Channel->Alang(0)), yBottomBottom - SmallGap);
  }
  // draw audio symbol according to current audio channel
  int AudioMode = cDevice::PrimaryDevice()->GetAudioChannel();
  if (!(AudioMode >= 0 && AudioMode < MAX_AUDIO_BITMAPS))
    AudioMode = 0;
  xs -= (bmAudio[AudioMode].Width() + SmallGap);
  osd->DrawBitmap(xs, ys, bmAudio[AudioMode],
                  Theme.Color(clrBottomBg), Theme.Color(Channel->Apid(1) ? clrSymbolActive : clrSymbolInactive));
  // draw dolby digital symbol
  xs -= (bmDolbyDigital.Width() + SmallGap);
  osd->DrawBitmap(xs, ys, bmDolbyDigital,
                  Theme.Color(clrBottomBg), Theme.Color(Channel->Dpid(0) ? clrSymbolActive : clrSymbolInactive));
  if (EnigmaConfig.showVps) {
    // draw vps symbol
    xs -= (bmVPS.Width() + SmallGap);
    osd->DrawBitmap(xs, ys, bmVPS,
                    Theme.Color(clrBottomBg), Theme.Color(isvps ? clrSymbolActive : clrSymbolInactive));
  }
  // draw radio symbol if no video PID; otherwise draw teletext symbol
  if (Channel->Vpid()) {
    xs -= (bmTeletext.Width() + SmallGap);
    osd->DrawBitmap(xs, ys, bmTeletext,
                    Theme.Color(clrBottomBg), Theme.Color(Channel->Tpid() ? clrSymbolActive : clrSymbolInactive));
  } else {
    xs -= (bmRadio.Width() + SmallGap);
    osd->DrawBitmap(xs, ys, bmRadio,
                    Theme.Color(clrBottomBg), Theme.Color(Channel->Apid(0) ? clrSymbolActive : clrSymbolInactive));
  }
  // draw encryption symbol
  xs -= (bmEncrypted.Width() + SmallGap);
  osd->DrawBitmap(xs, ys, bmEncrypted,
                  Theme.Color(clrBottomBg), Theme.Color(Channel->Ca() ? clrSymbolActive : clrSymbolInactive));
  // draw recording symbol
  xs -= (bmRecording.Width() + SmallGap);
  if (cRecordControls::Active()) {
    bool fRecording = HasChannelTimerRecording(Channel);
    osd->DrawBitmap(xs, ys, bmRecording,
                    Theme.Color(fRecording ? clrSymbolRecordBg : clrBottomBg),
                    Theme.Color(fRecording ? clrSymbolRecord : clrSymbolActive));
  } else
    osd->DrawBitmap(xs, ys, bmRecording,
                    Theme.Color(clrBottomBg), Theme.Color(clrSymbolInactive));

#ifdef USE_PLUGIN_MAILBOX
  if (EnigmaConfig.showMailIcon) {
    cPlugin *MailBoxPlugin = cPluginManager::GetPlugin("mailbox");
    bool fHasNewMail = false;
    if (MailBoxPlugin && MailBoxPlugin->Service("MailBox-HasNewMail-1.0", &fHasNewMail)) {
      if (fHasNewMail || EnigmaConfig.showMailIcon > 1) {
        xs -= (bmMail.Width() + SmallGap);
        osd->DrawBitmap(xs, ys, bmMail, Theme.Color(clrBottomBg),
                        Theme.Color(fHasNewMail ? clrSymbolActive : clrSymbolInactive));
      }
    }
  }
#endif
  xFirstSymbol = xs - Gap;
}

cString cSkinEnigmaDisplayChannel::GetChannelName(const cChannel *Channel)
{
  char buffer[256];
  // check if channel exists
  if (Channel) {
    snprintf(buffer, sizeof(buffer), "%s", Channel->Name());
  } else {
    snprintf(buffer, sizeof(buffer), "%s", tr("*** Invalid Channel ***"));
  }
  return buffer;
}

cString cSkinEnigmaDisplayChannel::GetChannelNumber(const cChannel *Channel, int Number)
{
  char buffer[256];
  // check if real channel exists
  if (Channel && !Channel->GroupSep()) {
    snprintf(buffer, sizeof(buffer), "%d%s", Channel->Number(), Number ? "-" : "");
  } else if (Number) {
    // no channel but number
    snprintf(buffer, sizeof(buffer), "%d-", Number);
  } else {
    // no channel and no number
    snprintf(buffer, sizeof(buffer), " ");
  }
  return buffer;
}

void cSkinEnigmaDisplayChannel::SetChannel(const cChannel *Channel, int Number)
{
  xFirstSymbol = 0;
  lastTime = 0;

  if (Channel) {
    // clear all
    osd->DrawRectangle(0, 0, osd->Width(), osd->Height(), clrTransparent);

    if (fShowLogo) {
      // draw logo area
      osd->DrawRectangle(xLogoLeft, yLogoTop, xLogoRight - 1, yLogoBottom - 1, Theme.Color(clrLogoBg));
      osd->DrawRectangle(xLogoDecoLeft, yLogoTop, xLogoDecoRight - 1, yLogoBottom - 1, Theme.Color(clrLogoBg));

      if (EnigmaLogoCache.LoadChannelLogo(Channel)) {
        osd->DrawBitmap(xLogoLeft + (xLogoRight - xLogoLeft - ChannelLogoWidth) / 2,
                        yLogoTop + (yLogoBottom - yLogoTop - ChannelLogoHeight) / 2,
                        EnigmaLogoCache.Get(), EnigmaLogoCache.Get().Color(1),
                        Theme.Color(clrLogoBg), true);
      }
    }

    if (Channel->GroupSep())
      DrawGroupInfo(Channel, Number);
    else
      DrawChannelInfo(Channel, Number);
  }
}

void cSkinEnigmaDisplayChannel::SetEvents(const cEvent *Present,
                                          const cEvent *Following)
{
  const cFont *lFontOsd = cFont::GetFont(fontOsd);
  const cFont *lFontSml = cFont::GetFont(fontSml);

  int xTimeLeft = xEventNowLeft + Gap;
  int xTimeWidth = lFontOsd->Width("00:00");

  // check epg datas
  const cEvent *e = Present;    // Current event
  if (e) {
    char sLen[6];
    char sNow[6];
    int total = e->Duration();
    snprintf(sLen, sizeof(sLen), "%d'", total / 60);

    int now = (time(NULL) - e->StartTime());
    if ((now < total) && ((now / 60) > 0)) {
      switch (EnigmaConfig.showRemaining) {
        case 0:
          snprintf(sNow, sizeof(sNow), "+%d'", now / 60);
          break;
        case 1: 
          snprintf(sNow, sizeof(sNow), "-%d'", (int)ceil((total - now) / 60.0));
          break;
        case 2:
          snprintf(sNow, sizeof(sNow), "%ld%%", lrint((ceil((float)now) / total * 100.0)));
          break;
        default:
          error("Invalid value for ShowRemaining: %d", EnigmaConfig.showRemaining);
      }
    }

    int xDurationLeft = xEventNowRight - Gap - max(lFontOsd->Width(sLen), lFontOsd->Width(sNow));
    int xDurationWidth = xEventNowRight - Gap - xDurationLeft;
    int xTextLeft = xTimeLeft + xTimeWidth + BigGap;
    int xTextWidth = xDurationLeft - xTextLeft - BigGap;

    // draw start time
    osd->DrawText(xTimeLeft, yEventNowTop, e->GetTimeString(),
                  Theme.Color(clrMenuEventTitle), Theme.Color(clrBackground),
                  lFontOsd, xTimeWidth, lineHeightOsd);
    // draw title
    osd->DrawText(xTextLeft, yEventNowTop, e->Title(),
                  Theme.Color(clrMenuEventTitle), Theme.Color(clrBackground),
                  lFontOsd, xTextWidth, lineHeightOsd);
    // draw duration
    osd->DrawText(xDurationLeft, yEventNowTop, sLen,
                  Theme.Color(clrMenuEventTitle), Theme.Color(clrBackground),
                  lFontOsd, xDurationWidth, lineHeightOsd, taRight);
    if (e->HasTimer()) {
      if (e->IsRunning())
        osd->DrawBitmap(xTimeLeft + (xTimeWidth - bmRecording.Width()) / 2,
                        yEventNowTop + lineHeightOsd, bmRecording,
                        Theme.Color(clrSymbolRecActive),
                        Theme.Color(clrBackground));
      else
        osd->DrawBitmap(xTimeLeft + (xTimeWidth - bmTimer.Width()) / 2,
                        yEventNowTop + lineHeightOsd, bmTimer,
                        Theme.Color(clrSymbolTimerActive),
                        Theme.Color(clrBackground));
    }
    // draw shorttext
    osd->DrawText(xTextLeft, yEventNowTop + lineHeightOsd, e->ShortText(),
                  Theme.Color(clrMenuEventShortText),
                  Theme.Color(clrBackground), lFontSml, xTextWidth, lineHeightSml);

    // draw duration
    if ((now < total) && ((now / 60) > 0)) {
      osd->DrawText(xDurationLeft, yEventNowTop + lineHeightOsd, sNow,
                    Theme.Color(clrMenuEventShortText),
                    Theme.Color(clrBackground), lFontSml, xDurationWidth,
                    lineHeightSml, taRight);
    }
    // draw timebar
    int xBarLeft = xBottomLeft + Roundness;
    int xBarWidth = (xFirstSymbol > xBarLeft ? (xFirstSymbol - Gap - xBarLeft) : 124);
    int x = xBarLeft + SmallGap + (int)(ceil((float)(now) / (float)(total) * (float)(xBarWidth - Gap - SmallGap)));
    x = min(x, xBarLeft + Gap + xBarWidth - SmallGap - 1);
    osd->DrawRectangle(xBarLeft, yBottomTop + SmallGap + SmallGap,
                       xBarLeft + Gap + xBarWidth - 1,
                       yBottomBottom - SmallGap - SmallGap - 1,
                       Theme.Color(clrBotProgBarBg));
    osd->DrawRectangle(xBarLeft + SmallGap,
                       yBottomTop + SmallGap + SmallGap + SmallGap, x,
                       yBottomBottom - SmallGap - SmallGap - SmallGap - 1,
                       Theme.Color(clrBotProgBarFg));
  }

  e = Following;                // Next event
  if (e) {
    char sLen[6];
    snprintf(sLen, sizeof(sLen), "%d'", e->Duration() / 60);

    int xDurationLeft = xEventNowRight - Gap - lFontOsd->Width(sLen);
    int xDurationWidth = xEventNowRight - Gap - xDurationLeft;
    int xTextLeft = xTimeLeft + xTimeWidth + BigGap;
    int xTextWidth = xDurationLeft - xTextLeft - BigGap;

    // draw start time
    osd->DrawText(xTimeLeft, yEventNextTop, e->GetTimeString(),
                  Theme.Color(clrMenuEventTitle), Theme.Color(clrAltBackground),
                  lFontOsd, xTimeWidth, lineHeightOsd);
    // draw title
    osd->DrawText(xTextLeft, yEventNextTop, e->Title(),
                  Theme.Color(clrMenuEventTitle), Theme.Color(clrAltBackground),
                  lFontOsd, xTextWidth, lineHeightOsd);
    // draw duration
    osd->DrawText(xDurationLeft, yEventNextTop, sLen,
                  Theme.Color(clrMenuEventTitle), Theme.Color(clrAltBackground),
                  lFontOsd, xDurationWidth, lineHeightOsd, taRight);
    if (e->HasTimer())
      osd->DrawBitmap(xTimeLeft + (xTimeWidth - bmTimer.Width()) / 2,
                      yEventNextTop + lineHeightOsd, bmTimer,
                      Theme.Color(clrSymbolTimerActive), Theme.Color(clrAltBackground));
    // draw shorttext
    osd->DrawText(xTextLeft, yEventNextTop + lineHeightOsd, e->ShortText(),
                  Theme.Color(clrMenuEventShortText),
                  Theme.Color(clrAltBackground), lFontSml, xTextWidth, lineHeightSml);
  }
}

void cSkinEnigmaDisplayChannel::SetMessage(eMessageType Type, const char *Text)
{
  // check if message
  if (Text) {
    // save osd region
    osd->SaveRegion(xMessageLeft, yMessageTop, xMessageRight - 1, yMessageBottom - 1);
    // draw message
    osd->DrawRectangle(xMessageLeft, yMessageTop, xMessageRight - 1,
                       yMessageBottom - 1, clrTransparent);
    osd->DrawRectangle(xMessageLeft, yMessageTop + SmallGap, xMessageRight - 1,
                       yMessageBottom - SmallGap - 1,
                       Theme.Color(clrMessageBorder));
    osd->DrawText(xMessageLeft + Gap, yMessageTop + 2 * SmallGap, Text,
                  Theme.Color(clrMessageStatusFg + 2 * Type),
                  Theme.Color(clrMessageStatusBg + 2 * Type),
                  cFont::GetFont(fontOsd),
                  xMessageRight - Gap - xMessageLeft - Gap - 1,
                  yMessageBottom - 2 * SmallGap - yMessageTop - 2 * SmallGap,
                  taCenter);
  } else {
    // restore saved osd region
    osd->RestoreRegion();
  }
}

void cSkinEnigmaDisplayChannel::Flush(void)
{
  time_t now = time(NULL);
  if (now != lastTime) {
    lastTime = now;
    // update date string
    cString date = DayDateTime();
    const cFont *font = cFont::GetFont(fontOsd);
    int w = font->Width(date);
    osd->DrawText(xTitleRight - Roundness - w, yTitleTop, date,
                  Theme.Color(clrTitleFg), Theme.Color(clrTitleBg),
                  font, w, yTitleBottom - yTitleTop, taCenter);
  }
  osd->Flush();
}

// --- cSkinEnigmaDisplayMenu -----------------------------------------------

class cSkinEnigmaDisplayMenu:public cSkinDisplayMenu {
private:
  cOsd *osd;

  char *strTitle;
  char *strLastDate;
  char *strTheme;
  bool isMainMenu;
  bool fShowLogo;
  bool fShowInfo;

  int xBodyLeft, xBodyRight, yBodyTop, yBodyBottom;
  int xTitleLeft, xTitleRight, yTitleTop, yTitleBottom, yTitleDecoTop, yTitleDecoBottom;
  int xButtonsLeft, xButtonsRight, yButtonsTop, yButtonsBottom;
  int xMessageLeft, xMessageRight, yMessageTop, yMessageBottom;
  int xDateLeft, xDateRight, yDateTop, yDateBottom;
  int xLogoLeft, xLogoRight, yLogoTop, yLogoBottom;
  int xInfoLeft, xInfoRight, yInfoTop, yInfoBottom;

  int lineHeightOsd;
  int lineHeightSml;
  int nMessagesShown;
  int nNumImageColors;

  void SetScrollbar(void);
  void SetupAreas(void);
  void DrawTitle(const char *Title);
  int DrawFlag(int x, int y, const tComponent *p);
  const char *GetPluginMainMenuName(const char *plugin);
  int ReadSizeVdr(const char *strPath);
public:
  cSkinEnigmaDisplayMenu();
  virtual ~cSkinEnigmaDisplayMenu();
  virtual void Scroll(bool Up, bool Page);
  virtual int MaxItems(void);
  virtual void Clear(void);
  virtual void SetTitle(const char *Title);
  virtual void SetButtons(const char *Red, const char *Green = NULL, const char *Yellow = NULL, const char *Blue = NULL);
  virtual void SetMessage(eMessageType Type, const char *Text);
  virtual void SetItem(const char *Text, int Index, bool Current, bool Selectable);
  virtual void SetEvent(const cEvent *Event);
  virtual void SetRecording(const cRecording *Recording);
  virtual void SetText(const char *Text, bool FixedFont);
  virtual int GetTextAreaWidth(void) const;
  virtual const cFont *GetTextAreaFont(bool FixedFont) const;
  virtual void Flush(void);
};

cSkinEnigmaDisplayMenu::cSkinEnigmaDisplayMenu(void)
{
  setlocale(LC_TIME, tr("en_US"));
  osd = NULL;
  strTitle = NULL;
  strLastDate = NULL;
  strTheme = strdup(Theme.Name());
  isMainMenu = true;
#ifdef SKINENIGMA_NO_MENULOGO
  fShowLogo = false;
#else
  fShowLogo = (!EnigmaConfig.singleArea || EnigmaConfig.singleArea8Bpp) && (EnigmaConfig.showSymbols == 1 || EnigmaConfig.showSymbols == 3);
#endif
  fShowInfo = EnigmaConfig.showInfo;
  nMessagesShown = 0;
  nNumImageColors = 2;

  lineHeightSml = cFont::GetFont(fontSml)->Height();
  lineHeightOsd = cFont::GetFont(fontOsd)->Height();

  int LogoHeight = max(lineHeightOsd + TitleDeco + lineHeightOsd + lineHeightSml,
                       max(3 * lineHeightOsd, 
                           EnigmaConfig.showImages ? max(EnigmaConfig.imageHeight, IconHeight) : IconHeight
                          )
                      );
  int LogoWidth = EnigmaConfig.showImages ? max(IconWidth, EnigmaConfig.imageWidth) : IconWidth;
  int RightColWidth = (144 + LogoWidth) & ~0x07; // must be multiple of 8

  // title bar
  xTitleLeft = 0;
  xTitleRight = Setup.OSDWidth - RightColWidth;
  yTitleTop = 0;
  yTitleBottom = lineHeightOsd;
  yTitleDecoTop = yTitleBottom + TitleDecoGap;
  yTitleDecoBottom = yTitleDecoTop + TitleDecoHeight;
  // help buttons
  xButtonsLeft = xTitleLeft;
  xButtonsRight = Setup.OSDWidth;
  yButtonsTop = Setup.OSDHeight - lineHeightOsd;
  yButtonsBottom = Setup.OSDHeight;
  // content area with items
  xBodyLeft = xTitleLeft;
  xBodyRight = xTitleRight;
  yBodyTop = yTitleDecoBottom + TitleDecoGap2;
  yBodyBottom = yButtonsTop - SmallGap;
  // message area
  xMessageLeft = xBodyLeft;
  xMessageRight = Setup.OSDWidth;
  yMessageBottom = yButtonsTop - SmallGap;
  yMessageTop = yMessageBottom - MessageHeight + SmallGap;      // No extra SmallGap at bottom as there's already the Gap above the buttons
  // logo box
  xLogoLeft = Setup.OSDWidth - LogoWidth;
  xLogoRight = Setup.OSDWidth;
  yLogoTop = yTitleTop;
  yLogoBottom = yLogoTop + LogoHeight + SmallGap;
  // info box
  xInfoLeft = Setup.OSDWidth - RightColWidth;
  xInfoRight = Setup.OSDWidth;
  yInfoTop = yLogoBottom;
  yInfoBottom = yBodyBottom;
  // date box
  xDateLeft = xTitleRight;
  xDateRight = Setup.OSDWidth;
  yDateTop = yTitleTop;
  yDateBottom = yLogoBottom;

  // create osd
  osd = cOsdProvider::NewOsd(Setup.OSDLeft, Setup.OSDTop);

  tArea Areas[] = { {xTitleLeft,   yTitleTop, xMessageRight - 1, yButtonsBottom - 1, EnigmaConfig.singleArea8Bpp ? 8 : 4} };
  if (EnigmaConfig.singleArea && osd->CanHandleAreas(Areas, sizeof(Areas) / sizeof(tArea)) == oeOk) {
    osd->SetAreas(Areas, sizeof(Areas) / sizeof(tArea));
    nNumImageColors = (EnigmaConfig.singleArea8Bpp ? 230 : 2); //TODO: find correct number of colors
  } else {
    tArea Areas[] = { {xTitleLeft,   yTitleTop, xTitleRight - 1, yTitleDecoBottom - 1, 2}, //title area
                      {xBodyLeft,    yBodyTop, xBodyRight - 1, yLogoBottom - 1, 2}, //body area (beside date/logo area)
#ifdef SKINENIGMA_NO_MENULOGO
                      {xDateLeft,    yDateTop, xDateRight - 1, yBodyTop - 1, 2}, //date
                      {xDateLeft,    yBodyTop, xDateRight - 1, yDateBottom - 1, 2}, //date/body
#else
                      {xDateLeft,    yDateTop, xDateRight - 1, yInfoTop - 1, 4}, //date/logo area
#endif
                      {xBodyLeft,    yInfoTop, xInfoRight - 1, yInfoTop + lineHeightOsd - 1, 4}, //area for symbols in event/recording info
                      {xBodyLeft,    yInfoTop + lineHeightOsd, xInfoRight - 1, yMessageTop - 1, 2}, //body area (below date/logo area)
                      {xMessageLeft, yMessageTop, xMessageRight - 1, yButtonsBottom - 1, 4} //message/buttons area
    };
   
    eOsdError rc = osd->CanHandleAreas(Areas, sizeof(Areas) / sizeof(tArea));
    if (rc == oeOk)
      osd->SetAreas(Areas, sizeof(Areas) / sizeof(tArea));
    else {
      error("cSkinEnigmaDisplayMenu: CanHandleAreas() [1] returned %d\n", rc);
      delete osd;
      osd = NULL;
      throw 1;
      return;
    }

    nNumImageColors = 13; // "16 available colors" - "clrTransparent" - "clrLogoBg" - "clrMenuTxtFg"
  }

  // clear all
  osd->DrawRectangle(0, 0, osd->Width(), osd->Height(), clrTransparent);

  SetupAreas();
}

void cSkinEnigmaDisplayMenu::SetupAreas(void)
{
  debug("cSkinEnigmaDisplayMenu::SetupAreas\n");

  DrawTitle(strTitle);

  // draw date area
  osd->DrawRectangle(xDateLeft, yDateTop, xDateRight - 1, yDateBottom - 1,
                     fShowLogo ? Theme.Color(clrLogoBg) : Theme.Color(clrBackground));

  // draw info area
  if (fShowInfo) {
    osd->DrawRectangle(xInfoLeft, fShowLogo ? yInfoTop : yBodyTop, xInfoRight - 1, yInfoBottom - 1, Theme.Color(clrAltBackground));

    const cFont *font = cFont::GetFont(fontOsd);
    int h = font->Height();
    int x = xInfoLeft + Gap;
    int y = fShowLogo ? yInfoTop : yBodyTop;
    int w = xInfoRight - x;
    int yMaxHeight = yInfoBottom;

#ifdef SKINENIGMA_HAVE_EPGSEARCH
    if (EnigmaConfig.showTimerConflicts) {
      cPlugin *p = cPluginManager::GetPlugin("epgsearch");
      if (p) {
        Epgsearch_lastconflictinfo_v1_0 *serviceData = new Epgsearch_lastconflictinfo_v1_0;
        if (serviceData) {
          serviceData->nextConflict = 0;
          serviceData->relevantConflicts = 0;
          serviceData->totalConflicts = 0;

          p->Service("Epgsearch-lastconflictinfo-v1.0", serviceData);
          if (serviceData->relevantConflicts > 0) {
            int yWarning = yMaxHeight - 3 * h; // Needed space for warning
            yMaxHeight = yWarning;
            osd->DrawRectangle(xInfoLeft, yWarning, xInfoRight - 1, yWarning + SmallGap + 1, Theme.Color(clrBackground));
            yWarning += 1 + h / 2;
            osd->DrawText(xInfoLeft, yWarning, tr("WARNING"), Theme.Color(clrMenuItemSelectableFg), Theme.Color(clrAltBackground), font, w, h, taCenter);
            yWarning += h + SmallGap;

            char *info;
            asprintf(&info, "%d %s", serviceData->relevantConflicts, (serviceData->relevantConflicts == 1 ? tr("Timer conflict") : tr("Timer conflicts")));
            osd->DrawText(x, yWarning, info, Theme.Color(clrMenuItemSelectableFg), Theme.Color(clrAltBackground), font, w, h, taCenter);
            yWarning += h;
            free(info);
          }
          delete serviceData;
        }
      }
    }
#endif //SKINENIGMA_HAVE_EPGSEARCH

    if (Timers.GetNextActiveTimer()) {
      // Show next active timers
      y += h / 2;
      osd->DrawText(x, y, tr("TIMERS"), Theme.Color(clrMenuItemSelectableFg), Theme.Color(clrAltBackground), font, w, h, taCenter);
      y += h + h / 2;
      EnigmaStatus.UpdateActiveTimers();

      for (tTimer *timer = EnigmaStatus.mTimers.First(); timer; timer = EnigmaStatus.mTimers.Next(timer)) {
        if (y + 2 * h + SmallGap + 1 + h / 2 > yMaxHeight)
          break; // don't overwrite warning or help buttons

        if (timer->isRecording) {
          osd->DrawBitmap(x, y + (lineHeightOsd - bmRecording.Height()) / 2, bmRecording, Theme.Color(clrMenuItemSelectableFg), Theme.Color(clrAltBackground)); //TODO: draw red
        }
        osd->DrawText(x + (timer->isRecording ? (bmRecording.Width() + Gap) : 0), y, timer->title.c_str(), Theme.Color(clrMenuItemSelectableFg), Theme.Color(clrAltBackground), font, w, h);
        y += h;
        char* info = NULL;
        if (timer->isRecording) {
          asprintf(&info, "- %s / %s", *TimeString(timer->stopTime), timer->channelName.c_str());
        } else {
          asprintf(&info, "%d. %s / %s", timer->startDay, *TimeString(timer->startTime), timer->channelName.c_str());
        }
        osd->DrawText(x, y, info, Theme.Color(clrMenuItemSelectableFg), Theme.Color(clrAltBackground), font, w, h);
        free(info);
        y += h;
        osd->DrawRectangle(x, y + SmallGap, xInfoRight - Gap - 1, y + SmallGap + 1, Theme.Color(clrMenuItemSelectableFg));
        y += SmallGap + 1 + h / 2;
      }
    }

  } else { // !fShowInfo
    osd->DrawRectangle(xInfoLeft, fShowLogo ? yInfoTop : yBodyTop, xInfoRight - 1, yInfoBottom - 1, Theme.Color(clrBackground));
  }
}

cSkinEnigmaDisplayMenu::~cSkinEnigmaDisplayMenu()
{
  free(strTheme);
  free(strTitle);
  free(strLastDate);
  delete osd;
}

void cSkinEnigmaDisplayMenu::SetScrollbar(void)
{
  // check if scrollbar is needed
  if (textScroller.CanScroll()) {
    int h = lineHeightOsd;
    int w = lineHeightOsd;
    int yt = textScroller.Top();
    int yb = yt + textScroller.Height();
    int st = yt + h + Gap;
    int sb = yb - h - Gap;
    int tt = st + (sb - st) * textScroller.Offset() / textScroller.Total();
    int tb = tt + (sb - st) * textScroller.Shown() / textScroller.Total();
    int xl = textScroller.Width() + SmallGap;
    // arrow up
    osd->DrawRectangle(xl, yt, xl + w, yt + SmallGap,
                       textScroller.CanScrollUp() ? Theme.Color(clrMenuScrollbarShown) : Theme.Color(clrAltBackground));    
    osd->DrawRectangle(xl + w - SmallGap, yt + SmallGap, xl + w, yt + h,
                       textScroller.CanScrollUp() ? Theme.Color(clrMenuScrollbarShown) : Theme.Color(clrAltBackground));
    // draw background of scrollbar
    osd->DrawRectangle(xl + w - SmallGap, st, xl + w, sb, Theme.Color(clrMenuScrollbarTotal));
    // draw visible area of scrollbar
    osd->DrawRectangle(xl + w - SmallGap, tt, xl + w, tb, Theme.Color(clrMenuScrollbarShown));
    // arrow down
    osd->DrawRectangle(xl + w - SmallGap, yb - h, xl + w, yb - SmallGap,
                       textScroller.CanScrollDown() ? Theme.Color(clrMenuScrollbarShown) : Theme.Color(clrAltBackground));
    osd->DrawRectangle(xl, yb - SmallGap, xl + w, yb,
                       textScroller.CanScrollDown() ? Theme.Color(clrMenuScrollbarShown) : Theme.Color(clrAltBackground));
  }
}

void cSkinEnigmaDisplayMenu::Scroll(bool Up, bool Page)
{
  cSkinDisplayMenu::Scroll(Up, Page);
  SetScrollbar();
}

int cSkinEnigmaDisplayMenu::MaxItems(void)
{
  // max number of items
  return (yBodyBottom - yBodyTop) / lineHeightOsd;
}

void cSkinEnigmaDisplayMenu::Clear(void)
{
  debug("cSkinEnigmaDisplayMenu::Clear\n");

  textScroller.Reset();

  if (strcmp(strTheme, Theme.Name()) != 0) {
    free(strTheme);
    strTheme = strdup(Theme.Name());

    int i = 0;
    cBitmap *bitmap = osd->GetBitmap(i);
    while (bitmap) {
      bitmap->Reset();
      i++;
      bitmap = osd->GetBitmap(i);
    }

    SetupAreas();
  } else {
    // clear items area
    osd->DrawRectangle(xBodyLeft, yBodyTop, (fShowLogo || fShowInfo ? xBodyRight : xInfoRight) - 1, yBodyBottom - 1, Theme.Color(clrBackground));
  }
}

void cSkinEnigmaDisplayMenu::SetTitle(const char *Title)
{
  debug("cSkinEnigmaDisplayMenu::SetTitle(%s)\n", Title);

  if (Title && strTitle) {
    if (strcmp(Title, strTitle) != 0) {
      free(strTitle);
      strTitle = strdup(Title);
    }
  } else {
    free(strTitle);
    if (Title)
      strTitle = strdup(Title);
    else
      strTitle = NULL;
  }

  char *strTitlePrefix = NULL;
  asprintf(&strTitlePrefix, "%s  -  ", tr("VDR"));

  if (!(isMainMenu && Title && strncmp(strTitlePrefix, Title, strlen(strTitlePrefix)) == 0)) {
    bool old_isMainMenu = isMainMenu;
    bool old_fShowLogo = fShowLogo;
    bool old_fShowInfo = fShowInfo;

    if (strTitle == NULL || strncmp(strTitlePrefix, strTitle, strlen(strTitlePrefix)) == 0) {
      isMainMenu = true;
#ifdef SKINENIGMA_NO_MENULOGO
      fShowLogo = false;
#else
      fShowLogo = (EnigmaConfig.showSymbols == 1 || EnigmaConfig.showSymbols == 3);
#endif
      fShowInfo = EnigmaConfig.showInfo;
    } else {
      isMainMenu = false;
      fShowLogo = false;
      fShowInfo = false;
    }

    if (old_isMainMenu != isMainMenu
        || old_fShowLogo != fShowLogo
        || old_fShowInfo != fShowInfo) {
      SetupAreas();
    } else {
      DrawTitle(Title);
    }
  } else {
    DrawTitle(Title);
  }

  free (strTitlePrefix);

  free(strLastDate);
  strLastDate = NULL;
}

void cSkinEnigmaDisplayMenu::DrawTitle(const char *Title)
{
  // draw titlebar
  osd->DrawRectangle(xTitleLeft, yTitleTop, xTitleRight - 1, yTitleBottom - 1, Theme.Color(clrTitleBg));
  osd->DrawRectangle(xTitleLeft, yTitleDecoTop, xTitleRight - 1, yTitleDecoBottom - 1, Theme.Color(clrTitleBg));
  // draw rounded left corner of title bar
  osd->DrawEllipse(xTitleLeft, yTitleTop, xTitleLeft + Roundness - 1, yTitleTop + Roundness - 1, clrTransparent, -2);

//  debug("DrawTitle(%s)\n", Title);
  if (Title) {
    // draw title with shadow
    osd->DrawText(xTitleLeft + Roundness + 3, yTitleTop + 3, Title,
                  Theme.Color(clrTitleShadow), clrTransparent,
                  cFont::GetFont(fontOsd),
                  xTitleRight - xTitleLeft - Roundness - 3,
                  yTitleBottom - yTitleTop - 3);
    osd->DrawText(xTitleLeft + Roundness, yTitleTop, Title,
                  Theme.Color(clrTitleFg), clrTransparent,
                  cFont::GetFont(fontOsd),
                  xTitleRight - xTitleLeft - Roundness,
                  yTitleBottom - yTitleTop);
  }
}

void cSkinEnigmaDisplayMenu::SetButtons(const char *Red, const char *Green, const char *Yellow, const char *Blue)
{
  debug("cSkinEnigmaDisplayMenu::SetButtons(%s, %s, %s, %s)\n", Red, Green, Yellow, Blue);
  const cFont *font = cFont::GetFont(fontOsd);
  int w = (xButtonsRight - xButtonsLeft) / 4;
  int t3 = xButtonsLeft + xButtonsRight - xButtonsLeft - w;
  int t2 = t3 - w;
  int t1 = t2 - w;
  int t0 = xButtonsLeft;
  // clear background
  osd->DrawRectangle(xButtonsLeft, yButtonsTop, xButtonsRight, yButtonsBottom, clrTransparent);
  // draw color buttons
  if (Red)
    osd->DrawText(t0, yButtonsTop, Red, Theme.Color(clrButtonRedFg),
                  Theme.Color(clrButtonRedBg), font, t1 - t0 + 1,
                  yButtonsBottom - yButtonsTop, taCenter);
  else {
    osd->DrawRectangle(t0, yButtonsTop, Green ? t1 - 1 : t1, yButtonsBottom - 1, Theme.Color(clrBottomBg));
    osd->DrawEllipse(t0, yButtonsBottom - Roundness, t0 + Roundness - 1, yButtonsBottom - 1, clrTransparent, -3);
  }
  if (Green)
    osd->DrawText(t1, yButtonsTop, Green, Theme.Color(clrButtonGreenFg),
                  Theme.Color(clrButtonGreenBg), font, w,
                  yButtonsBottom - yButtonsTop, taCenter);
  else
    osd->DrawRectangle(t1, yButtonsTop, Yellow ? t1 + w : t2 - 1, yButtonsBottom - 1, Theme.Color(clrBottomBg));

  if (Yellow)
    osd->DrawText(t2, yButtonsTop, Yellow, Theme.Color(clrButtonYellowFg),
                  Theme.Color(clrButtonYellowBg), font, w,
                  yButtonsBottom - yButtonsTop, taCenter);
  else
    osd->DrawRectangle(t2, yButtonsTop, Blue ? t2 + w : t3 - 1, yButtonsBottom - 1, Theme.Color(clrBottomBg));
  if (Blue)
    osd->DrawText(t3, yButtonsTop, Blue, Theme.Color(clrButtonBlueFg),
                  Theme.Color(clrButtonBlueBg), font, w,
                  yButtonsBottom - yButtonsTop, taCenter);
  else {
    osd->DrawRectangle(t3, yButtonsTop, xButtonsRight, yButtonsBottom, Theme.Color(clrBottomBg));
    osd->DrawEllipse(xButtonsRight - Roundness, yButtonsBottom - Roundness,
                     xButtonsRight - 1, yButtonsBottom - 1, clrTransparent, -4);
  }
}

void cSkinEnigmaDisplayMenu::SetMessage(eMessageType Type, const char *Text)
{
  // check if message
  if (Text) {

    // save osd region
    if (nMessagesShown == 0)
      osd->SaveRegion(xMessageLeft, yMessageTop, xMessageRight - 1, yMessageBottom - 1);
    // draw message
    osd->DrawRectangle(xMessageLeft, yMessageTop, xMessageRight - 1,
                       yMessageBottom - 1, clrTransparent);
    osd->DrawRectangle(xMessageLeft, yMessageTop + SmallGap, xMessageRight - 1,
                       yMessageBottom - 1, Theme.Color(clrMessageBorder));
    osd->DrawText(xMessageLeft + Gap, yMessageTop + 2 * SmallGap, Text,
                  Theme.Color(clrMessageStatusFg + 2 * Type),
                  Theme.Color(clrMessageStatusBg + 2 * Type),
                  cFont::GetFont(fontOsd),
                  xMessageRight - Gap - xMessageLeft - Gap - 1,
                  yMessageBottom - SmallGap - yMessageTop - 2 * SmallGap,
                  taCenter);
    nMessagesShown++;
  } else {
    if (nMessagesShown > 0)
      nMessagesShown--;
    // restore saved osd region
    if (nMessagesShown == 0)
      osd->RestoreRegion();
  }
}

void cSkinEnigmaDisplayMenu::SetItem(const char *Text, int Index, bool Current, bool Selectable)
{
  int xItemLeft = xBodyLeft + (EnigmaConfig.showMarker ? lineHeightOsd : SmallGap);
  int xItemRight = (fShowLogo || fShowInfo ? xBodyRight : xInfoRight) - (EnigmaConfig.showMarker ? lineHeightOsd : SmallGap);
  int numItems = (yBodyBottom - yBodyTop) / lineHeightOsd;
  int top = yBodyTop + (yBodyBottom - yBodyTop - numItems * lineHeightOsd) / 2;

  int y = top + Index * lineHeightOsd;
  if (nMessagesShown > 0 && y >= yMessageTop)
    return; //Don't draw above messages

  tColor ColorFg, ColorBg;
  // select colors
  if (Current) {
    ColorFg = Theme.Color(clrMenuItemCurrentFg);
    ColorBg = Theme.Color(clrMenuHighlight);
  } else {
    if (Selectable) {
      ColorFg = Theme.Color(clrMenuItemSelectableFg);
      ColorBg = Theme.Color(clrBackground);
    } else {
      ColorFg = Theme.Color(clrMenuItemNotSelectableFg);
      ColorBg = Theme.Color(clrBackground);
    }
  }
  const cFont *font = cFont::GetFont(fontOsd);
  // this should prevent menu flickering
  osd->DrawRectangle(xItemLeft, y + lineHeightOsd / 2, xItemLeft + 1, y + lineHeightOsd / 2 + 1, Theme.Color(clrBackground));
  if (EnigmaConfig.showMarker) {
    osd->DrawRectangle(xBodyLeft, y, xItemLeft - 1, y + lineHeightOsd - 1, ColorBg);
    osd->DrawEllipse(xBodyLeft + MarkerGap, y + MarkerGap, xBodyLeft + lineHeightOsd - MarkerGap, y + lineHeightOsd - MarkerGap, Current ? ColorFg : ColorBg);
    osd->DrawRectangle(xItemRight, y, (fShowLogo || fShowInfo ? xBodyRight : xInfoRight) - 1, y + lineHeightOsd - 1, ColorBg);
  }
  // draw item
  for (int i = 0; i < MaxTabs; i++) {
    const char *s = GetTabbedText(Text, i);
    if (s) {
      char buffer[9];
      int xt = xItemLeft + Tab(i);
      bool iseventinfo = false;
      bool isnewrecording = false;
      bool isprogressbar = false;
      int now = 0, total = 0;

      // check if event info symbol: "tTV*" "R"
      if (EnigmaConfig.showListSymbols) {
        // check if event info characters
        if (strlen(s) == 3 && strchr(" tTR", s[0])
            && strchr(" V", s[1]) && strchr(" *", s[2])) {
          // update status
          iseventinfo = true;
        }

        // check if new recording: "01.01.06*", "10:10*"
        if (!iseventinfo &&
            (strlen(s) == 6 && s[5] == '*' && s[2] == ':' && isdigit(*s)
             && isdigit(*(s + 1)) && isdigit(*(s + 3)) && isdigit(*(s + 4)))
            || (strlen(s) == 9 && s[8] == '*' && s[5] == '.' && s[2] == '.'
                && isdigit(*s) && isdigit(*(s + 1)) && isdigit(*(s + 3))
                && isdigit(*(s + 4)) && isdigit(*(s + 6))
                && isdigit(*(s + 7)))) {
          // update status
          isnewrecording = true;
          // make a copy
          strncpy(buffer, s, strlen(s));
          // remove the '*' character
          buffer[strlen(s) - 1] = '\0';
        }
      }

      // check if progress bar: "[|||||||   ]"
      if (!iseventinfo && !isnewrecording && EnigmaConfig.showProgressbar &&
          (strlen(s) > 5 && s[0] == '[' && s[strlen(s) - 1] == ']')) {
        const char *p = s + 1;
        // update status
        isprogressbar = true;
        for (; *p != ']'; ++p) {
          // check if progressbar characters
          if (*p == ' ' || *p == '|') {
            // update counters
            ++total;
            if (*p == '|')
              ++now;
          } else {
            // wrong character detected; not a progressbar
            isprogressbar = false;
            break;
          }
        }
      }

      if (iseventinfo) {
        int evx = xt + Gap;
        const char *p = s;
        // draw background
        osd->DrawRectangle(xt, y, xItemRight, y + lineHeightOsd - 1, ColorBg);
        // draw symbols
        for (; *p; ++p) {
          switch (*p) {
            case 't':
              // partial timer event
              osd->DrawBitmap(evx, y + (lineHeightOsd - bmEventPartTimer.Height()) / 2, bmEventPartTimer, ColorFg, ColorBg);
              evx += bmEventPartTimer.Width();
              break;
            case 'T':
              // timer event
              osd->DrawBitmap(evx, y + (lineHeightOsd - bmEventTimer.Height()) / 2, bmEventTimer, ColorFg, ColorBg);
              evx += bmEventTimer.Width();
              break;
            case 'R':
              // recording event (epgsearch)
              osd->DrawBitmap(evx, y + (lineHeightOsd - bmEventRecording.Height()) / 2, bmEventRecording, ColorFg, ColorBg);
              evx += bmEventRecording.Width();
              break;
            case 'V':
              // vps event
              osd->DrawBitmap(evx, y + (lineHeightOsd - bmEventVPS.Height()) / 2, bmEventVPS, ColorFg, ColorBg);
              evx += bmEventVPS.Width();
              break;
            case '*':
              // running event
              osd->DrawBitmap(evx, y + (lineHeightOsd - bmEventRunning.Height()) / 2, bmEventRunning, ColorFg, ColorBg);
              evx += bmEventRunning.Width();
              break;
            case ' ':
            default:
              // let's ignore space character
              break;
          }
        }
      } else if (isnewrecording) {
        // draw text
        osd->DrawText(xt, y, buffer, ColorFg, ColorBg, font, xItemRight - xt);
        // draw symbol
        osd->DrawBitmap(xt + font->Width(buffer), y + (lineHeightOsd - bmRecordingNew.Height()) / 2, bmRecordingNew, ColorFg, ColorBg);
      } else if (isprogressbar) {
        // define x coordinates of progressbar
        int px0 = xt;
        int px1 = (Selectable ? (Tab(i + 1) ? Tab(i + 1) : xItemRight) : xItemRight) - 1;
        int px = px0 + max((int)((float) now * (float) (px1 - px0) / (float) total), ListProgressBarBorder);
        // define y coordinates of progressbar
        int py0 = y + ListProgressBarGap;
        int py1 = y + lineHeightOsd - ListProgressBarGap;
        // draw background
        osd->DrawRectangle(px0, y, px1, y + lineHeightOsd - 1, ColorBg);
        // draw progressbar
        osd->DrawRectangle(px0,    py0, px,  py1, ColorFg);
        osd->DrawRectangle(px + 1, py0, px1, py0 + ListProgressBarBorder, ColorFg);
        osd->DrawRectangle(px + 1, py1 - ListProgressBarBorder, px1, py1, ColorFg);
        osd->DrawRectangle(px1 - ListProgressBarBorder, py0, px1, py1, ColorFg);
      } else {
        // draw text
        osd->DrawText(xt, y, s, ColorFg, ColorBg, font, xItemRight - xt, nMessagesShown ? min(yMessageTop - y, lineHeightOsd) : 0 );
      }
    }
    if (!Tab(i + 1))
      break;
  }
  //set editable width
  SetEditableWidth(xItemRight - Tab(1));

#ifndef SKINENIGMA_NO_MENULOGO
//  debug("SetItem: (%s) %d %d %d\n", Text, Index, Current, Selectable);
  if (Current && isMainMenu && fShowLogo && Text) {
    char *ItemText, *ItemText2;
    int n = strtoul(Text, &ItemText, 10);
    if (n != 0)
      ItemText2 = ItemText = skipspace(ItemText);
    else
      ItemText2 = skipspace(ItemText);

    //debug("SetItem: %d (%s) %d %d %d\n", n, ItemText, Index, Current, Selectable);
    bool fFoundLogo = false;
    if (strcmp(ItemText, tr("Schedule")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/schedule");
    else if (strcmp(ItemText, tr("Channels")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/channels");
    else if (strcmp(ItemText, tr("Timers")) == 0
             || strcmp(ItemText2, GetPluginMainMenuName("timerinfo")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/timers");
    else if (strcmp(ItemText, tr("Recordings")) == 0
             || strcmp(ItemText, tr("Recording info")) == 0
             || strcmp(ItemText2, GetPluginMainMenuName("extrecmenu")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/recordings");
    else if (strcmp(ItemText, tr("Setup")) == 0
             || strcmp(ItemText2, tr("Setup")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/setup");
    else if (strcmp(ItemText, tr("Commands")) == 0
             || strcmp(ItemText2, tr("Commands")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/commands");
    else if (strcmp(ItemText, tr(" Stop replaying")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/stop");
    else if (strcmp(ItemText, tr(" Cancel editing")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/cancel");
/*TODO: obsolete?
    else if (strcmp(ItemText, tr("Summary")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/summary");
*/
    else if (strcmp(ItemText2, GetPluginMainMenuName("audiorecorder")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/audiorecorder");
    else if (strcmp(ItemText2, GetPluginMainMenuName("burn")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/burn");
    else if (strcmp(ItemText2, GetPluginMainMenuName("cdda")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/cdda");
    else if (strcmp(ItemText2, GetPluginMainMenuName("chanorg")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/chanorg");
    else if (strcmp(ItemText2, GetPluginMainMenuName("channelscan")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/channelscan");
    else if (strcmp(ItemText2, GetPluginMainMenuName("digicam")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/digicam");
    else if (strcmp(ItemText2, GetPluginMainMenuName("director")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/director");
    else if (strcmp(ItemText2, GetPluginMainMenuName("dvd")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/dvd");
    else if (strcmp(ItemText2, GetPluginMainMenuName("dvdselect")) == 0
           || strcmp(ItemText2, GetPluginMainMenuName("dvdswitch")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/dvdselect");
    else if (strcmp(ItemText2, GetPluginMainMenuName("dxr3")) == 0
           || strcmp(ItemText2, GetPluginMainMenuName("softdevice")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/device");
    else if (strcmp(ItemText2, GetPluginMainMenuName("epgsearch")) == 0
             || strcmp(ItemText2, GetPluginMainMenuName("epgsearchonly")) == 0
             || strcmp(ItemText2, GetPluginMainMenuName("conflictcheckonly")) == 0
             || strcmp(ItemText2, GetPluginMainMenuName("nordlichtsepg")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/epgsearch");
    else if (strcmp(ItemText2, GetPluginMainMenuName("externalplayer")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/externalplayer");
    else if (strcmp(ItemText2, GetPluginMainMenuName("femon")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/femon");
    else if (strcmp(ItemText2, GetPluginMainMenuName("filebrowser")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/filebrowser");
    else if (strcmp(ItemText2, GetPluginMainMenuName("fussball")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/fussball");
    else if (strcmp(ItemText2, GetPluginMainMenuName("games")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/games");
    else if (strcmp(ItemText2, GetPluginMainMenuName("image")) == 0
             || strcmp(ItemText2, GetPluginMainMenuName("osdimage")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/image");
    else if (strcmp(ItemText2, GetPluginMainMenuName("mp3")) == 0
             || strcmp(ItemText2, GetPluginMainMenuName("mp3ng")) == 0
             || strcmp(ItemText2, GetPluginMainMenuName("muggle")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/mp3");
    else if (strcmp(ItemText2, GetPluginMainMenuName("mplayer")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/mplayer");
    else if (strcmp(ItemText2, GetPluginMainMenuName("newsticker")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/newsticker");
    else if (strcmp(ItemText2, GetPluginMainMenuName("osdpip")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/osdpip");
    else if (strcmp(ItemText2, GetPluginMainMenuName("pin")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/pin");
    else if (strcmp(ItemText2, GetPluginMainMenuName("radio")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/radio");
    else if (strcmp(ItemText2, GetPluginMainMenuName("rotor")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/rotor");
    else if (strcmp(ItemText2, GetPluginMainMenuName("solitaire")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/solitaire");
    else if (strcmp(ItemText2, GetPluginMainMenuName("streamdev-client")) == 0
           || strcmp(ItemText2, GetPluginMainMenuName("streamdev-server")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/streamdev");
    else if (strcmp(ItemText2, GetPluginMainMenuName("sudoku")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/sudoku");
    else if (strcmp(ItemText2, GetPluginMainMenuName("teletext")) == 0
           || strcmp(ItemText2, GetPluginMainMenuName("osdteletext")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/teletext");
    else if (strcmp(ItemText2, GetPluginMainMenuName("tvonscreen")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/tvonscreen");
    else if (strcmp(ItemText2, GetPluginMainMenuName("vcd")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/vcd");
    else if (strcmp(ItemText2, GetPluginMainMenuName("vdrc")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/vdrc");
    else if (strcmp(ItemText2, GetPluginMainMenuName("vdrcd")) == 0
             || strcmp(ItemText2, GetPluginMainMenuName("mediad")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/vdrcd");
    else if (strcmp(ItemText2, GetPluginMainMenuName("vdrrip")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/vdrrip");
    else if (strcmp(ItemText2, GetPluginMainMenuName("weather")) == 0
           || strcmp(ItemText2, GetPluginMainMenuName("weatherng")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/weather");
    else if (strcmp(ItemText2, GetPluginMainMenuName("webepg")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/webepg");
    else if (strcmp(ItemText2, GetPluginMainMenuName("xineliboutput")) == 0)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/xineliboutput");
    else
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/menu/vdr");

    osd->DrawRectangle(xLogoLeft, yLogoTop, xLogoRight - 1, yLogoTop - 1, Theme.Color(clrLogoBg));
    if (fFoundLogo) {
      osd->DrawBitmap(xLogoLeft + (xLogoRight - xLogoLeft - EnigmaLogoCache.Get().Width()) / 2,
                      yLogoTop + (yLogoBottom - yLogoTop - EnigmaLogoCache.Get().Height()) / 2,
                      EnigmaLogoCache.Get(), EnigmaLogoCache.Get().Color(1),
                      Theme.Color(clrLogoBg), false, true);
    }
  }
#endif
}

const char *cSkinEnigmaDisplayMenu::GetPluginMainMenuName(const char *plugin)
{
  cPlugin *p = cPluginManager::GetPlugin(plugin);
  if (p) {
    const char *entry = p->MainMenuEntry();
    if (entry)
      return entry;
  }
  return plugin;
}

int cSkinEnigmaDisplayMenu::DrawFlag(int x, int y, const tComponent *p)
{
  if (p == NULL)
    return 0;

  if ((p->stream == 2) && p->language) {
    string flag("flags/");
    flag += p->language;
    /*TODO
    if (p->description) {
      
    }
    */
    if (EnigmaLogoCache.LoadSymbol(flag.c_str())) {
      osd->DrawBitmap(x, y - EnigmaLogoCache.Get().Height(), EnigmaLogoCache.Get());
      return EnigmaLogoCache.Get().Width();
    }
  }

  return 0;
}

void cSkinEnigmaDisplayMenu::SetEvent(const cEvent *Event)
{
  // check if event
  if (!Event)
    return;

  isMainMenu = false;
  fShowInfo = false;
#ifdef SKINENIGMA_NO_MENULOGO
  fShowLogo = false;
#else
  fShowLogo = (!EnigmaConfig.singleArea || EnigmaConfig.singleArea8Bpp) && (EnigmaConfig.showSymbols == 1 || EnigmaConfig.showSymbols == 3);
#endif

  const cFont *font = cFont::GetFont(fontOsd);
  const cFont *smlfont = cFont::GetFont(fontSml);
  int wsb = lineHeightOsd + 2 * SmallGap; //scrollbar width

  time_t now = time(NULL);
  // draw recording date string
  stringstream sstrDate;
  sstrDate << *Event->GetDateString()
           << "  " << *Event->GetTimeString()
           << " - " << *Event->GetEndTimeString()
           << " (";
  if (now > Event->StartTime())
    sstrDate << (now - Event->StartTime()) / 60 << '/';
  sstrDate << Event->Duration() / 60 << tr("min") << ")";

  int y = yDateBottom + (smlfont->Height() - bmVPS.Height()) / 2;
  int xs = xDateRight - Gap;
  // check if event has VPS 
  if (EnigmaConfig.showVps && Event->Vps()) {
    // draw VPS symbol
    if (Event->Vps() != Event->StartTime()) {
      char vps[6];
      struct tm tm_r;
      time_t t_vps = Event->Vps();
      strftime(vps, sizeof(vps), "%H:%M", localtime_r(&t_vps, &tm_r));
      xs -= smlfont->Width(vps);
      osd->DrawText(xs, yDateBottom, vps,
                    Theme.Color(clrMenuTxtFg), Theme.Color(clrBackground),
                    smlfont, smlfont->Width(vps), smlfont->Height());
      xs -= TinyGap;
    }
    xs -= bmVPS.Width();
    osd->DrawBitmap(xs, y, bmVPS, Theme.Color(clrSymbolVpsActive), Theme.Color(clrSymbolInactive));
    xs -= Gap;
  }
  // check if event is running
  if (Event->IsRunning()) {
    // draw running symbol
    xs -= (bmRun.Width() + Gap);
    osd->DrawBitmap(xs, y, bmRun, Theme.Color(clrSymbolRunActive), Theme.Color(clrBackground));
  }
  // check if event has timer
  if (Event->HasTimer()) {
    if (Event->IsRunning()) {
      // draw recording symbol
      xs -= (bmRecording.Width() + Gap);
      osd->DrawBitmap(xs, y, bmRecording, Theme.Color(clrSymbolRecActive), Theme.Color(clrBackground));
    } else {
      // draw timer symbol
      xs -= (bmTimer.Width() + Gap);
      osd->DrawBitmap(xs, y, bmTimer, Theme.Color(clrSymbolTimerActive), Theme.Color(clrBackground));
    }
  }
  string stringInfo;
  const cComponents *Components = Event->Components();
  if (Components) {
    stringstream sstrInfo;
    for (int i = 0; i < Components->NumComponents(); i++) {
      const tComponent *p = Components->Component(i);
      if (p && (p->stream == 2) && p->language) {
        if (p->description) {
          sstrInfo << p->description
                   << " (" << p->language << "), ";
        } else {
          sstrInfo << p->language << ", ";
        }
//        DrawFlag(p); //TODO
      }
    }
    // strip out the last delimiter
    if (!sstrInfo.str().empty())
      stringInfo = tr("Languages");
      stringInfo += ": "; 
      stringInfo += sstrInfo.str().substr(0, sstrInfo.str().length() - 2);
  }
  int yHeadlineBottom = yDateBottom;
  int xHeadlineRight  = fShowLogo ? xDateLeft : xInfoRight;
  // draw recording title
  osd->DrawRectangle(xBodyLeft, yBodyTop, xHeadlineRight - 1,
                     yHeadlineBottom - 1, Theme.Color(clrAltBackground));
  int th = font->Height() + (Event->Description() && Event->ShortText() ? Gap + smlfont->Height() : 0);
  y = yBodyTop + (yHeadlineBottom - yBodyTop - th) / 2;
  osd->DrawText(xBodyLeft + Gap, y, Event->Title(),
                Theme.Color(clrMenuEventTitle), Theme.Color(clrAltBackground),
                font, xHeadlineRight - xBodyLeft - Gap - 1, font->Height());
  osd->DrawText(xBodyLeft + Gap, yHeadlineBottom, sstrDate.str().c_str(),
                Theme.Color(clrMenuTxtFg), Theme.Color(clrBackground),
                smlfont, xDateLeft - xBodyLeft - Gap - 1, smlfont->Height());

  // draw recording short text and description
  const char *strDescr = NULL;
  if (isempty(Event->Description())) {
    // check if short text
    if (!isempty(Event->ShortText())) {
      // draw short text as description, if no description available
      strDescr = Event->ShortText();
    }
  } else {
    // check if short text
    if (!isempty(Event->ShortText())) {
      // draw below Event->Title
      y += lineHeightOsd + Gap;
      // draw short text
      osd->DrawText(xBodyLeft + Gap, y, Event->ShortText(),
                    Theme.Color(clrMenuEventShortText), Theme.Color(clrAltBackground),
                    smlfont, xHeadlineRight - xBodyLeft - Gap - 1, lineHeightSml);
    }
    // draw description
    strDescr = Event->Description();
  }

  string stringReruns;
#ifdef SKINENIGMA_HAVE_EPGSEARCH
  // try to find a rerun of the show using epgsearch-service
  if (EnigmaConfig.numReruns > 0 && !isempty(Event->Title())) {
    stringstream sstrReruns;
    Epgsearch_searchresults_v1_0 data;
    string strQuery = Event->Title();
    if (EnigmaConfig.useSubtitleRerun > 0) {
      if (EnigmaConfig.useSubtitleRerun == 2 || !isempty(Event->ShortText()))
        strQuery += "~";
      if (!isempty(Event->ShortText()))
        strQuery += Event->ShortText();
      data.useSubTitle = true;
    } else {
      data.useSubTitle = false;
    }
    data.query = (char *)strQuery.c_str();
    data.mode = 0;
    data.channelNr = 0;
    data.useTitle = true;
    data.useDescription = false;
    if (cPluginManager::CallFirstService("Epgsearch-searchresults-v1.0", &data)) {
      cList<Epgsearch_searchresults_v1_0::cServiceSearchResult>* list = data.pResultList;
      if (list && (list->Count() > 1)) {
        //TODO: current event is shown as rerun 
        sstrReruns << tr("RERUNS OF THIS SHOW") << ':' << endl;
        int i = 0;
        for (Epgsearch_searchresults_v1_0::cServiceSearchResult *r = list->First(); r && i < EnigmaConfig.numReruns; r = list->Next(r)) {
          i++;
          sstrReruns << "- "
                     << *DayDateTime(r->event->StartTime())
                     << " " << Channels.GetByChannelID(r->event->ChannelID())->ShortName(true)
                     << ":  " << r->event->Title();
          if (!isempty(r->event->ShortText()))
            sstrReruns << "~" << r->event->ShortText();
          sstrReruns << endl;
        }
        delete list;
      }
    }
    stringReruns = sstrReruns.str();
  }
#endif // SKINENIGMA_HAVE_EPGSEARCH

  const char *strFirst = NULL;
  const char *strSecond = NULL;
  const char *strThird = stringReruns.empty() ? NULL : stringReruns.c_str();
  if (EnigmaConfig.showAuxInfo) {
    strFirst = strDescr;
    strSecond = stringInfo.empty() ? NULL : stringInfo.c_str();
  } else {
    strFirst = stringInfo.empty() ? NULL : stringInfo.c_str();
    strSecond = strDescr;
  }
  if (strFirst || strSecond || strSecond) {
    y = yHeadlineBottom + SmallGap + 2 * smlfont->Height();
    char *mytext;
    asprintf(&mytext, "%s%s%s%s%s", strFirst ? strFirst : "",
                                    strSecond ? "\n\n" : "", strSecond ? strSecond : "",
                                    (strFirst || strSecond) && strThird ? "\n\n" : "", strThird ? strThird : "");
    textScroller.Set(osd, xBodyLeft + Gap, y,
                     xInfoRight - xBodyLeft - wsb - Gap, yBodyBottom - Gap - y,
                     mytext, font, Theme.Color(clrMenuTxtFg),
                     Theme.Color(clrBackground));
    SetScrollbar();
    free(mytext);
  }

#ifndef SKINENIGMA_NO_MENULOGO
  if (fShowLogo) {
    // draw logo
    osd->DrawRectangle(xDateLeft + SmallGap, yDateTop, xDateRight - 1, yDateBottom - SmallGap - 1, Theme.Color(clrLogoBg));
    if (EnigmaConfig.showImages && EnigmaLogoCache.LoadEventImage(Event, xLogoRight - xLogoLeft, yLogoBottom - yLogoTop, nNumImageColors)) {
      osd->DrawBitmap(xLogoLeft + (xLogoRight - xLogoLeft - EnigmaLogoCache.Get().Width()) / 2,
                      yDateTop + (yDateBottom - yDateTop - EnigmaLogoCache.Get().Height()) / 2,
                      EnigmaLogoCache.Get(), 0, 0, true);
    } else {
      if (EnigmaLogoCache.LoadIcon("icons/menu/schedule"))
        osd->DrawBitmap(xLogoLeft + (xLogoRight - xLogoLeft - EnigmaLogoCache.Get().Width()) / 2,
                        yLogoTop + (yLogoBottom - yLogoTop - EnigmaLogoCache.Get().Height()) / 2,
                        EnigmaLogoCache.Get(), EnigmaLogoCache.Get().Color(1), Theme.Color(clrLogoBg));
    }
    // draw borders
    osd->DrawRectangle(xDateLeft, yDateTop, xDateLeft + SmallGap - 1, yDateBottom - 1, clrTransparent);
    osd->DrawRectangle(xDateLeft, yLogoBottom - SmallGap, xDateRight, yLogoBottom - 1, clrTransparent);
  }
#endif
}

int cSkinEnigmaDisplayMenu::ReadSizeVdr(const char *strPath)
{
  int dirSize = -1;
  char buffer[20];
  char *strFilename = NULL;
  asprintf(&strFilename, "%s/size.vdr", strPath);
  if (strFilename) {
    struct stat st;
    if (stat(strFilename, &st) == 0) {
      int fd = open(strFilename, O_RDONLY);
      if (fd >= 0) {
        if (safe_read(fd, &buffer, sizeof(buffer)) >= 0) {
          dirSize = atoi(buffer);
        }
        close(fd);
      }
    }
    free(strFilename);
  }
  return dirSize;
}

void cSkinEnigmaDisplayMenu::SetRecording(const cRecording *Recording)
{
  // check if recording
  if (!Recording)
    return;

  isMainMenu = false;
  fShowInfo = false;
#ifdef SKINENIGMA_NO_MENULOGO
  fShowLogo = false;
#else
  fShowLogo = (!EnigmaConfig.singleArea || EnigmaConfig.singleArea8Bpp) && (EnigmaConfig.showSymbols == 1 || EnigmaConfig.showSymbols == 3);
#endif

  const cRecordingInfo *Info = Recording->Info();
  const cFont *font = cFont::GetFont(fontOsd);
  const cFont *smlfont = cFont::GetFont(fontSml);
  int wsb = lineHeightOsd + 2 * SmallGap; //scrollbar width

  if (Info == NULL) {
    //TODO: draw error message
    return;
  }

  // draw recording date string
  stringstream sstrDate;
  sstrDate << *DateString(Recording->start)
           << "  " << *TimeString(Recording->start);

  // draw additional information
  stringstream sstrInfo;
  int dirSize = -1;
  if (EnigmaConfig.showRecSize > 0) {
    if ((dirSize = ReadSizeVdr(Recording->FileName())) < 0 && EnigmaConfig.showRecSize == 2) {
      dirSize = DirSizeMB(Recording->FileName());
    }
  }
  cChannel *channel = Channels.GetByChannelID(((cRecordingInfo *)Info)->ChannelID());
  if (channel)
    sstrInfo << tr("Channel") << ": " << channel->Number() << " - " << channel->Name() << endl;
  if (dirSize >= 0)
    sstrInfo << tr("Size") << ": " << setprecision(3) << (dirSize > 1023 ? dirSize / 1024.0 : dirSize) << (dirSize > 1023 ? "GB\n" : "MB\n");
  sstrInfo << tr("Priority") << ": " << Recording->priority << endl
           << tr("Lifetime") << ": " << Recording->lifetime << endl;
  if (Info->Aux()) {
    sstrInfo << endl << tr("Auxiliary information") << ":\n"
             << parseaux(Info->Aux());
  }
  const cComponents *Components = Info->Components();
  if (Components) {
    //TODO: show flaggs?
    stringstream info;
    for (int i = 0; i < Components->NumComponents(); i++) {
      const tComponent *p = Components->Component(i);
      if ((p->stream == 2) && p->language) {
        if (p->description) {
          info << p->description
               << " (" << p->language << "), ";
        } else {
          info << p->language << ", ";
        }
      }
    }
    // strip out the last delimiter
    if (!info.str().empty()) {
      sstrInfo << tr("Languages") << ": "
               << info.str().substr(0, info.str().length() - 2);
    }
  }

  int yHeadlineBottom = yDateBottom;
  int xHeadlineRight  = fShowLogo ? xDateLeft : xInfoRight;
  // draw recording title
  const char *Title = Info->Title();
  if (isempty(Title))
    Title = Recording->Name();
  osd->DrawRectangle(xBodyLeft, yBodyTop, xHeadlineRight - 1, yHeadlineBottom - 1, Theme.Color(clrAltBackground));
  int th = font->Height() + (Info->Description() && Info->ShortText() ? Gap + smlfont->Height() : 0);
  int y = yBodyTop + (yHeadlineBottom - yBodyTop - th) / 2;
  osd->DrawText(xBodyLeft + Gap, y, Title, 
                Theme.Color(clrMenuTxtFg), Theme.Color(clrAltBackground),
                font, xHeadlineRight - xBodyLeft - Gap - 1, font->Height());
  osd->DrawText(xBodyLeft + Gap, yHeadlineBottom, sstrDate.str().c_str(),
                Theme.Color(clrMenuTxtFg), Theme.Color(clrBackground),
                smlfont, xHeadlineRight - xBodyLeft - Gap - 1, smlfont->Height());
  // draw recording short text and description
  const char* strDescr = NULL;
  if (isempty(Info->Description())) {
    // check if short text
    if (!isempty(Info->ShortText())) {
      // draw short text as description, if no description available
      strDescr = Info->ShortText();
    }
  } else {
    // check if short text
    if (!isempty(Info->ShortText())) {
      // draw below Title
      y += lineHeightOsd + Gap;
      // draw short text
      osd->DrawText(xBodyLeft + Gap, y, Info->ShortText(),
                    Theme.Color(clrMenuEventShortText), Theme.Color(clrAltBackground),
                    smlfont, xHeadlineRight - xBodyLeft - Gap - 1, lineHeightSml);
    }
    // draw description
    strDescr = Info->Description();
  }

  string stringInfo = sstrInfo.str();
  const char *strInfo = stringInfo.empty() ? NULL : stringInfo.c_str();
  if (strDescr || strInfo) {
    y = yHeadlineBottom + 2 * smlfont->Height();
    char *mytext;
    if (EnigmaConfig.showAuxInfo)
      asprintf(&mytext, "%s%s%s", strDescr ? strDescr : "", strInfo && strDescr ? "\n\n" : "", strInfo ? strInfo : "");
    else
      asprintf(&mytext, "%s%s%s", strInfo ? strInfo : "", strInfo && strDescr ? "\n\n" : "", strDescr ? strDescr : "");
    textScroller.Set(osd, xBodyLeft + Gap, y,
                     xInfoRight - xBodyLeft - Gap - wsb,
                     yBodyBottom - Gap - y, mytext, font,
                     Theme.Color(clrMenuTxtFg),
                     Theme.Color(clrBackground));
    SetScrollbar();
    free(mytext);
  }

#ifndef SKINENIGMA_NO_MENULOGO
  if (fShowLogo) {
    osd->DrawRectangle(xDateLeft + SmallGap, yDateTop, xDateRight - 1, yDateBottom - SmallGap - 1, Theme.Color(clrLogoBg));
    if (EnigmaConfig.showImages && EnigmaLogoCache.LoadRecordingImage(Recording, xLogoRight - xLogoLeft, yLogoBottom - yLogoTop, nNumImageColors)) {
      osd->DrawBitmap(xLogoLeft + (xLogoRight - xLogoLeft - EnigmaLogoCache.Get().Width()) / 2,
                      yDateTop + (yDateBottom - yDateTop - EnigmaLogoCache.Get().Height()) / 2,
                      EnigmaLogoCache.Get(), 0, 0, true);
    } else {
      // draw logo
      if (EnigmaLogoCache.LoadIcon("icons/menu/recordings"))
        osd->DrawBitmap(xLogoLeft + (xLogoRight - xLogoLeft - EnigmaLogoCache.Get().Width()) / 2,
                        yLogoTop + (yLogoBottom - yLogoTop - EnigmaLogoCache.Get().Height()) / 2,
                        EnigmaLogoCache.Get(), EnigmaLogoCache.Get().Color(1), Theme.Color(clrLogoBg));
    }
    // draw borders
    osd->DrawRectangle(xDateLeft, yDateTop, xDateLeft + SmallGap - 1, yDateBottom - 1, clrTransparent);
    osd->DrawRectangle(xDateLeft, yLogoBottom - SmallGap, xDateRight, yLogoBottom - 1, clrTransparent);
  }
#endif
}

void cSkinEnigmaDisplayMenu::SetText(const char *Text, bool FixedFont)
{
  // draw text
  textScroller.Set(osd, xBodyLeft + Gap, yBodyTop + Gap,
                   GetTextAreaWidth(),
                   yBodyBottom - yBodyTop - 2 * Gap, Text,
                   GetTextAreaFont(FixedFont),
                   Theme.Color(clrMenuTxtFg), Theme.Color(clrBackground));
  SetScrollbar();
}

int cSkinEnigmaDisplayMenu::GetTextAreaWidth(void) const
{
  int wsb = lineHeightOsd + 2 * SmallGap; //scrollbar width

  // max text area width
  return (fShowLogo || fShowInfo ? xBodyRight : xInfoRight) - 2 * Gap - wsb;
}

const cFont *cSkinEnigmaDisplayMenu::GetTextAreaFont(bool FixedFont) const
{
  // text area font
  return cFont::GetFont(FixedFont ? fontFix : fontOsd);
}

void cSkinEnigmaDisplayMenu::Flush(void)
{
//debug("cSkinEnigmaDisplayMenu::Flush\n");
  if (fShowLogo) {
    time_t t = time(NULL);
    cString time = TimeString(t);
    if ((strLastDate == NULL) || strcmp(strLastDate, (const char*)time) != 0) {
      free(strLastDate);
      strLastDate = strdup((const char*)time);

      int x = xDateLeft + SmallGap;
      int w = xLogoLeft - x;
      const cFont *font = cFont::GetFont(fontOsd);
      int ys = yDateTop + (yDateBottom - yDateTop - 3 * lineHeightOsd) / 2;

      char temp[32];
      struct tm tm_r;
      tm *tm = localtime_r(&t, &tm_r);

      strftime(temp, sizeof(temp), "%A", tm);
      osd->DrawText(x, ys, temp, Theme.Color(clrMenuTxtFg),
                    Theme.Color(clrLogoBg), font, w,
                    lineHeightOsd, taCenter);
      ys += lineHeightOsd;

      strftime(temp, sizeof(temp), "%d.%m.%Y", tm);
      osd->DrawText(x, ys, temp, Theme.Color(clrMenuTxtFg),
                    Theme.Color(clrLogoBg), font, w,
                    lineHeightOsd, taCenter);
      ys += lineHeightOsd;

      osd->DrawText(x, ys, time, Theme.Color(clrMenuTxtFg),
                    Theme.Color(clrLogoBg), font, w,
                    lineHeightOsd, taCenter);
      //draw borders
      osd->DrawRectangle(xDateLeft, yDateTop, xDateLeft + SmallGap - 1, yLogoBottom - SmallGap - 1, clrTransparent);
      osd->DrawRectangle(xDateLeft, yLogoBottom - SmallGap, xDateRight, yLogoBottom - 1, clrTransparent);
    }
  } else {
    cString date = DayDateTime();
    if ((strLastDate == NULL) || strcmp(strLastDate, (const char*)date) != 0) {
      free(strLastDate);
      strLastDate = strdup((const char*)date);
      const cFont *font = cFont::GetFont(fontOsd);
      osd->DrawText(xDateLeft + SmallGap, yDateTop, date, Theme.Color(clrMenuTxtFg),
                    Theme.Color(clrLogoBg), font, xDateRight - xDateLeft - SmallGap,
                    yTitleDecoBottom - yDateTop, taCenter);
      //draw borders
      osd->DrawRectangle(xDateLeft, yDateTop, xDateLeft + SmallGap - 1, yTitleDecoBottom - 1, clrTransparent);
      osd->DrawRectangle(xDateLeft, yTitleDecoBottom, xDateRight, yBodyTop - 1, clrTransparent);
    }
  }
  osd->Flush();
}

// --- cSkinEnigmaDisplayReplay ---------------------------------------------

class cSkinEnigmaDisplayReplay:public cSkinDisplayReplay {
private:
  cOsd *osd;

  int xTitleLeft, xTitleRight, yTitleTop, yTitleBottom, yTitleDecoTop, yTitleDecoBottom;
  int xLogoLeft, xLogoRight, yLogoTop, yLogoBottom;
  int xProgressLeft, xProgressRight, yProgressTop, yProgressBottom;
  int xTimeLeft, xTimeRight, yTimeTop, yTimeBottom;
  int xBottomLeft, xBottomRight, yBottomTop, yBottomBottom;
  int xMessageLeft, xMessageRight, yMessageTop, yMessageBottom;

  int lineHeight;
  bool modeonly;
  int nJumpWidth;
public:
  cSkinEnigmaDisplayReplay(bool ModeOnly);
  virtual ~ cSkinEnigmaDisplayReplay();
  virtual void SetTitle(const char *Title);
  virtual void SetMode(bool Play, bool Forward, int Speed);
  virtual void SetProgress(int Current, int Total);
  virtual void SetCurrent(const char *Current);
  virtual void SetTotal(const char *Total);
  virtual void SetJump(const char *Jump);
  virtual void SetMessage(eMessageType Type, const char *Text);
  virtual void Flush(void);
};

cSkinEnigmaDisplayReplay::cSkinEnigmaDisplayReplay(bool ModeOnly)
{
  modeonly = ModeOnly;
  nJumpWidth = 0;
  lineHeight = cFont::GetFont(fontOsd)->Height();

  int LogoSize = IconHeight;
  LogoSize += (LogoSize % 2 ? 1 : 0);
  xTitleLeft = 0;
  xTitleRight = Setup.OSDWidth;
  yTitleTop = 0;
  yTitleBottom = yTitleTop + lineHeight;
  yTitleDecoTop = yTitleBottom + TitleDecoGap;
  yTitleDecoBottom = yTitleDecoTop + TitleDecoHeight;
  xLogoLeft = xTitleLeft;
  xLogoRight = xLogoLeft + LogoSize;
  yLogoTop = yTitleDecoBottom + TitleDecoGap2;
  yLogoBottom = yLogoTop + LogoSize;
  xTimeLeft = xLogoRight + LogoDecoGap2;
  xTimeRight = xTitleRight;
  xTimeLeft += (xTimeRight - xTimeLeft) - ((xTimeRight - xTimeLeft) & ~0x07);
  yTimeTop = yLogoBottom - SmallGap - lineHeight - SmallGap;
  yTimeBottom = yLogoBottom;
  xProgressLeft = xTimeLeft;
  xProgressRight = xTitleRight;
  yProgressTop = yLogoTop;
  yProgressBottom = yTimeTop - SmallGap;
  xBottomLeft = xTitleLeft;
  xBottomRight = xTitleRight;
  yBottomTop = yLogoBottom + SmallGap;
  yBottomBottom = yBottomTop + lineHeight;
  xMessageLeft = xProgressLeft;
  xMessageRight = xProgressRight;
  yMessageTop = yLogoTop + (LogoSize - MessageHeight) / 2;
  yMessageBottom = yMessageTop + MessageHeight;

  // create osd
  osd = cOsdProvider::NewOsd(Setup.OSDLeft, Setup.OSDTop + Setup.OSDHeight - yBottomBottom);
  tArea Areas[] = { {xTitleLeft, yTitleTop, xBottomRight - 1, yBottomBottom - 1, EnigmaConfig.singleArea8Bpp ? 8 : 4} };
  if (EnigmaConfig.singleArea && osd->CanHandleAreas(Areas, sizeof(Areas) / sizeof(tArea)) == oeOk) {
    osd->SetAreas(Areas, sizeof(Areas) / sizeof(tArea));
  } else {
    tArea Areas[] = { {xTitleLeft, yTitleTop, xTitleRight - 1, yTitleDecoBottom - 1, 2},
                      {xLogoLeft, yLogoTop, xLogoRight + 1, yLogoBottom - 1, 4}, //TODO? "+1" because of wrong colors with "-1" 
                      {xProgressLeft, yProgressTop, xTimeRight - 1, yTimeBottom - 1, 4},
                      {xBottomLeft, yBottomTop, xBottomRight - 1, yBottomBottom - 1, 2}
    };
    int rc = osd->CanHandleAreas(Areas, sizeof(Areas) / sizeof(tArea));
    if (rc == oeOk)
      osd->SetAreas(Areas, sizeof(Areas) / sizeof(tArea));
    else {
      error("cSkinEnigmaDisplayReplay: CanHandleAreas() returned %d\n", rc);
      delete osd;
      osd = NULL;
      throw 1;
      return;
    }
  }
  // clear all
  osd->DrawRectangle(0, 0, osd->Width(), osd->Height(), clrTransparent);
  if (modeonly) {
    // draw logo area
    osd->DrawRectangle(xLogoLeft, yLogoTop, xLogoRight - 1, yLogoBottom - 1, (EnigmaConfig.showSymbols == 1 || EnigmaConfig.showSymbols == 2) ? Theme.Color(clrLogoBg) : clrTransparent);
  } else {
    // draw title area
    osd->DrawRectangle(xTitleLeft, yTitleTop, xTitleRight - 1,
                       yTitleBottom - 1, Theme.Color(clrTitleBg));
    osd->DrawEllipse(xTitleLeft, yTitleTop, xTitleLeft + Roundness - 1,
                     yTitleTop + Roundness - 1, clrTransparent, -2);
    osd->DrawEllipse(xTitleRight - Roundness, yTitleTop, xTitleRight,
                     yTitleTop + Roundness, clrTransparent, -1);
    osd->DrawRectangle(xTitleLeft, yTitleDecoTop, xTitleRight - 1,
                       yTitleDecoBottom - 1, Theme.Color(clrTitleBg));
    // draw logo area
    osd->DrawRectangle(xLogoLeft, yLogoTop, xLogoRight - 1, yLogoBottom - 1, Theme.Color(clrLogoBg));
    // draw progress bar area
    osd->DrawRectangle(xProgressLeft, yProgressTop, xProgressRight - 1,
                       yProgressBottom - 1, Theme.Color(clrReplayBarAreaBg));
    // draw time area
    osd->DrawRectangle(xTimeLeft, yTimeTop, xTimeRight - 1, yTimeBottom - 1, Theme.Color(clrAltBackground));
    // draw bottom area
    osd->DrawRectangle(xBottomLeft, yBottomTop, xBottomRight - 1,
                       yBottomBottom - 1, Theme.Color(clrBottomBg));
    osd->DrawEllipse(xBottomLeft, yBottomBottom - Roundness,
                     xBottomLeft + Roundness - 1, yBottomBottom - 1,
                     clrTransparent, -3);
    osd->DrawEllipse(xBottomRight - Roundness, yBottomBottom - Roundness,
                     xBottomRight - 1, yBottomBottom - 1, clrTransparent, -4);
  }
}

cSkinEnigmaDisplayReplay::~cSkinEnigmaDisplayReplay()
{
  delete osd;
}

void cSkinEnigmaDisplayReplay::SetTitle(const char *Title)
{
  // draw title area
  osd->DrawRectangle(xTitleLeft, yTitleTop, xTitleRight - 1,
                     yTitleBottom - 1, Theme.Color(clrTitleBg));
  osd->DrawEllipse(xTitleLeft, yTitleTop, xTitleLeft + Roundness - 1,
                   yTitleTop + Roundness - 1, clrTransparent, -2);
  osd->DrawEllipse(xTitleRight - Roundness, yTitleTop, xTitleRight,
                   yTitleTop + Roundness, clrTransparent, -1);
  osd->DrawRectangle(xTitleLeft, yTitleDecoTop, xTitleRight - 1,
                     yTitleDecoBottom - 1, Theme.Color(clrTitleBg));

  if (Title) {
    debug("REPLAY TITLE: %s\n", Title);
  // draw titlebar
    osd->DrawText(xTitleLeft + Roundness + 3, yTitleTop + 3, Title,
                  Theme.Color(clrTitleShadow), clrTransparent,
                  cFont::GetFont(fontOsd),
                  xTitleRight - Roundness - xTitleLeft - Roundness - 3,
                  yTitleBottom - yTitleTop - 3);
    osd->DrawText(xTitleLeft + Roundness, yTitleTop, Title,
                  Theme.Color(clrTitleFg), clrTransparent,
                  cFont::GetFont(fontOsd),
                  xTitleRight - Roundness - xTitleLeft - Roundness,
                  yTitleBottom - yTitleTop);
  }
}

void cSkinEnigmaDisplayReplay::SetMode(bool Play, bool Forward, int Speed)
{
  bool fFoundLogo = false;
  if (Speed < -1)
    Speed = -1;

  if ((!EnigmaConfig.singleArea || EnigmaConfig.singleArea8Bpp) && (EnigmaConfig.showSymbols == 1 || EnigmaConfig.showSymbols == 2)) {
    osd->DrawRectangle(xLogoLeft, yLogoTop, xLogoRight - 1, yLogoBottom - 1, Theme.Color(clrLogoBg));

    char *logo = NULL;
    asprintf(&logo, "icons/menu/%s", EnigmaStatus.ReplayModeName());
    if (EnigmaLogoCache.LoadIcon(logo)) {
      osd->DrawBitmap(xLogoLeft + (xLogoRight - xLogoLeft - EnigmaLogoCache.Get().Width()) / 2,
                      yLogoTop + (yLogoBottom - yLogoTop - EnigmaLogoCache.Get().Height()) / 2,
                      EnigmaLogoCache.Get(), EnigmaLogoCache.Get().Color(1),
                      Theme.Color(clrLogoBg), true);
    }
    free(logo);
  } else {
    osd->DrawRectangle(xLogoLeft, yLogoTop, xLogoRight - 1, yLogoBottom - 1, Theme.Color(clrLogoBg));
  }

  if (Speed == -1)
    fFoundLogo = EnigmaLogoCache.LoadIcon(Play ? "icons/replay/play" : "icons/replay/pause");
  else if (Play) {
    if (Speed > MAX_SPEED_BITMAPS - 1) {
      error("MAX SPEED %d > 9\n", Speed);
      Speed = MAX_SPEED_BITMAPS - 1;
    }
    fFoundLogo = EnigmaLogoCache.LoadIcon(Forward ? strFastForward_large[Speed] : strFastRewind_large[Speed]);
  } else {                      // trick speed
    if (Speed > MAX_TRICKSPEED_BITMAPS - 1) {
      error("MAX SPEED %d > 3\n", Speed);
      Speed = MAX_TRICKSPEED_BITMAPS - 1;
    }
    fFoundLogo = EnigmaLogoCache.LoadIcon(Forward ? strSlowForward_large[Speed] : strSlowRewind_large[Speed]);
  }
  if (fFoundLogo)
    osd->DrawBitmap(xLogoLeft + (xLogoRight - xLogoLeft - EnigmaLogoCache.Get().Width()) / 2,
                    yLogoTop + (yLogoBottom - yLogoTop - EnigmaLogoCache.Get().Height()) / 2,
                    EnigmaLogoCache.Get(), EnigmaLogoCache.Get().Color(1),
                    Theme.Color(clrLogoBg), false, true);
}

void cSkinEnigmaDisplayReplay::SetProgress(int Current, int Total)
{
  // create progressbar
  cProgressBar pb(xProgressRight - xProgressLeft - 2 * BigGap,
                  yProgressBottom - yProgressTop - 2 * BigGap, Current, Total,
                  marks, Theme.Color(clrReplayProgressSeen),
                  Theme.Color(clrReplayProgressRest),
                  Theme.Color(clrReplayProgressSelected),
                  Theme.Color(clrReplayProgressMark),
                  Theme.Color(clrReplayProgressCurrent));
  // draw progressbar
  osd->DrawBitmap(xProgressLeft + BigGap, yProgressTop + BigGap, pb);
}

void cSkinEnigmaDisplayReplay::SetCurrent(const char *Current)
{
  if (!Current)
    return;

  // draw current time
  const cFont *font = cFont::GetFont(fontOsd);
  int w = font->Width(Current);
  osd->DrawText(xTimeLeft + BigGap, yTimeTop, Current,
                Theme.Color(clrReplayCurrent), Theme.Color(clrAltBackground), font,
                w, yTimeBottom - yTimeTop, taLeft);
}

void cSkinEnigmaDisplayReplay::SetTotal(const char *Total)
{
  if (!Total)
    return;

  // draw total time
  const cFont *font = cFont::GetFont(fontOsd);
  int w = font->Width(Total);
  osd->DrawText(xTimeRight - BigGap - w, yTimeTop, Total,
                Theme.Color(clrReplayTotal), Theme.Color(clrAltBackground), font, w,
                yTimeBottom - yTimeTop, taRight);
}

void cSkinEnigmaDisplayReplay::SetJump(const char *Jump)
{
  if (Jump) {
    // draw jump prompt
    const cFont *font = cFont::GetFont(fontOsd);
    nJumpWidth = font->Width(Jump);
    osd->DrawText(xTimeLeft + (xTimeRight - xTimeLeft - nJumpWidth) / 2,
                  yTimeTop, Jump, Theme.Color(clrReplayModeJump),
                  Theme.Color(clrAltBackground), font, nJumpWidth,
                  yTimeBottom - yTimeTop, taLeft);
  } else {
    // erase old prompt
    osd->DrawRectangle(xTimeLeft + (xTimeRight - xTimeLeft - nJumpWidth) / 2,
                       yTimeTop,
                       xTimeLeft + (xTimeRight - xTimeLeft - nJumpWidth) / 2 +
                       nJumpWidth - 1, yTimeBottom - 1, Theme.Color(clrAltBackground));
  }
}

void cSkinEnigmaDisplayReplay::SetMessage(eMessageType Type, const char *Text)
{
  if (Text) {
    // save current osd
    osd->SaveRegion(xMessageLeft, yMessageTop, xMessageRight, yMessageBottom);
    // draw message
    osd->DrawRectangle(xMessageLeft, yMessageTop, xMessageRight - 1,
                       yMessageBottom - 1, clrTransparent);
    osd->DrawRectangle(xMessageLeft, yMessageTop + SmallGap, xMessageRight - 1,
                       yMessageBottom - SmallGap - 1,
                       Theme.Color(clrMessageBorder));
    osd->DrawText(xMessageLeft + Gap, yMessageTop + 2 * SmallGap, Text,
                  Theme.Color(clrMessageStatusFg + 2 * Type),
                  Theme.Color(clrMessageStatusBg + 2 * Type),
                  cFont::GetFont(fontOsd),
                  xMessageRight - Gap - xMessageLeft - Gap - 1,
                  yMessageBottom - 2 * SmallGap - yMessageTop - 2 * SmallGap,
                  taCenter);
  } else {
    // restore saved osd
    osd->RestoreRegion();
  }
}

void cSkinEnigmaDisplayReplay::Flush(void)
{
  // update date
  if (!modeonly) {
    cString date = DayDateTime();
    osd->DrawText(xBottomLeft + Roundness, yBottomTop, date,
                  Theme.Color(clrTitleFg), Theme.Color(clrBottomBg),
                  cFont::GetFont(fontOsd),
                  xBottomRight - Roundness - xBottomLeft - Roundness - 1,
                  yBottomBottom - yBottomTop - 1, taRight);
  }
  osd->Flush();
}

// --- cSkinEnigmaDisplayVolume ---------------------------------------------

class cSkinEnigmaDisplayVolume:public cSkinDisplayVolume {
private:
  cOsd *osd;

  int xTitleLeft, xTitleRight, yTitleTop, yTitleBottom, yTitleDecoTop, yTitleDecoBottom;
  int xLogoLeft, xLogoRight, yLogoTop, yLogoBottom, xLogoDecoLeft, xLogoDecoRight;
  int xBodyLeft, xBodyRight, yBodyTop, yBodyBottom;
  int xBottomLeft, xBottomRight, yBottomTop, yBottomBottom;

  int lineHeight;
  bool fShowSymbol;

public:
  cSkinEnigmaDisplayVolume();
  virtual ~ cSkinEnigmaDisplayVolume();
  virtual void SetVolume(int Current, int Total, bool Mute);
  virtual void Flush(void);
};

cSkinEnigmaDisplayVolume::cSkinEnigmaDisplayVolume()
{
  fShowSymbol = (!EnigmaConfig.singleArea || EnigmaConfig.singleArea8Bpp) && (EnigmaConfig.showSymbols == 1 || EnigmaConfig.showSymbols == 2);
  lineHeight = cFont::GetFont(fontOsd)->Height();

  int LogoSize = max(3 * lineHeight + TitleDeco + SmallGap, IconHeight);
  LogoSize += (LogoSize % 2 ? 1 : 0);
  xLogoLeft = 0;
  xLogoRight = LogoSize;
  xLogoDecoLeft = xLogoRight + LogoDecoGap;
  xLogoDecoRight = xLogoDecoLeft + LogoDecoWidth;
  yLogoTop = 0;
  yLogoBottom = yLogoTop + LogoSize;
  xTitleLeft = fShowSymbol ? (xLogoDecoRight + LogoDecoGap2) : 0;
  xTitleRight = Setup.OSDWidth;
  yTitleTop = yLogoTop;
  yTitleBottom = yTitleTop + lineHeight;
  yTitleDecoTop = yTitleBottom + TitleDecoGap;
  yTitleDecoBottom = yTitleDecoTop + TitleDecoHeight;
  xBottomLeft = xTitleLeft;
  xBottomRight = Setup.OSDWidth;
  yBottomTop = yLogoBottom - lineHeight;
  yBottomBottom = yLogoBottom;
  xBodyLeft = xTitleLeft;
  xBodyRight = xTitleRight;
  yBodyTop = yTitleDecoBottom + TitleDecoGap2;
  yBodyBottom = yBottomTop - SmallGap;

  // create osd
  osd = cOsdProvider::NewOsd(Setup.OSDLeft, Setup.OSDTop + Setup.OSDHeight - yBottomBottom);
  tArea Areas[] = { {xLogoLeft, yLogoTop, xTitleRight - 1, yBottomBottom - 1, EnigmaConfig.singleArea8Bpp ? 8 : 4} };
  if (EnigmaConfig.singleArea && osd->CanHandleAreas(Areas, sizeof(Areas) / sizeof(tArea)) == oeOk) {
    osd->SetAreas(Areas, sizeof(Areas) / sizeof(tArea));
  } else {
    cBitmap *bitmap = NULL;
    if (fShowSymbol) {
      tArea Areas[] = { {xLogoLeft, yLogoTop, xLogoRight + LogoDecoGap + LogoDecoWidth - 1, yLogoBottom - 1, 4},
                        {xTitleLeft, yTitleTop, xTitleRight - 1, yBottomBottom - 1, 4}
      };
      int rc = osd->CanHandleAreas(Areas, sizeof(Areas) / sizeof(tArea));
      if (rc == oeOk)
        osd->SetAreas(Areas, sizeof(Areas) / sizeof(tArea));
      else {
        error("cSkinEnigmaDisplayVolume: CanHandleAreas() returned %d\n", rc);
        delete osd;
        osd = NULL;
        throw 1;
        return;
      }
      bitmap = osd->GetBitmap(1);
    } else {
      tArea Areas[] = { {xTitleLeft, yTitleTop, xTitleRight - 1, yBottomBottom - 1, 4}
      };
      int rc = osd->CanHandleAreas(Areas, sizeof(Areas) / sizeof(tArea));
      if (rc == oeOk)
        osd->SetAreas(Areas, sizeof(Areas) / sizeof(tArea));
      else {
        error("cSkinEnigmaDisplayVolume: CanHandleAreas() returned %d\n", rc);
        delete osd;
        osd = NULL;
        throw 1;
        return;
      }
      bitmap = osd->GetBitmap(0);
    }
    if (bitmap) {
      // set colors
      bitmap->Reset();
      bitmap->SetColor(0, Theme.Color(clrTransparent));
      bitmap->SetColor(1, Theme.Color(clrBackground));
      bitmap->SetColor(2, Theme.Color(clrTitleBg));
      bitmap->SetColor(3, Theme.Color(clrBottomBg));
      bitmap->SetColor(4, Theme.Color(clrVolumeBar));
      bitmap->SetColor(5, Theme.Color(clrVolumeBarMute));
      bitmap->SetColor(6, Theme.Color(clrTitleFg));
      bitmap->SetColor(7, Theme.Color(clrTitleShadow));
    }
  }
  // clear all
  osd->DrawRectangle(0, 0, osd->Width(), osd->Height(), clrTransparent);
  if (fShowSymbol) {
    // draw logo area
    osd->DrawRectangle(xLogoLeft, yLogoTop, xLogoRight - 1, yLogoBottom - 1, Theme.Color(clrLogoBg));
    osd->DrawRectangle(xLogoDecoLeft, yLogoTop, xLogoDecoRight - 1, yLogoBottom - 1, Theme.Color(clrLogoBg));
  }
  // draw title
  osd->DrawRectangle(xTitleLeft, yTitleTop, xTitleRight - 1, yTitleBottom - 1, Theme.Color(clrTitleBg));
  osd->DrawRectangle(xTitleLeft, yTitleDecoTop, xTitleRight - 1, yTitleDecoBottom - 1, Theme.Color(clrTitleBg));
  osd->DrawEllipse(xTitleRight - Roundness, yTitleTop, xTitleRight - 1, yTitleTop + Roundness - 1, clrTransparent, -1);
  // draw body area
  osd->DrawRectangle(xBodyLeft, yBodyTop, xBodyRight - 1, yBodyBottom - 1, Theme.Color(clrBackground));
  // draw bottom area
  osd->DrawRectangle(xBottomLeft, yBottomTop, xBottomRight - 1, yBottomBottom - 1, Theme.Color(clrBottomBg));
  osd->DrawEllipse(xBottomRight - Roundness, yBottomBottom - Roundness, xBottomRight - 1, yBottomBottom - 1, clrTransparent, -4);

  if (!fShowSymbol) {
    osd->DrawEllipse(xTitleLeft, yTitleTop, xTitleLeft + Roundness - 1, yTitleTop + Roundness - 1, clrTransparent, -2);
    osd->DrawEllipse(xBottomLeft, yBottomBottom - Roundness, xBottomLeft + Roundness, yBottomBottom - 1, clrTransparent, -3);
  }
}

cSkinEnigmaDisplayVolume::~cSkinEnigmaDisplayVolume()
{
  delete osd;
}

void cSkinEnigmaDisplayVolume::SetVolume(int Current, int Total, bool Mute)
{
  tColor ColorBar;
  const char *Prompt;
  const cFont *font = cFont::GetFont(fontOsd);
  bool fFoundLogo = false;

  // select behaviour
  if (Mute) {
    ColorBar = Theme.Color(clrVolumeBarMute);
    Prompt = tr("Mute");
    if (fShowSymbol)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/volume/muteOn");
  } else {
    ColorBar = Theme.Color(clrVolumeBar);
    Prompt = tr("Volume");
    if (fShowSymbol)
      fFoundLogo = EnigmaLogoCache.LoadIcon("icons/volume/muteOff");
  }
  // logo
  if (fShowSymbol && fFoundLogo)
    osd->DrawBitmap(xLogoLeft + (xLogoRight - xLogoLeft - EnigmaLogoCache.Get().Width()) / 2,
                    yLogoTop + (yLogoBottom - yLogoTop - EnigmaLogoCache.Get().Height()) / 2,
                    EnigmaLogoCache.Get(), EnigmaLogoCache.Get().Color(1),
                    Theme.Color(clrLogoBg));
  // current volume
  int vol = xBodyLeft + Gap + (xBodyRight - Gap - xBodyLeft - Gap) * Current / Total;
  // draw titlebar
  osd->DrawRectangle(xTitleLeft + (fShowSymbol ? Gap : Roundness), yTitleTop, xTitleRight - Roundness - 1,
                     yTitleBottom - 1, Theme.Color(clrTitleBg));
  osd->DrawText(xTitleLeft + (fShowSymbol ? Gap : Roundness) + 3, yTitleTop + 3, Prompt,
                Theme.Color(clrTitleShadow), clrTransparent, font,
                xTitleRight - Roundness - xTitleLeft, lineHeight, taCenter);
  osd->DrawText(xTitleLeft + (fShowSymbol ? Gap : Roundness), yTitleTop, Prompt,
                Theme.Color(clrTitleFg), clrTransparent, font,
                xTitleRight - Roundness - xTitleLeft, lineHeight, taCenter);
  // draw volumebar
  osd->DrawRectangle(xBodyLeft + Gap, yBodyTop + Gap, xBodyRight - Gap - 1,
                     yBodyBottom - Gap - 1, Theme.Color(clrBackground));
  osd->DrawRectangle(xBodyLeft + Gap, yBodyTop + Gap, vol - 1,
                     yBodyBottom - Gap - 1, ColorBar);
}

void cSkinEnigmaDisplayVolume::Flush(void)
{
  cString date = DayDateTime();
  osd->DrawText(xBottomLeft + (fShowSymbol ? 0 : Roundness), yBottomTop, date, Theme.Color(clrTitleFg),
                Theme.Color(clrBottomBg), cFont::GetFont(fontOsd),
                xBottomRight - (fShowSymbol ? Gap : (2 * Roundness)) - xBottomLeft - 1,
                yBottomBottom - yBottomTop - 1, taRight);
  osd->Flush();
}

// --- cSkinEnigmaDisplayTracks ---------------------------------------------

class cSkinEnigmaDisplayTracks:public cSkinDisplayTracks {
private:
  cOsd *osd;

  int xTitleLeft, xTitleRight, yTitleTop, yTitleBottom, yTitleDecoTop, yTitleDecoBottom;
  int xLogoLeft, xLogoRight, yLogoTop, yLogoBottom;
  int xListLeft, xListRight, yListTop, yListBottom;
  int xBottomLeft, xBottomRight, yBottomTop, yBottomBottom;

  int lineHeight;
  int currentIndex;
  bool fShowSymbol;

  void SetItem(const char *Text, int Index, bool Current);
public:
  cSkinEnigmaDisplayTracks(const char *Title, int NumTracks,
                           const char *const *Tracks);
  virtual ~ cSkinEnigmaDisplayTracks();
  virtual void SetTrack(int Index, const char *const *Tracks);
  virtual void SetAudioChannel(int AudioChannel);
  virtual void Flush(void);
};

cSkinEnigmaDisplayTracks::cSkinEnigmaDisplayTracks(const char *Title, int NumTracks, const char *const *Tracks)
{
  fShowSymbol = (!EnigmaConfig.singleArea || EnigmaConfig.singleArea8Bpp) && (EnigmaConfig.showSymbols == 1 || EnigmaConfig.showSymbols == 2);

  const cFont *font = cFont::GetFont(fontOsd);
  lineHeight = font->Height();
  int LogoSize = IconHeight;
  LogoSize += (LogoSize % 2 ? 1 : 0);
  currentIndex = -1;
  int ItemsWidth = 0;
  for (int i = 0; i < NumTracks; i++)
    ItemsWidth = max(ItemsWidth, font->Width(Tracks[i]));
  ItemsWidth += (EnigmaConfig.showMarker ? lineHeight : SmallGap) + SmallGap;
  ItemsWidth = max(ItemsWidth, LogoSize);
  int width = ItemsWidth;
  if (fShowSymbol)
    width += LogoSize + LogoDecoGap2;
  width = max(width, font->Width(DayDateTime()) + 2 * Roundness);
  width = max(width, font->Width(Title) + 2 * Roundness + (fShowSymbol ? 0 : (bmAudio[0].Width() + SmallGap)));

  xTitleLeft = 0;
  xTitleRight = Setup.OSDWidth;
  int d = xTitleRight - xTitleLeft;
  if (d > width) {
    d = (d - width) & ~0x07; // must be multiple of 8
    xTitleRight -= d;
  }

  yTitleTop = 0;
  yTitleBottom = lineHeight;
  yTitleDecoTop = yTitleBottom + TitleDecoGap;
  yTitleDecoBottom = yTitleDecoTop + TitleDecoHeight;
  xLogoLeft = xTitleLeft;
  xLogoRight = xLogoLeft + LogoSize;
  yLogoTop = yTitleDecoBottom + TitleDecoGap2;
  yLogoBottom = yLogoTop + LogoSize;
  xListLeft = fShowSymbol ? (xLogoRight + LogoDecoGap2) : 0;
  xListRight = xTitleRight;
  yListTop = yLogoTop;
  yListBottom = yLogoBottom;
  xBottomLeft = xTitleLeft;
  xBottomRight = xTitleRight;
  yBottomTop = yListBottom + SmallGap;
  yBottomBottom = yBottomTop + lineHeight;

  // create osd
  osd = cOsdProvider::NewOsd(Setup.OSDLeft, Setup.OSDTop + Setup.OSDHeight - yBottomBottom);
  tArea Areas[] = { {xTitleLeft, yTitleTop, xBottomRight - 1, yBottomBottom - 1, EnigmaConfig.singleArea8Bpp ? 8 : 4} };
  if (EnigmaConfig.singleArea && osd->CanHandleAreas(Areas, sizeof(Areas) / sizeof(tArea)) == oeOk) {
    osd->SetAreas(Areas, sizeof(Areas) / sizeof(tArea));
  } else {
    if (fShowSymbol) {
      tArea Areas[] = { {xTitleLeft, yTitleTop, xTitleRight - 1, yTitleDecoBottom- 1, 2},
                         {xLogoLeft, yLogoTop, xLogoRight - 1, yLogoBottom - 1, 4},
                         {xListLeft, yListTop, xListRight - 1, yListBottom - 1, 4},
                         {xBottomLeft, yBottomTop, xBottomRight - 1, yBottomBottom - 1, 2}
      };
      int rc = osd->CanHandleAreas(Areas, sizeof(Areas) / sizeof(tArea));
      if (rc == oeOk)
        osd->SetAreas(Areas, sizeof(Areas) / sizeof(tArea));
      else {
        error("cSkinEnigmaDisplayTracks: CanHandleAreas() returned %d\n", rc);
        delete osd;
        osd = NULL;
        throw 1;
        return;
      }
    } else {
      tArea Areas[] = { {xTitleLeft, yTitleTop, xTitleRight - 1, yTitleDecoBottom- 1, 2},
                         {xListLeft, yListTop, xListRight - 1, yListBottom - 1, 4},
                         {xBottomLeft, yBottomTop, xBottomRight - 1, yBottomBottom - 1, 2}
      };
      int rc = osd->CanHandleAreas(Areas, sizeof(Areas) / sizeof(tArea));
      if (rc == oeOk)
        osd->SetAreas(Areas, sizeof(Areas) / sizeof(tArea));
      else {
        error("cSkinEnigmaDisplayTracks: CanHandleAreas() returned %d\n", rc);
        delete osd;
        osd = NULL;
        throw 1;
        return;
      }
    }
  }
  // clear all
  osd->DrawRectangle(0, 0, osd->Width(), osd->Height(), clrTransparent);
  // draw titlebar
  osd->DrawRectangle(xTitleLeft, yTitleTop, xTitleRight - 1, yTitleBottom - 1, Theme.Color(clrTitleBg));
  osd->DrawRectangle(xTitleLeft, yTitleDecoTop, xTitleRight - 1, yTitleDecoBottom - 1, Theme.Color(clrTitleBg));
  osd->DrawText(xTitleLeft + Roundness + 3, yTitleTop + 3, Title,
                Theme.Color(clrTitleShadow), clrTransparent, font,
                xTitleRight - Roundness - xTitleLeft - Roundness,
                lineHeight - 3, fShowSymbol ? taCenter : taLeft);
  osd->DrawText(xTitleLeft + Roundness, yTitleTop, Title,
                Theme.Color(clrTitleFg), clrTransparent, font,
                xTitleRight - Roundness - xTitleLeft - Roundness, lineHeight,
                fShowSymbol ? taCenter : taLeft);
  // draw rounded left corner of titlebar
  osd->DrawEllipse(xTitleLeft, yTitleTop, xTitleLeft + Roundness - 1,
                   yTitleTop + Roundness - 1, clrTransparent, -2);
  // draw rounded right corner of titlebar
  osd->DrawEllipse(xTitleRight - Roundness, yTitleTop, xTitleRight - 1,
                   yTitleTop + Roundness - 1, clrTransparent, -1);
  if (fShowSymbol) {
    // draw logo area
    osd->DrawRectangle(xLogoLeft, yLogoTop, xLogoRight - 1, yLogoBottom - 1, Theme.Color(clrLogoBg));
  }
  // draw list area
  osd->DrawRectangle(xListLeft, yListTop, xListRight - 1, yListBottom - 1, Theme.Color(clrBackground));
  // draw bottom
  osd->DrawRectangle(xBottomLeft, yBottomTop, xBottomRight - 1, yBottomBottom - 1, Theme.Color(clrBottomBg));
  osd->DrawEllipse(xBottomLeft, yBottomBottom - Roundness,
                   xBottomLeft + Roundness, yBottomBottom - 1, clrTransparent, -3);
  osd->DrawEllipse(xBottomRight - Roundness, yBottomBottom - Roundness,
                   xBottomRight - 1, yBottomBottom - 1, clrTransparent, -4);
  // fill up audio tracks
  SetAudioChannel(cDevice::PrimaryDevice()->GetAudioChannel());
  for (int i = 0; i < NumTracks; i++)
    SetItem(Tracks[i], i, false);
}

cSkinEnigmaDisplayTracks::~cSkinEnigmaDisplayTracks()
{
  delete osd;
}

void cSkinEnigmaDisplayTracks::SetItem(const char *Text, int Index, bool Current)
{
  int xItemLeft = xListLeft + (EnigmaConfig.showMarker ? lineHeight : SmallGap);
  const cFont *font = cFont::GetFont(fontOsd);
  int y = yListTop + Index * lineHeight;
  tColor ColorFg, ColorBg;
  if (Current) {
    ColorFg = Theme.Color(clrMenuItemCurrentFg);
    ColorBg = Theme.Color(clrMenuHighlight);
    currentIndex = Index;
  } else {
    ColorFg = Theme.Color(clrMenuItemSelectableFg);
    ColorBg = Theme.Color(clrBackground);
  }
  // draw track id
  osd->DrawRectangle(xListLeft, y, xListRight, y + lineHeight, ColorBg);
  if (EnigmaConfig.showMarker) {
    osd->DrawEllipse(xListLeft + MarkerGap, y + MarkerGap,
                     xListLeft + lineHeight - MarkerGap,
                     y + lineHeight - MarkerGap,
                     Current ? ColorFg : ColorBg);
  }
  osd->DrawText(xItemLeft, y, Text, ColorFg, ColorBg, font, xListRight - xItemLeft - SmallGap, lineHeight);
}

void cSkinEnigmaDisplayTracks::SetAudioChannel(int AudioChannel)
{
  if (fShowSymbol) {
    // draw logo area
    osd->DrawRectangle(xLogoLeft, yLogoTop, xLogoRight - 1, yLogoBottom - 1, Theme.Color(clrLogoBg));
    if (!(AudioChannel >= 0 && AudioChannel < MAX_AUDIO_BITMAPS))
      AudioChannel = 0;
    if (EnigmaLogoCache.LoadIcon(strAudio_large[AudioChannel]))
      osd->DrawBitmap(xLogoLeft + (xLogoRight - xLogoLeft - EnigmaLogoCache.Get().Width()) / 2,
                      yLogoTop + (yLogoBottom - yLogoTop - EnigmaLogoCache.Get().Height()) / 2,
                      EnigmaLogoCache.Get(), EnigmaLogoCache.Get().Color(1),
                      Theme.Color(clrLogoBg));
  } else {
    if (!(AudioChannel >= 0 && AudioChannel < MAX_AUDIO_BITMAPS))
      AudioChannel = 0;
    osd->DrawBitmap(xTitleRight - Roundness - bmAudio[AudioChannel].Width(),
                    yTitleTop + (yTitleBottom - yTitleTop - bmAudio[AudioChannel].Height()) / 2,
                    bmAudio[AudioChannel], Theme.Color(clrTitleFg),
                    Theme.Color(clrTitleBg));
  }
}

void cSkinEnigmaDisplayTracks::SetTrack(int Index, const char *const *Tracks)
{
  if (currentIndex >= 0)
    SetItem(Tracks[currentIndex], currentIndex, false);
  SetItem(Tracks[Index], Index, true);
}

void cSkinEnigmaDisplayTracks::Flush(void)
{
  cString date = DayDateTime();
  osd->DrawText(xBottomLeft + Roundness, yBottomTop, date,
                Theme.Color(clrTitleFg), Theme.Color(clrBottomBg),
                cFont::GetFont(fontOsd),
                xBottomRight - Roundness - xBottomLeft - Roundness - 1,
                yBottomBottom - yBottomTop - 1, taRight);
  osd->Flush();
}

// --- cSkinEnigmaDisplayMessage --------------------------------------------

class cSkinEnigmaDisplayMessage:public cSkinDisplayMessage {
private:
  cOsd *osd;

  int xTitleLeft, xTitleRight, yTitleTop, yTitleBottom, yTitleDecoTop, yTitleDecoBottom;
  int xLogoLeft, xLogoRight, yLogoTop, yLogoBottom, xLogoDecoLeft, xLogoDecoRight;
  int xMessageLeft, xMessageRight, yMessageTop, yMessageBottom;
  int xBottomLeft, xBottomRight, yBottomTop, yBottomBottom;

  int lineHeight;
  bool fShowSymbol;
public:
  cSkinEnigmaDisplayMessage();
  virtual ~ cSkinEnigmaDisplayMessage();
  virtual void SetMessage(eMessageType Type, const char *Text);
  virtual void Flush(void);
};

cSkinEnigmaDisplayMessage::cSkinEnigmaDisplayMessage()
{
  lineHeight = cFont::GetFont(fontOsd)->Height();
  fShowSymbol = (!EnigmaConfig.singleArea || EnigmaConfig.singleArea8Bpp) && (EnigmaConfig.showSymbols == 1 || EnigmaConfig.showSymbols == 2);

  int LogoSize = max(3 * lineHeight + TitleDeco + 5 * SmallGap, IconHeight);
  LogoSize += (LogoSize % 2 ? 1 : 0);

  xLogoLeft = 0;
  xLogoRight = xLogoLeft + LogoSize;
  xLogoDecoLeft = xLogoRight + LogoDecoGap;
  xLogoDecoRight = xLogoDecoLeft + LogoDecoWidth;
  yLogoTop = 0;
  yLogoBottom = yLogoTop + LogoSize;
  xTitleLeft = fShowSymbol ? xLogoDecoRight + LogoDecoGap2 : 0;
  xTitleRight = Setup.OSDWidth;
  yTitleTop = yLogoTop;
  yTitleBottom = yTitleTop + lineHeight;
  yTitleDecoTop = yTitleBottom + TitleDecoGap;
  yTitleDecoBottom = yTitleDecoTop + TitleDecoHeight;
  xBottomLeft = xTitleLeft;
  xBottomRight = xTitleRight;
  yBottomTop = yLogoBottom - lineHeight;
  yBottomBottom = yLogoBottom;
  xMessageLeft = xTitleLeft;
  xMessageRight = xTitleRight;
  yMessageTop = yTitleDecoBottom + TitleDecoGap2;
  yMessageBottom = yBottomTop - SmallGap;

  // create osd
  osd = cOsdProvider::NewOsd(Setup.OSDLeft, Setup.OSDTop + Setup.OSDHeight - yBottomBottom);
  tArea Areas[] = { {xLogoLeft, yLogoTop, xBottomRight - 1, yBottomBottom - 1, EnigmaConfig.singleArea8Bpp ? 8 : 4} };
  if (EnigmaConfig.singleArea && osd->CanHandleAreas(Areas, sizeof(Areas) / sizeof(tArea)) == oeOk) {
    osd->SetAreas(Areas, sizeof(Areas) / sizeof(tArea));
  } else {
    if (fShowSymbol) {
      tArea Areas[] = { {xLogoLeft, yLogoTop, xLogoRight + LogoDecoGap + LogoDecoWidth - 1, yLogoBottom - 1, 4},
                        {xTitleLeft, yTitleTop, xBottomRight - 1, yBottomBottom - 1, 4} };
      int rc = osd->CanHandleAreas(Areas, sizeof(Areas) / sizeof(tArea));
      if (rc == oeOk)
        osd->SetAreas(Areas, sizeof(Areas) / sizeof(tArea));
      else {
        error("cSkinEnigmaDisplayMessage: CanHandleAreas() returned %d\n", rc);
        delete osd;
        osd = NULL;
        throw 1;
        return;
      }
    } else {
      tArea Areas[] = { {xTitleLeft, yTitleTop, xBottomRight - 1, yBottomBottom - 1, 4} };
      int rc = osd->CanHandleAreas(Areas, sizeof(Areas) / sizeof(tArea));
      if (rc == oeOk)
        osd->SetAreas(Areas, sizeof(Areas) / sizeof(tArea));
      else {
        error("cSkinEnigmaDisplayMessage: CanHandleAreas() returned %d\n", rc);
        delete osd;
        osd = NULL;
        throw 1;
        return;
      }
    }
  }
  // clear all
  osd->DrawRectangle(0, 0, osd->Width(), osd->Height(), clrTransparent);
}

cSkinEnigmaDisplayMessage::~cSkinEnigmaDisplayMessage()
{
  delete osd;
}

void cSkinEnigmaDisplayMessage::SetMessage(eMessageType Type, const char *Text)
{
  if (fShowSymbol) {
    // draw logo
    osd->DrawRectangle(xLogoLeft, yLogoTop, xLogoRight - 1, yLogoBottom - 1, Theme.Color(clrLogoBg));
    osd->DrawRectangle(xLogoDecoLeft, yLogoTop, xLogoDecoRight - 1, yLogoBottom - 1, Theme.Color(clrLogoBg));
    if (EnigmaLogoCache.LoadIcon("icons/message/info"))
      osd->DrawBitmap(xLogoLeft + (xLogoRight - xLogoLeft - EnigmaLogoCache.Get().Width()) / 2,
                      yLogoTop + (yLogoBottom - yLogoTop - EnigmaLogoCache.Get().Height()) / 2, EnigmaLogoCache.Get(),
                      EnigmaLogoCache.Get().Color(1), Theme.Color(clrLogoBg));
  }
  // draw title
  osd->DrawRectangle(xTitleLeft, yTitleTop, xTitleRight - 1, yTitleBottom - 1, Theme.Color(clrTitleBg));
  osd->DrawRectangle(xTitleLeft, yTitleDecoTop, xTitleRight - 1, yTitleDecoBottom - 1, Theme.Color(clrTitleBg));
  osd->DrawEllipse(xTitleRight - Roundness, yTitleTop, xTitleRight - 1, yTitleTop + Roundness - 1, clrTransparent, -1);
  // draw centered message text
  osd->DrawRectangle(xMessageLeft, yMessageTop, xMessageRight - 1, yMessageBottom - 1, clrTransparent);
  osd->DrawRectangle(xMessageLeft, yMessageTop, xMessageRight - 1,
                     yMessageBottom - 1, Theme.Color(clrMessageBorder));
  osd->DrawText(xMessageLeft, yMessageTop + 2 * SmallGap, Text,
                Theme.Color(clrMessageStatusFg + 2 * Type),
                Theme.Color(clrMessageStatusBg + 2 * Type),
                cFont::GetFont(fontOsd),
                xMessageRight - xMessageLeft,
                yMessageBottom - 2 * SmallGap - yMessageTop - 2 * SmallGap, taCenter);
  // draw bottom
  osd->DrawRectangle(xBottomLeft, yBottomTop, xBottomRight - 1, yBottomBottom - 1, Theme.Color(clrBottomBg));
  osd->DrawEllipse(xBottomRight - Roundness, yBottomBottom - Roundness,
                   xBottomRight - 1, yBottomBottom - 1, clrTransparent, -4);

  if (!(fShowSymbol)) {
    // draw ellipse if not showing logo
    osd->DrawEllipse(xTitleLeft, yTitleTop, xTitleLeft + Roundness - 1, yTitleTop + Roundness - 1, clrTransparent, -2);
    osd->DrawEllipse(xBottomLeft, yBottomBottom - Roundness,
                     xBottomLeft + Roundness - 1, yBottomBottom - 1, clrTransparent, -3);
  }
}

void cSkinEnigmaDisplayMessage::Flush(void)
{
  osd->Flush();
}

// --- cSkinEnigma ----------------------------------------------------------

cSkinEnigma::cSkinEnigma() : cSkin("EnigmaNG", &::Theme)
{
  // Get the "classic" skin to be used as fallback skin if any of the OSD
  // menu fails to open.
  skinFallback = Skins.First();
  for (cSkin *Skin = Skins.First(); Skin; Skin = Skins.Next(Skin)) {
    if (strcmp(Skin->Name(), "classic") == 0) {
      skinFallback = Skin;
      break;
    }
  }
}

const char *cSkinEnigma::Description(void)
{
  return tr("EnigmaNG");
}

cSkinDisplayChannel *cSkinEnigma::DisplayChannel(bool WithInfo)
{
  try {
    return new cSkinEnigmaDisplayChannel(WithInfo);
  } catch(...) {
    return skinFallback->DisplayChannel(WithInfo);
  }
}

cSkinDisplayMenu *cSkinEnigma::DisplayMenu(void)
{
  try {
    return new cSkinEnigmaDisplayMenu;
  } catch (...) {
    return skinFallback->DisplayMenu();
  }
}

cSkinDisplayReplay *cSkinEnigma::DisplayReplay(bool ModeOnly)
{
  try {
    return new cSkinEnigmaDisplayReplay(ModeOnly);
  } catch (...) {
    return skinFallback->DisplayReplay(ModeOnly);
  }
}

cSkinDisplayVolume *cSkinEnigma::DisplayVolume(void)
{
  try {
    return new cSkinEnigmaDisplayVolume;
  } catch (...) {
    return skinFallback->DisplayVolume();
  }
}

cSkinDisplayTracks *cSkinEnigma::DisplayTracks(const char *Title, int NumTracks, const char *const *Tracks)
{
  try {
    return new cSkinEnigmaDisplayTracks(Title, NumTracks, Tracks);
  } catch (...) {
    return skinFallback->DisplayTracks(Title, NumTracks, Tracks);
  }
}

cSkinDisplayMessage *cSkinEnigma::DisplayMessage(void)
{
  try {
    return new cSkinEnigmaDisplayMessage;
  } catch (...) {
    return skinFallback->DisplayMessage();
  }
}

// vim:et:sw=2:ts=2:
