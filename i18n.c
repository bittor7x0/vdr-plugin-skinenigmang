/*
 * i18n.c: 'EnigmaNG' skin for the Video Disk Recorder
 *
 * See the README file for copyright information and how to reach the author.
 *
 */

#include "common.h"
#include "i18n.h"

const tI18nPhrase Phrases[] = {
  {"en_US",             // English
   "de_DE",             // Deutsch
   "sl_SI",             // Slovenski
   "it_IT",             // Italiano
   "nl_NL",             // Nederlands
   "pt_PT",             // Portugu�s
   "fr_FR",             // Fran�ais  Patrice Staudt 18.05.2007
   "no_NO",             // Norsk
   "fi_FI",             // suomi (Finnish)
   "pl_PL",             // Polski
   "es_ES",             // Espa�ol
   "el_GR",             // �������� (Greek)
   "sv_SE",             // Svenska
   "ro_RO",             // Rom�n�
   "hu_HU",             // Magyar
   "ca_AD",             // Catal�
   "ru_RU",             // ������� (Russian)
   "hr_HR",             // Hrvatski
   "et_EE",             // Eesti
   "da_DK",             // Dansk
   "cs_CZ",             // �esky (Czech)
   },
  {"EnigmaNG skin",             // English
   "EnigmaNG Oberfl�che",       // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "EnigmaNG skin",             // Nederlands
   "",                          // Portugu�s
   "Skin EnigmaNG",             // Fran�ais
   "",                          // Norsk
   "EnigmaNG-ulkoasu",          // suomi (Finnish)
   "Skin EnigmaNG",             // Polski
   "Piel EnigmaNG",             // Espa�ol
   "",                          // �������� (Greek)
   "EnigmaNG-temat",            // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "EnigmaNG ����",             // ������� (Russian)
   "",                          // Hrvatski
   "EnigmaNG kest",             // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"EnigmaNG",                  // English
   "EnigmaNG",                  // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "EnigmaNG",                  // Nederlands
   "",                          // Portugu�s
   "EnigmaNG",                  // Fran�ais
   "",                          // Norsk
   "EnigmaNG",                  // suomi (Finnish)
   "EnigmaNG",                  // Polski
   "EnigmaNG",                  // Espa�ol
   "",                          // �������� (Greek)
   "EnigmaNG",                  // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "EnigmaNG",                  // ������� (Russian)
   "",                          // Hrvatski
   "EnigmaNG",                  // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"min",                       // English
   "min",                       // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "min",                       // Nederlands
   "",                          // Portugu�s
   "min",                       // Fran�ais
   "",                          // Norsk
   "min",                       // suomi (Finnish)
   "min",                       // Polski
   "min",                       // Espa�ol
   "",                          // �������� (Greek)
   "min",                       // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���",                       // ������� (Russian)
   "",                          // Hrvatski
   "min",                       // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Stereo",                    // English
   "Stereo",                    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Stereo",                    // Nederlands
   "",                          // Portugu�s
   "St�r�o",                    // Fran�ais
   "",                          // Norsk
   "Stereo",                    // suomi (Finnish)
   "Stereo",                    // Polski
   "Estereo",                   // Espa�ol
   "",                          // �������� (Greek)
   "Stereo",                    // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "������",                    // ������� (Russian)
   "",                          // Hrvatski
   "Stereo",                    // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Left",                      // English
   "Links",                     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Links",                     // Nederlands
   "",                          // Portugu�s
   "Gauche",                    // Fran�ais
   "",                          // Norsk
   "Vasen",                     // suomi (Finnish)
   "W lewo",                    // Polski
   "Izquierda",                 // Espa�ol
   "",                          // �������� (Greek)
   "V�nster",                   // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "�����",                     // ������� (Russian)
   "",                          // Hrvatski
   "Vasak",                     // Eesti
   "",                          // Danske
   "",                          // �esky (Czech)
   },
  {"Right",                     // English
   "Rechts",                    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Rechts",                    // Nederlands
   "",                          // Portugu�s
   "Droite",                    // Fran�ais
   "",                          // Norsk
   "Oikea",                     // suomi (Finnish)
   "W prawo",                   // Polski
   "Derecha",                   // Espa�ol
   "",                          // �������� (Greek)
   "H�ger",                     // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "������",                    // ������� (Russian)
   "",                          // Hrvatski
   "Parem",                     // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Mute",                      // English
   "Stumm",                     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Geluid uit",                // Nederlands
   "",                          // Portugu�s
   "Muet",                      // Fran�ais
   "",                          // Norsk
   "Mykistetty",                // suomi (Finnish)
   "Wycisz",                    // Polski
   "Silenciar",                 // Espa�ol
   "",                          // �������� (Greek)
   "D�mpa",                     // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "����. ����",                // ������� (Russian)
   "",                          // Hrvatski
   "H��letu",                   // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Volume",                    // English
   "Lautst�rke",                // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Volume",                    // Nederlands
   "",                          // Portugu�s
   "Volume",                    // Fran�ais
   "",                          // Norsk
   "��nenvoimakkuus",           // suomi (Finnish)
   "G�o�no��",                  // Polski
   "Volumen",                   // Espa�ol
   "",                          // �������� (Greek)
   "Volym",                     // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���������",                 // ������� (Russian)
   "",                          // Hrvatski
   "Helitugevus",               // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Show channel logos",        // English
   "Kanal-Logos anzeigen",      // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Toon kanaallogo's",         // Nederlands
   "",                          // Portugu�s
   "Afficher logo des cha�nes", // Fran�ais
   "",                          // Norsk
   "N�yt� kanavalogot",         // suomi (Finnish)
   "Pokazuj logo kana�u",       // Polski
   "Mostrar los logos de los canales",  // Espa�ol
   "",                          // �������� (Greek)
   "Visa kanallogotyper",       // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���������� ���� �������",   // ������� (Russian)
   "",                          // Hrvatski
   "Kanalilogo n�itamine",      // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"  Identify channel by",       // English
   "  Kanal-Identifikation durch",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "  Kanaalidentificatie door",  // Nederlands
   "",                          // Portugu�s
   "  Identifier cha�ne par",     // Fran�ais
   "",                          // Norsk
   "  Tunnista kanava",           // suomi (Finnish)
   "  Rozpoznaj kana� po",        // Polski
   "  Identificar el canal por...",       // Espa�ol
   "",                          // �������� (Greek)
   "  Identifiera kanal med",     // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "  ���������� ����� ��",       // ������� (Russian)
   "",                          // Hrvatski
   "  Kanali tuvastamise meetod", // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"name",                      // English
   "Name",                      // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "naam",                      // Nederlands
   "",                          // Portugu�s
   "Nom",                       // Fran�ais
   "",                          // Norsk
   "nimest�",                   // suomi (Finnish)
   "nazwa",                     // Polski
   "Nombre",                    // Espa�ol
   "",                          // �������� (Greek)
   "namn",                      // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "��������",                  // ������� (Russian)
   "",                          // Hrvatski
   "nimi",                      // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"data",                      // English
   "ID",                        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "data",                      // Nederlands
   "",                          // Portugu�s
   "Donn�e",                    // Fran�ais
   "",                          // Norsk
   "tiedoista",                 // suomi (Finnish)
   "parametry",                 // Polski
   "Datos",                     // Espa�ol
   "",                          // �������� (Greek)
   "data",                      // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "������",                    // ������� (Russian)
   "",                          // Hrvatski
   "andmed",                    // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Channel logo cache size",   // English
   "Gr��e des Logo-Caches",     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Kanaallogo cache",          // Nederlands
   "",                          // Portugu�s
   "Taille du cache des logo",  // Fran�ais
   "",                          // Norsk
   "V�limuistin koko kanavalogoille",   // suomi (Finnish)
   "Rozmiar cache dla logo kana�u",     // Polski
   "Tama�o de la cache de los logos",   // Espa�ol
   "",                          // �������� (Greek)
   "Cachestorlek f�r logotyper",        // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "������ ���� ���o����� �������",  // ������� (Russian)
   "",                          // Hrvatski
   "Kanalilogo vahem�lu suurus",        // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Button$Flush cache",        // English
   "Cache leeren",              // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Cache legen",               // Nederlands
   "",                          // Portugu�s
   "Supprimer cache",           // Fran�ais
   "",                          // Norsk
   "Tyhjenn�",                  // suomi (Finnish)
   "Opr�nij cache",            // Polski
   "Limpiar la cache",          // Espa�ol
   "",                          // �������� (Greek)
   "T�m cachen",                // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "�������� ���",              // ������� (Russian)
   "",                          // Hrvatski
   "T�hjenda",                  // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Flushing channel logo cache...",    // English
   "Logo-Cache wird geleert...",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Kanaallogo cache legen...", // Nederlands
   "",                          // Portugu�s
   "Suppression du cache...",   // Fran�ais
   "",                          // Norsk
   "Tyhjennet��n v�limuistia...",       // suomi (Finnish)
   "Opr�niam cache logo kana�u...",    // Polski
   "Limpiando la cache...",     // Espa�ol
   "",                          // �������� (Greek)
   "T�mmer cachen...",          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "������ ���...",                          // ������� (Russian)
   "",                          // Hrvatski
   "Kanalilogo vahem�lu t�hjendamine...",       // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Languages",                 // English
   "Sprachen",                  // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Talen",                     // Nederlands
   "",                          // Portugu�s
   "Langues",                   // Fran�ais
   "",                          // Norsk
   "Kielet",                    // suomi (Finnish)
   "J�zyki",                    // Polski
   "Lenguajes",                 // Espa�ol
   "",                          // �������� (Greek)
   "Spr�k",                     // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "�����",                          // ������� (Russian)
   "",                          // Hrvatski
   "Keeled",                    // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Auxiliary information",     // English
   "Zusatzinformation",         // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Hulp informatie",           // Nederlands
   "",                          // Portugu�s
   "Information auxiliare",     // Fran�ais
   "",                          // Norsk
   "Lis�tiedot",                // suomi (Finnish)
   "Informacje pomocnicze",     // Polski
   "Informaci�n auxiliar",      // Espa�ol
   "",                          // �������� (Greek)
   "Extrainformation",          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "����. ����������",          // ������� (Russian)
   "",                          // Hrvatski
   "Lisainfo",                  // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Show auxiliary information",        // English
   "Zusatzinfo anzeigen",       // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Toon hulp informatie",      // Nederlands
   "",                          // Portugu�s
   "Afficher information auxiliaire",   // Fran�ais
   "",                          // Norsk
   "N�yt� lis�tiedot",          // suomi (Finnish)
   "Pokazuj informacje pomocnicze",     // Polski
   "Mostrar informaci�n auxiliar",      // Espa�ol
   "",                          // �������� (Greek)
   "Visa extrainformation",     // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���������� ����. ����������",      // ������� (Russian)
   "",                          // Hrvatski
   "Lisainfo n�itamine",        // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Show remaining/elapsed time",          // English
   "Zeige abgel./restl. Zeit",             // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Toon resterend/gedane tijd",  // Nederlands
   "",                          // Portugu�s
   "Afficher le temps �coul�/restant", // Fran�ais
   "",                          // Norsk
   "N�yt� tapahtuman aika",     // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���������� �����./������. �����",     // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"remaining",                 // English
   "restliche",                 // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "resterend",                   // Nederlands
   "",                          // Portugu�s
   "restant",                   // Fran�ais
   "",                          // Norsk
   "j�ljell� oleva",            // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���������",                 // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"elapsed",                   // English
   "abgelaufene",               // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "gedane",                // Nederlands
   "",                          // Portugu�s
   "�coul�",                    // Fran�ais
   "",                          // Norsk
   "kulunut",                   // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "��������",                  // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Show info area in main menu",            // English
   "Infobereich im Hauptmen�",               // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Info in hoofdmenu",         // Nederlands
   "",                          // Portugu�s
   "Surface d'infos dans le menu principale",  // Fran�ais
   "",                          // Norsk
   "N�yt� infoalue p��valikossa", // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���������� ���. ������� � ��. ����",   // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Show marker in lists",            // English
   "Symbol vor Listeneintr�gen",      // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Markering in lijsten tonen", // Nederlands
   "",                          // Portugu�s
   "Symbole dans les listes",   // Fran�ais
   "",                          // Norsk
   "N�yt� valintasymboli",      // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���������� ����� � �������",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Show progressbar",          // English
   "Fortschrittbalken anzeigen",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Progressiebalk tonen",      // Nederlands
   "",                          // Portugu�s
   "Afficher barre de progression",     // Fran�ais
   "",                          // Norsk
   "N�yt� aikajana",            // suomi (Finnish)
   "Pokazuj pasek post�pu",     // Polski
   "Mostrar barra de progreso", // Espa�ol
   "",                          // �������� (Greek)
   "Visa framsteg",             // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���������� ��������� �����������",   // ������� (Russian)
   "",                          // Hrvatski
   "Edenemisriba n�itamine",    // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Show symbols",              // English
   "Symbole anzeigen",          // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Symbolen tonen",            // Nederlands
   "",                          // Portugu�s
   "Afficher symbole",          // Fran�ais
   "",                          // Norsk
   "N�yt� symbolit",            // suomi (Finnish)
   "Pokazuj symbole",           // Polski
   "Mostrar s�mbolos",          // Espa�ol
   "",                          // �������� (Greek)
   "Visa symboler",             // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���������� �������",                          // ������� (Russian)
   "",                          // Hrvatski
   "S�mbolite n�itamine",       // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Show VPS",                  // English
   "VPS anzeigen",              // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "VPS tonen",                 // Nederlands
   "",                          // Portugu�s
   "Afficher le VPS",           // Fran�ais
   "",                          // Norsk
   "N�yt� VPS-tieto",           // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���������� VPS",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"WARNING",                   // English
   "WARNUNG",                   // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "WAARSCHUWING",              // Nederlands
   "",                          // Portugu�s
   "ATTENTION",                 // Fran�ais
   "",                          // Norsk
   "VAROITUS",                  // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "����ÿ��������",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Timer conflict",            // English
   "Timerkonflikt",             // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Timerconflict",             // Nederlands
   "",                          // Portugu�s
   "Conflit de programmation",  // Fran�ais
   "",                          // Norsk
   "P��llekk�inen ajastin",     // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "�������� �������",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Timer conflicts",           // English
   "Timerkonflikte",            // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Timerconflicten",                          // Nederlands
   "",                          // Portugu�s
   "Conflits de programmation", // Fran�ais
   "",                          // Norsk
   "P��llekk�isi� ajastimia",   // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "��������� ��������",        // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"TIMERS",                    // English
   "TIMER",                     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "TIMER",                     // Nederlands
   "",                          // Portugu�s
   "PROGRAMMATION",             // Fran�ais
   "",                          // Norsk
   "AJASTIMET",                 // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "°�����",                   // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"RERUNS OF THIS SHOW",       // English
   "WIEDERHOLUNGEN",            // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "HERHALINGEN",               // Nederlands
   "",                          // Portugu�s
   "REPETITION",                // Fran�ais
   "",                          // Norsk
   "TOISTUVAT TAPAHTUMAT",      // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���¾�����",                // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"*** Invalid Channel ***",   // English
   "*** Ung�ltiger Kanal ***",  // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "*** Ongeldig Kanaal ***",   // Nederlands
   "",                          // Portugu�s
   "*** Cha�nes non valable ***",  // Fran�ais
   "",                          // Norsk
   "*** Virheellinen kanava ***", // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "*** ������������ ����� ***",   // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Size",                      // English
   "Gr��e",                     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Grootte",                   // Nederlands
   "",                          // Portugu�s
   "Taille",                    // Fran�ais
   "",                          // Norsk
   "Koko",                      // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "������",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Mute",                      // English
   "Stumm",                     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Geluid uit",                // Nederlands
   "Muet",                      // Portugu�s
   "",                          // Fran�ais
   "",                          // Norsk
   "Mykistetty",                // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "����.����",                 // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Volume",                    // English
   "Lautst�rke",                // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Volume",                    // Nederlands
   "",                          // Portugu�s
   "Volume",                    // Fran�ais
   "",                          // Norsk
   "��nenvoimakkuus",           // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���������",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Show symbols in lists",     // English
   "Symbole in Listen",         // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Symbolen in lijsten",       // Nederlands
   "",                          // Portugu�s
   "Symboles dans les listes",   // Fran�ais
   "",                          // Norsk
   "N�yt� tapahtumien symbolit",// suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���������� ������� � �������",      // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Try 8bpp single area",      // English
   "Einen 8bpp Bereich versuchen", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "",                          // Fran�ais
   "",                          // Norsk
   "Suosi yht� 8bpp kuva-aluetta", // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Show flags",                // English
   "Fahnen anzeigen",           // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Vlaggen tonen",             // Nederlands
   "",                          // Portugu�s
   "Afficher drapeau",          // Fran�ais
   "",                          // Norsk
   "N�yt� liput",               // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "�������� �����",            // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Show symbols in menu",      // English
   "Symbole im Men�",           // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Symbolen in menu",          // Nederlands
   "",                          // Portugu�s
   "Symboles dans le menu",     // Fran�ais
   "",                          // Norsk
   "N�yt� valikkosymbolit",     // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "�������� ������� � ����",   // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"never",                     // English
   "nie",                       // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "nooit",                     // Nederlands
   "",                          // Portugu�s
   "jamais",                    // Fran�ais
   "",                          // Norsk
   "ei koskaan",                // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "�������",                   // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"always",                    // English
   "immer",                     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Altijd",                    // Nederlands
   "",                          // Portugu�s
   "toujours",                  // Fran�ais
   "",                          // Norsk
   "aina",                      // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "������",                    // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"percent",                   // English
   "Prozent",                   // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "procent",                   // Nederlands
   "",                          // Portugu�s
   "Pourcentage",               // Fran�ais
   "",                          // Norsk
   "prosentti",                 // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "�������",                   // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"if exists",                 // English
   "wenn vorhanden",            // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "wanneer aanwezig",          // Nederlands
   "",                          // Portugu�s
   "si existant",               // Fran�ais
   "",                          // Norsk
   "jos olemassa",              // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���� � �������",            // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Number of Reruns",          // English
   "Anzahl Wiederholungen",     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "aantal herhalingen",        // Nederlands
   "",                          // Portugu�s
   "Nombre de r�p�titions",     // Fran�ais
   "",                          // Norsk
   "Uusintojen lukum��r�",      // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���������� ����������",     // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Use Subtitle for reruns",   // English
   "Verw. Untertitel f�r Wdh.", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Gebr. ondertitlel voor herh.", // Nederlands
   "",                          // Portugu�s
   "Utilise sous-titre pour les r�p�titions", // Fran�ais
   "",                          // Norsk
   "K�yt� lyhytt� kuvausta uusinnoille", // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "�������. ������������ ��� ����������",   // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Show timer conflicts",      // English
   "Timerkonflikte anzeigen",   // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Timerconflict tonen",       // Nederlands
   "",                          // Portugu�s
   "Afficher les conflits de programmation", // Fran�ais
   "",                          // Norsk
   "N�yt� p��llekk�iset ajastimet", // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "�������� ��������� ��������",   // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Timer check",               // English
   "�berwachung",               // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Monitoren",                 // Nederlands
   "",                          // Portugu�s
   "Observation de la programmation", // Fran�ais
   "",                          // Norsk
   "Ajastimien valvonta",       // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "�������� ��������",         // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"EPGSearch",                 // English
   "EPGSearch",                 // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "EPGsearch",                 // Nederlands
   "",                          // Portugu�s
   "Recherche EPG",             // Fran�ais
   "",                          // Norsk
   "EPGSearch",                 // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Logos & Symbols",           // English
   "Logos & Symbole",           // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Logo's & Symbolen",         // Nederlands
   "",                          // Portugu�s
   "Logos et symboles",         // Fran�ais
   "",                          // Norsk
   "Logot ja symbolit",         // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "�������� & �������",        // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"use size.vdr only",         // English
   "nur size.vdr verwenden",    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "alleen size.vdr gebruiken", // Nederlands
   "",                          // Portugu�s
   "utiliser seulement size.vdr",  // Fran�ais Patrice Staudt 29.03.2007
   "",                          // Norsk
   "vain jos size.vdr",         // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "������������ ������ size.vdr",  // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Show recording's size",     // English
   "Aufnahmengr��e anzeigen",   // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Opnamegrootte tonen",       // Nederlands
   "",                          // Portugu�s
   "Afficher la taille des l'enregistrements",   // Fran�ais
   "",                          // Norsk
   "N�yt� tallenteen koko",     // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���������� ������� �������",    // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"pixel algo",                // English
   "Pixel-Algorithmus",         // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "pixelalgoritme",            // Nederlands
   "",                          // Portugu�s
   "Algorithme pixel",          // Fran�ais
   "",                          // Norsk
   "n�ytteistys",               // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "�������� �������",          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"ratio algo",                // English
   "Ratio-Algorithmus",         // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "algoritmeratio",            // Nederlands
   "",                          // Portugu�s
   "Algorithme ratio",          // Fran�ais
   "",                          // Norsk
   "skaalaus",                  // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "�������� �����������",      // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"zoom image",                // English
   "Zoomen",                    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "zoomen",                    // Nederlands
   "",                          // Portugu�s
   "Agrandit image",            // Fran�ais
   "",                          // Norsk
   "zoomaus",                   // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���������",                 // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Show event/recording images",     // English
   "Bilder in EPG/Aufnahmendetails",  // Deutsch
   "",                                // Slovenski
   "",                                // Italiano
   "EPG/opnamedetails tonen",         // Nederlands
   "",                                // Portugu�s
   "Images dans les EPG et d�tails d'enregistrements",     // Fran�ais
   "",                                // Norsk
   "N�yt� kuvat lis�tietovalikossa",  // suomi (Finnish)
   "",                                // Polski
   "",                                // Espa�ol
   "",                                // �������� (Greek)
   "",                                // Svenska
   "",                                // Rom�n�
   "",                                // Magyar
   "",                                // Catal�
   "����������� � EPG",               // ������� (Russian)
   "",                                // Hrvatski
   "",                                // Eesti
   "",                                // Dansk
   "",                                // �esky (Czech)
   },
  {"  Resize images",           // English
   "  Bildberechnung benutzt",  // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "  Aanpassen beeldgrootte",  // Nederlands
   "",                          // Portugu�s
   "  Redimension les images",  // Fran�ais
   "",                          // Norsk
   "  Muokkaa kuvien kokoa",    // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "  ���������� ���������",    // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"  Image width",             // English
   "  Bildbreite",              // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "  Beeldbreedte",            // Nederlands
   "",                          // Portugu�s
   "  Largeur d'image ",        // Fran�ais
   "",                          // Norsk
   "  Kuvien leveys",           // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "  ������ �����������",      // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"  Image height",            // English
   "  Bildh�he",                // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "  Beeldhoogte",             // Nederlands
   "",                          // Portugu�s
   "  Hauteur d'image",         // Fran�ais
   "",                          // Norsk
   "  Kuvien korkeus",          // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "  ������ �����������",      // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"  Image format",            // English
   "  Bildformat",              // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "  Beeldformaat",            // Nederlands
   "",                          // Portugu�s
   "  Format d'image",          // Fran�ais
   "",                          // Norsk
   "  Kuvaformaatti",           // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "  ������ �����������",      // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Full title width",          // English
   "Volle Titelbreite",         // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Volle titelbreedte",        // Nederlands
   "",                          // Portugu�s
   "Largeur total pour le titre", // Fran�ais
   "",                          // Norsk
   "Levit� otsikkopalkki",      // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "������ ������ ���������",   // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
#ifdef USE_PLUGIN_MAILBOX
  {"Show mail icon",            // English
   "Zeige Mail-Icon",           // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Mail-ikoon tonen",          // Nederlands
   "",                          // Portugu�s
   "Affiche l'icone courriel",  // Fran�ais
   "",                          // Norsk
   "N�yt� s�hk�postikuvake",    // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "�������� ������ �����. �����",   // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"only if new mail present",  // English
   "nur bei neuer Mail",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "alleen bij nieuwe mail",    // Nederlands
   "",                          // Portugu�s
   "juste lors d'un courriel",  // Fran�ais
   "",                          // Norsk
   "jos uutta postia",          // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "������ ��� ����� ���������",  // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
#endif
#ifndef DISABLE_ANIMATED_TEXT
  {"Animated Text",             // English
   "Bewegter Text",             // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Texte d�filant",            // Fran�ais
   "",                          // Norsk
   "Tekstien el�v�inti",        // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Enable",                    // English
   "Verwenden",                 // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Permettre",                 // Fran�ais
   "",                          // Norsk
   "K�yt� el�v�inti�",          // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"  Scoll behaviour",         // English
   "  Scroll-Verhalten",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "  Comportement de d�filement", // Fran�ais
   "",                          // Norsk
   "  Vieritystapa",            // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"to the left",               // English
   "nach links",                // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "vers la gauche",            // Fran�ais
   "",                          // Norsk
   "vasemmalle",                // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"left and right",            // English
   "links und rechts",          // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "gauche et droite",          // Fran�ais
   "",                          // Norsk
   "edestakaisin",              // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"  Scroll delay (ms)",       // English
   "  Scroll-Verz�gerung (ms)", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "  D�lai de d�filement (ms)",// Fran�ais
   "",                          // Norsk
   "  Vierityksen viive (ms)",  // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"  Scroll pause (ms)",       // English
   "  Scroll-Pause (ms)",       // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "  Pause de d�filement (ms)",// Fran�ais
   "",                          // Norsk
   "  Vierityksen tauko (ms)",  // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"  Blink pause (ms)",        // English
   "  Blink-Pause (ms)",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "  Pause de clignotement (ms)",// Fran�ais
   "",                          // Norsk
   "  Vilkutuksen tauko (ms)",  // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"  Scroll OSD title",        // English
   "  OSD Titel scrollen",      // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "  D�fillement dans le titre du OSD",  // Fran�ais
   "",                          // Norsk
   "  Vierit� valikon otsikkoa",// suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"  Scroll info area",        // English
   "  Infobereich scrollen",    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "  Barre de d�filement dans la surface info",   // Fran�ais
   "",                          // Norsk
   "  Vierit� infoaluetta",     // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"  Scroll active list items",  // English
   "  Aktive Listenzeile scrollen", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "  Barre de d�filement dans la liste active",  // Fran�ais
   "",                          // Norsk
   "  Vierit� aktiivista valintaa", // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"  Scroll other items",      // English
   "  Andere Bereiche scrollen", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "  Barre de d�filement dans d'autre partie",  // Fran�ais
   "",                          // Norsk
   "  Vierit� muita alueita",   // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
#endif
  {"  Show symbols in menu",    // English
   "  Symbole im Men�",         // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "  Afficher les symboles dans le menu",  // Fran�ais
   "",                          // Norsk
   "  N�yt� symbolit valikossa", // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"  Show symbols in replay",  // English
   "  Symbole bei der Wiedergabe", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "  Afficher les symboles dans lecture",  // Fran�ais
   "",                          // Norsk
   "  N�yt� symbolit toistettaessa", // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"  Show symbols in messages",  // English
   "  Symbole bei den Meldungen", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "  Afficher les symboles dans les messages", // Fran�ais
   "",                          // Norsk
   "  N�yt� symbolit viesteiss�", // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"  Show symbols in audio",   // English
   "  Symbole bei Audio",       // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "  Afficher les symboles dans audio",   // Fran�ais
   "",                          // Norsk
   "  N�yt� symbolit ��nivalikossa", // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Fonts",                     // English
   "Fonts",                     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Les polices",               // Fran�ais
   "",                          // Norsk
   "Kirjasimet",                // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"OSD title",                 // English
   "OSD Titel",                 // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "OSD Titre",                 // Fran�ais
   "",                          // Norsk
   "Valikon otsikko",           // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Date",                      // English
   "Datum",                     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Date",                      // Fran�ais
   "",                          // Norsk
   "",                          // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Messages",                  // English
   "Meldungen",                 // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Message",                   // Fran�ais
   "",                          // Norsk
   "Viestit",                   // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Help keys",                 // English
   "Farb-Tasten",               // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Touche couleur",            // Fran�ais
   "",                          // Norsk
   "V�rin�pp�imet",             // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Channelinfo: title",        // English
   "Kanalinfo: Titel",          // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Channel info: titre ",      // Fran�ais
   "",                          // Norsk
   "Kanavatieto: ohjelman nimi",// suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Channelinfo: subtitle",     // English
   "Kanalinfo: Untertitel",     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Channel info: sous-titre",  // Fran�ais
   "",                          // Norsk
   "Kanavatieto: ohjelman kuvaus", // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Channelinfo: language",     // English
   "Kanalinfo: Sprache",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Channel info: langue",      // Fran�ais
   "",                          // Norsk
   "Kanavatieto: kieli",        // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"List items",                // English
   "Listen",                    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Liste",                     // Fran�ais
   "",                          // Norsk
   "Listat",                    // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Info area: timers title",   // English
   "Infobereich: Timer Titel",  // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Barre d'information: Titre Progammation",   // Fran�ais
   "",                          // Norsk
   "Infoalue: ajastimen otsikko", // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Info area: timers text",    // English
   "Infobereich: Timer Text",   // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Barre d'information: Text programmation",   // Fran�ais
   "",                          // Norsk
   "Infoalue: ajastimen leip�teksti", // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Info area: warning title",  // English
   "Infobereich: Warnung Titel", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Barre d'information: avertissement titre",   // Fran�ais
   "",                          // Norsk
   "Infoalue: varoituksen otsikko",  // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Info area: warning text",   // English
   "Infobereich: Warnung Text", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Barre d'information: texte d'avertissement",      // Fran�ais
   "",                          // Norsk
   "Infoalue: varoituksen leip�teksti", // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Details: title",            // English
   "Details: Titel",            // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "D�tails: Titre",            // Fran�ais
   "",                          // Norsk
   "Lis�tiedot: ohjelman nimi", // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Details: subtitle",         // English
   "Details: Untertitel",       // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "D�tails: Sous-titre",       // Fran�ais
   "",                          // Norsk
   "Lis�tiedot: ohjelman kuvaus", // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Details: date",             // English
   "Details: Datumszeile",      // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "D�tails: date",             // Fran�ais
   "",                          // Norsk
   "Lis�tiedot: p�iv�m��r�",    // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Details: text",             // English
   "Details: Text",             // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "D�tails: Text",             // Fran�ais
   "",                          // Norsk
   "Lis�tiedot: leip�teksti",   // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Replay: times",             // English
   "Wiedergabe: Zeiten",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Rejouer : p�riodes",        // Fran�ais
   "",                          // Norsk
   "Toisto: kellonajat",        // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Default OSD Font",          // English
   "Std. OSD Font",             // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Police OSD standart",                          // Fran�ais
   "",                          // Norsk
   "oletuskirjasin",            // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Default Fixed Size Font",   // English
   "Std. Schrift mit fester Breite", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Police largeur fixe standart",  // Fran�ais
   "",                          // Norsk
   "kiinte�kokoinen oletuskirjasin", // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Default Small Font",        // English
   "Std. kleine Schrift",       // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Petite police standart",    // Fran�ais
   "",                          // Norsk
   "pieni oletuskirjasin",      // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Channel:",                  // English
   "Kanal:",                    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Cha�ne:",                   // Fran�ais
   "",                          // Norsk
   "Kanava:",                   // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Search pattern:",           // English
   "Suchmuster:",               // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Mod�le de recherche",       // Fran�ais
   "",                          // Norsk
   "Hakutapa:",                 // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"No timer check",            // English
   "Ohne �berwachung",          // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Sans surveillance",         // Fran�ais
   "",                          // Norsk
   "Ei valvontaa",              // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"General",                   // English
   "Allgemein",                 // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "G�n�ralit�",                // Fran�ais
   "",                          // Norsk
   "Yleiset",                   // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Name",                      // English
   "Name",                      // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Nom",                       // Fran�ais
   "",                          // Norsk
   "Nimi",                      // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Width",                     // English
   "Weite",                     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Largeur",                   // Fran�ais
   "",                          // Norsk
   "Leveys",                    // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Button$Set",                // English
   "�ndern",                    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Changer",                   // Fran�ais
   "",                          // Norsk
   "Aseta",                     // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"TrueType Font",             // English
   "TrueType Schrift",          // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Police TrueType",           // Fran�ais
   "",                          // Norsk
   "TrueType-kirjasin",         // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"No TTF support!",            // English
   "TTF nicht unterst�tzt!",    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Les polices TrueType ne sont pas support�es!", // Fran�ais
   "",                          // Norsk
   "Ei TTF-tukea!",                          // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Fixed Font",                // English
   "Schrift mit fester Breite", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "",                          // Fran�ais
   "",                          // Norsk
   "",                          // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
#ifdef USE_PLUGIN_AVARDS
  {"Dynamic OSD size",          // English
   "Dynamische OSD-Gr��e",      // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "",                          // Fran�ais
   "",                          // Norsk
   "",                          // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
#endif
  {NULL}
};
// vim:et:sw=2:ts=2:
