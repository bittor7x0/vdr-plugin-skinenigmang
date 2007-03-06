/*
 * enigma.c: A plugin for the Video Disk Recorder
 *
 * See the README file for copyright information and how to reach the author.
 *
 */

#include "common.h"
#include "config.h"
#include "i18n.h"
#include "logo.h"
#include "enigma.h"
#include "status.h"
#include <getopt.h>
#include <vdr/plugin.h>

#if defined(APIVERSNUM) && APIVERSNUM < 10400
#error "VDR-1.4.0 API version or greater is required!"
#endif

static const char VERSION[] = "0.0.3";
static const char DESCRIPTION[] = "EnigmaNG skin";

class cPluginSkinEnigma : public cPlugin {
private:
	bool fLogodirSet;

public:
  cPluginSkinEnigma(void);
  virtual ~cPluginSkinEnigma();
  virtual const char *Version(void) {
    return VERSION;
  } virtual const char *Description(void) {
    return tr(DESCRIPTION);
  }
  virtual const char *CommandLineHelp(void);
  virtual bool ProcessArgs(int argc, char *argv[]);
  virtual bool Initialize(void);
  virtual bool Start(void);
  virtual void Stop(void);
  virtual void Housekeeping(void);
  virtual void MainThreadHook(void) {
  }
  virtual cString Active(void) {
    return NULL;
  }
  virtual const char *MainMenuEntry(void) {
    return NULL;
  }
  virtual cOsdObject *MainMenuAction(void);
  virtual cMenuSetupPage *SetupMenu(void);
  virtual bool SetupParse(const char *Name, const char *Value);
  virtual bool Service(const char *Id, void *Data = NULL);
  virtual const char **SVDRPHelpPages(void);
  virtual cString SVDRPCommand(const char *Command, const char *Option, int &ReplyCode);
};

class cPluginSkinEnigmaSetup : public cMenuSetupPage {
private:
  cEnigmaConfig data;
  const char *showSymbolsTexts[4];
  const char *showRemainingTexts[3];
  const char *useSubtitleRerunTexts[3];

  virtual void Setup(void);
  void AddCategory(const char *Title);
protected:
  virtual eOSState ProcessKey(eKeys Key);
  virtual void Store(void);
public:
    cPluginSkinEnigmaSetup(void);
};

cPluginSkinEnigma::cPluginSkinEnigma(void)
{
  // initialize any member variables here.
  // DON'T DO ANYTHING ELSE THAT MAY HAVE SIDE EFFECTS, REQUIRE GLOBAL
  // VDR OBJECTS TO EXIST OR PRODUCE ANY OUTPUT!
	fLogodirSet = false;
}

cPluginSkinEnigma::~cPluginSkinEnigma()
{
  // clean up after yourself!
}

const char *cPluginSkinEnigma::CommandLineHelp(void)
{ 
  // return a string that describes all known command line options.
  return "  -l <LOGODIR>, --logodir=<LOGODIR>  Define a directory for channel logos.\n";
}

bool cPluginSkinEnigma::ProcessArgs(int argc, char *argv[])
{
  // implement command line argument processing here if applicable.
	static const struct option long_options[] = {
		{ "logodir", required_argument, NULL, 'l' },
		{ NULL }
	};

	int c;
	while ((c = getopt_long(argc, argv, "l:", long_options, NULL)) != -1) {
		switch (c) {
			case 'l':
				EnigmaConfig.SetLogoDir(optarg);
				fLogodirSet = true;
				break;
			default:
				return false;
		}
	}
  return true;
}

bool cPluginSkinEnigma::Initialize(void)
{
  // initialize any background activities the plugin shall perform.
  debug("cPluginSkinEnigma::Initialize()\n");
  return true;
}

bool cPluginSkinEnigma::Start(void)
{
  // start any background activities the plugin shall perform.
  debug("cPluginSkinEnigma::Start()\n");
  RegisterI18n(Phrases);
	if (!fLogodirSet) {
	  // set logo directory
  	EnigmaConfig.SetLogoDir(cPlugin::ConfigDirectory(PLUGIN_NAME_I18N));
		fLogodirSet = true;
	}
  // resize logo cache
  EnigmaLogoCache.Resize(EnigmaConfig.cacheSize);
  // create skin
  new cSkinEnigma;
  return true;
}

void cPluginSkinEnigma::Stop(void)
{
  // stop any background activities the plugin shall perform.
  debug("cPluginSkinEnigma::Stop()\n");
}

void cPluginSkinEnigma::Housekeeping(void)
{
  // perform any cleanup or other regular tasks.
}

cOsdObject *cPluginSkinEnigma::MainMenuAction(void)
{
  // perform the action when selected from the main VDR menu.
  return NULL;
}

cMenuSetupPage *cPluginSkinEnigma::SetupMenu(void)
{
  // return a setup menu in case the plugin supports one.
  debug("cPluginSkinEnigma::SetupMenu()\n");
  return new cPluginSkinEnigmaSetup();
}

bool cPluginSkinEnigma::SetupParse(const char *Name, const char *Value)
{
  // parse your own setup parameters and store their values.
  debug("cPluginSkinEnigma::SetupParse()\n");
  if (!strcasecmp(Name, "TrySingleArea"))
    EnigmaConfig.singleArea = atoi(Value);
  else if (!strcasecmp(Name, "SingleArea8Bpp")) {
    EnigmaConfig.singleArea8Bpp = atoi(Value);
  } else if (!strcasecmp(Name, "ShowAuxInfo"))
    EnigmaConfig.showAuxInfo = atoi(Value);
  else if (!strcasecmp(Name, "ShowProgressBar"))
    EnigmaConfig.showProgressbar = atoi(Value);
  else if (!strcasecmp(Name, "ShowRemaining"))
    EnigmaConfig.showRemaining = atoi(Value);
  else if (!strcasecmp(Name, "ShowListSymbols"))
    EnigmaConfig.showListSymbols = atoi(Value);
  else if (!strcasecmp(Name, "ShowSymbols"))
    EnigmaConfig.showSymbols = atoi(Value);
  else if (!strcasecmp(Name, "ShowLogo"))
    EnigmaConfig.showLogo = atoi(Value);
  else if (!strcasecmp(Name, "ShowInfo"))
    EnigmaConfig.showInfo = atoi(Value);
  else if (!strcasecmp(Name, "ShowMarker"))
    EnigmaConfig.showMarker = atoi(Value);
  else if (!strcasecmp(Name, "ShowVPS"))
    EnigmaConfig.showVps = atoi(Value);
  else if (!strcasecmp(Name, "ShowFlags"))
    EnigmaConfig.showFlags = atoi(Value);
  else if (!strcasecmp(Name, "CacheSize"))
    EnigmaConfig.cacheSize = atoi(Value);
  else if (!strcasecmp(Name, "UseChannelId"))
    EnigmaConfig.useChannelId = atoi(Value);
  else if (!strcasecmp(Name, "NumReruns"))
    EnigmaConfig.numReruns = atoi(Value);
  else if (!strcasecmp(Name, "UseSubtitleRerun"))
    EnigmaConfig.useSubtitleRerun = atoi(Value);
  else if (!strcasecmp(Name, "ShowTimerConflicts"))
    EnigmaConfig.showTimerConflicts = atoi(Value);
  else
    return false;

  return true;
}

bool cPluginSkinEnigma::Service(const char *Id, void *Data)
{
  // handle custom service requests from other plugins
  return false;
}

const char **cPluginSkinEnigma::SVDRPHelpPages(void)
{
  // return help text for SVDRP commands this plugin implements
  return NULL;
}

cString cPluginSkinEnigma::SVDRPCommand(const char *Command, const char *Option, int &ReplyCode)
{
  // process SVDRP commands this plugin implements
  return NULL;
}

cPluginSkinEnigmaSetup::cPluginSkinEnigmaSetup(void)
{
  // create setup menu
  debug("cPluginSkinEnigmaSetup()\n");
  data = EnigmaConfig;
  Setup();
  SetHelp(tr("Button$Flush cache"), NULL, NULL, NULL);
}

void cPluginSkinEnigmaSetup::AddCategory(const char *Title) {
  char *buffer = NULL;

  asprintf(&buffer, "--- %s ----------------------------------------------------------------", Title );

  cOsdItem *item = new cOsdItem(buffer);
  free(buffer);

  item->SetSelectable(false);
  Add(item);
}

void cPluginSkinEnigmaSetup::Setup(void)
{
  // update setup display
  int current = Current();

  Clear();

  showSymbolsTexts[0] = tr("never");
  showSymbolsTexts[1] = tr("always");
  showSymbolsTexts[2] = tr("not in menu");
  showSymbolsTexts[3] = tr("only in menu");

  showRemainingTexts[0] = tr("elapsed");
  showRemainingTexts[1] = tr("remaining");
  showRemainingTexts[2] = tr("percent");

  useSubtitleRerunTexts[0] = tr("never");
  useSubtitleRerunTexts[1] = tr("if exists");
  useSubtitleRerunTexts[2] = tr("always");

  Add(new cMenuEditBoolItem(tr("One area (if possible)"), &data.singleArea,
                            tr("no"), tr("yes")));
	if (data.singleArea) {
  	Add(new cMenuEditBoolItem(tr("Bpp in single area"), &data.singleArea8Bpp,
                              "4", "8"));
	}
  Add(new cMenuEditBoolItem(tr("Show info area in main menu"), &data.showInfo,
                            tr("no"), tr("yes")));
  Add(new cMenuEditBoolItem(tr("Show auxiliary information"), &data.showAuxInfo,
                            tr("top"), tr("bottom")));
  Add(new cMenuEditStraItem(tr("Show remaining/elapsed time"), &data.showRemaining,
                            3, showRemainingTexts));
  Add(new cMenuEditBoolItem(tr("Show VPS"), &data.showVps,
                            tr("no"), tr("yes")));
  Add(new cMenuEditBoolItem(tr("Show progressbar"), &data.showProgressbar,
                            tr("no"), tr("yes")));

  AddCategory(tr("Logos & Symbols"));
  Add(new cMenuEditStraItem(tr("Show symbols"), &data.showSymbols,
                            4, showSymbolsTexts));
  Add(new cMenuEditBoolItem(tr("Show symbols in lists"), &data.showListSymbols,
                            tr("no"), tr("yes")));
  Add(new cMenuEditBoolItem(tr("Show marker in lists"), &data.showMarker,
                            tr("no"), tr("yes")));
  Add(new cMenuEditBoolItem(tr("Show flags"), &data.showFlags,
                            tr("no"), tr("yes")));
  Add(new cMenuEditBoolItem(tr("Show channel logos"), &data.showLogo,
                            tr("no"), tr("yes")));

  if (data.showLogo) {
    Add(new cMenuEditBoolItem(tr("Identify channel by"), &data.useChannelId,
                              tr("name"), tr("data")));
  }
  if (data.showLogo || data.showSymbols) {
    Add(new cMenuEditIntItem(tr("Channel logo cache size"), &data.cacheSize,
                             0, 1000));
  }

#ifdef SKINENIGMA_HAVE_EPGSEARCH
  AddCategory(tr("EPGSearch"));
  Add(new cMenuEditIntItem(tr("Number of Reruns"), &data.numReruns,
                            0, 10));
  Add(new cMenuEditStraItem(tr("Use Subtitle for reruns"), &data.useSubtitleRerun,
                            3, useSubtitleRerunTexts));
  if (data.showInfo) {
    Add(new cMenuEditBoolItem(tr("Show timer conflicts"), &data.showTimerConflicts,
                              tr("no"), tr("yes")));
  }
#endif

  SetCurrent(Get(current));
  Display();
}

void cPluginSkinEnigmaSetup::Store(void)
{
  // store setup data
  debug("cPluginSkinEnigmaSetup::Store()\n");
  EnigmaConfig = data;
  SetupStore("TrySingleArea", EnigmaConfig.singleArea);
  SetupStore("SingleArea8Bpp", EnigmaConfig.singleArea8Bpp);
  SetupStore("ShowAuxInfo", EnigmaConfig.showAuxInfo);
  SetupStore("ShowRemaining", EnigmaConfig.showRemaining);
  SetupStore("ShowProgressBar", EnigmaConfig.showProgressbar);
  SetupStore("ShowListSymbols", EnigmaConfig.showListSymbols);
  SetupStore("ShowSymbols", EnigmaConfig.showSymbols);
  SetupStore("ShowLogo", EnigmaConfig.showLogo);
  SetupStore("ShowInfo", EnigmaConfig.showInfo);
  SetupStore("ShowVPS", EnigmaConfig.showVps);
  SetupStore("ShowFlags", EnigmaConfig.showFlags);
  SetupStore("ShowMarker", EnigmaConfig.showMarker);
  SetupStore("CacheSize", EnigmaConfig.cacheSize);
  SetupStore("UseChannelId", EnigmaConfig.useChannelId);
  SetupStore("NumReruns", EnigmaConfig.numReruns);
  SetupStore("UseSubtitleRerun", EnigmaConfig.useSubtitleRerun);
  SetupStore("ShowTimerConflicts", EnigmaConfig.showTimerConflicts);
  // resize logo cache
  EnigmaLogoCache.Resize(EnigmaConfig.cacheSize);
}

eOSState cPluginSkinEnigmaSetup::ProcessKey(eKeys Key)
{
  // process key presses
  int oldShowLogo = data.showLogo;
  int oldShowSymbols = data.showSymbols;
	int oldSingleArea = data.singleArea;
  int oldShowInfo = data.showInfo;

  eOSState state = cMenuSetupPage::ProcessKey(Key);
  if ((state == osUnknown) && (Key == kRed)) {
    Skins.Message(mtInfo, tr("Flushing channel logo cache..."));
    EnigmaLogoCache.Flush();
    Skins.Message(mtInfo, NULL);
    state = osContinue;
  }
  if (Key != kNone && ((data.singleArea != oldSingleArea) || (data.showLogo != oldShowLogo) || (data.showSymbols != oldShowSymbols) || (oldShowInfo != data.showInfo))) {
    Setup();
  }

  return state;
}

VDRPLUGINCREATOR(cPluginSkinEnigma);    // don't touch this!
