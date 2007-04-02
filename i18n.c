/*
 * i18n.c: The 'EnigmaNG' VDR skin
 *
 * See the README file for copyright information and how to reach the author.
 *
 */

#include "i18n.h"

const tI18nPhrase Phrases[] = {
  {"en_US",             // English
   "de_DE",             // Deutsch
   "sl_SI",             // Slovenski
   "it_IT",             // Italiano
   "nl_NL",             // Nederlands
   "pt_PT",             // Portugu�s
   "fr_FR",             // Fran�ais
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
  {"Identify channel by",       // English
   "Kanal-Identifikation durch",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Identifier cha�ne par",     // Fran�ais
   "",                          // Norsk
   "Tunnista kanava",           // suomi (Finnish)
   "Rozpoznaj kana� po",        // Polski
   "Identificar el canal por...",       // Espa�ol
   "",                          // �������� (Greek)
   "Identifiera kanal med",     // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���������� ����� ��",       // ������� (Russian)
   "",                          // Hrvatski
   "Kanali tuvastamise meetod", // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"name",                      // English
   "Name",                      // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "���",                       // ������� (Russian)
   "",                          // Hrvatski
   "nimi",                      // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"data",                      // English
   "ID",                        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "���������� �����/������ �����",     // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"remaining",                 // English
   "restliche",                 // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
  {"One area (if possible)",    // English
   "Ein Bildbereich (wenn m�glich)", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Une partie d'image (si possible)", // Fran�ais
   "",                          // Norsk
   "Pyri k�ytt�m��n yht� kuva-aluetta",// suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "���� �������(���� ��������)", // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Bpp in single area",    // English
   "Tiefe des Bildbereichs", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Profondeur d'une partie d'image", // Fran�ais
   "",                          // Norsk
   "Kuva-alueen v�risyvyys",    // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "������� ������� �����������",   // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Show flags",                // English
   "Fahnen anzeigen",           // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
  {"not in menu",               // English
   "nicht im Men�",             // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "pas dans le menu",          // Fran�ais
   "",                          // Norsk
   "ei valikossa",              // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "�� � ����",                 // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"only in menu",              // English
   "nur im Men�",               // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "que dans le menu",          // Fran�ais
   "",                          // Norsk
   "vain valikossa",            // suomi (Finnish)
   "",                          // Polski
   "",                          // Espa�ol
   "",                          // �������� (Greek)
   "",                          // Svenska
   "",                          // Rom�n�
   "",                          // Magyar
   "",                          // Catal�
   "������ � ����",             // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"percent",                   // English
   "Prozent",                   // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Show recording's size",     // English
   "Aufnahmengr��e anzeigen",   // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"pixel algo",                // English
   "Pixel-Algorithmus",         // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"ratio algo",                // English
   "Ratio-Algorithmus",         // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"zoom image",                // English
   "Zoomen",                    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "",                          // ������� (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // �esky (Czech)
   },
  {"Show event/recording images",     // English
   "Bilder in EPG/Aufnahmendetails",  // Deutsch
   "",                                // Slovenski
   "",                                // Italiano
   "",                                // Nederlands
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
   "",                                // ������� (Russian)
   "",                                // Hrvatski
   "",                                // Eesti
   "",                                // Dansk
   "",                                // �esky (Czech)
   },
  {"Resize images",             // English
   "Bildberechnung benutzt",    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Redimension les images",    // Fran�ais
   "",                          // Norsk
   "Muokkaa kuvien kokoa",      // suomi (Finnish)
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
  {"Image width",               // English
   "Bildbreite",                // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Largeur d'image ",          // Fran�ais
   "",                          // Norsk
   "Kuvien leveys",             // suomi (Finnish)
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
  {"Image height",              // English
   "Bildh�he",                  // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Hauteur d'image",           // Fran�ais
   "",                          // Norsk
   "Kuvien korkeus",            // suomi (Finnish)
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
  {"Image format",              // English
   "Bildformat",                // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "Format d'image",            // Fran�ais
   "",                          // Norsk
   "Kuvaformaatti",             // suomi (Finnish)
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
  {"Full title width",          // English
   "Volle Titelbreite",         // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "",                          // ������� (Russian)
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
   "",                          // Nederlands
   "",                          // Portugu�s
   "Affiche l'icone Email",     // Fran�ais
   "",                          // Norsk
   "N�yt� s�hk�postikuvake",    // suomi (Finnish)
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
  {"only if new mail present",  // English
   "nur bei neuer Mail",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Portugu�s
   "juste lors d'un Email",     // Fran�ais
   "",                          // Norsk
   "jos uutta postia",          // suomi (Finnish)
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
