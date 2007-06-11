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
   "pt_PT",             // Português
   "fr_FR",             // Français  Patrice Staudt 18.05.2007
   "no_NO",             // Norsk
   "fi_FI",             // suomi (Finnish)
   "pl_PL",             // Polski
   "es_ES",             // Español
   "el_GR",             // ÅëëçíéêÜ (Greek)
   "sv_SE",             // Svenska
   "ro_RO",             // Românã
   "hu_HU",             // Magyar
   "ca_AD",             // Català
   "ru_RU",             // ÀãááÚØÙ (Russian)
   "hr_HR",             // Hrvatski
   "et_EE",             // Eesti
   "da_DK",             // Dansk
   "cs_CZ",             // Èesky (Czech)
   },
  {"EnigmaNG skin",             // English
   "EnigmaNG Oberfläche",       // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "EnigmaNG skin",             // Nederlands
   "",                          // Português
   "Skin EnigmaNG",             // Français
   "",                          // Norsk
   "EnigmaNG-ulkoasu",          // suomi (Finnish)
   "Skin EnigmaNG",             // Polski
   "Piel EnigmaNG",             // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "EnigmaNG-temat",            // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "EnigmaNG áÚØİ",             // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "EnigmaNG kest",             // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"EnigmaNG",                  // English
   "EnigmaNG",                  // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "EnigmaNG",                  // Nederlands
   "",                          // Português
   "EnigmaNG",                  // Français
   "",                          // Norsk
   "EnigmaNG",                  // suomi (Finnish)
   "EnigmaNG",                  // Polski
   "EnigmaNG",                  // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "EnigmaNG",                  // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "EnigmaNG",                  // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "EnigmaNG",                  // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"min",                       // English
   "min",                       // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "min",                       // Nederlands
   "",                          // Português
   "min",                       // Français
   "",                          // Norsk
   "min",                       // suomi (Finnish)
   "min",                       // Polski
   "min",                       // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "min",                       // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "ÜØİ",                       // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "min",                       // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Stereo",                    // English
   "Stereo",                    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Stereo",                    // Nederlands
   "",                          // Português
   "Stéréo",                    // Français
   "",                          // Norsk
   "Stereo",                    // suomi (Finnish)
   "Stereo",                    // Polski
   "Estereo",                   // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "Stereo",                    // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "ÁâÕàÕŞ",                    // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "Stereo",                    // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Left",                      // English
   "Links",                     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Links",                     // Nederlands
   "",                          // Português
   "Gauche",                    // Français
   "",                          // Norsk
   "Vasen",                     // suomi (Finnish)
   "W lewo",                    // Polski
   "Izquierda",                 // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "Vänster",                   // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "»ÕÒëÙ",                     // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "Vasak",                     // Eesti
   "",                          // Danske
   "",                          // Èesky (Czech)
   },
  {"Right",                     // English
   "Rechts",                    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Rechts",                    // Nederlands
   "",                          // Português
   "Droite",                    // Français
   "",                          // Norsk
   "Oikea",                     // suomi (Finnish)
   "W prawo",                   // Polski
   "Derecha",                   // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "Höger",                     // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¿àĞÒëÙ",                    // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "Parem",                     // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Mute",                      // English
   "Stumm",                     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Geluid uit",                // Nederlands
   "",                          // Português
   "Muet",                      // Français
   "",                          // Norsk
   "Mykistetty",                // suomi (Finnish)
   "Wycisz",                    // Polski
   "Silenciar",                 // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "Dämpa",                     // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "²ëÚÛ. ×ÒãÚ",                // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "Hääletu",                   // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Volume",                    // English
   "Lautstärke",                // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Volume",                    // Nederlands
   "",                          // Português
   "Volume",                    // Français
   "",                          // Norsk
   "Äänenvoimakkuus",           // suomi (Finnish)
   "G³o¶no¶æ",                  // Polski
   "Volumen",                   // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "Volym",                     // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "³àŞÜÚŞáâì",                 // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "Helitugevus",               // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Show channel logos",        // English
   "Kanal-Logos anzeigen",      // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Toon kanaallogo's",         // Nederlands
   "",                          // Português
   "Afficher logo des chaînes", // Français
   "",                          // Norsk
   "Näytä kanavalogot",         // suomi (Finnish)
   "Pokazuj logo kana³u",       // Polski
   "Mostrar los logos de los canales",  // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "Visa kanallogotyper",       // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¿ŞÚĞ×ëÒĞâì ÛŞÓŞ ÚĞİĞÛŞÒ",   // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "Kanalilogo näitamine",      // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"  Identify channel by",       // English
   "  Kanal-Identifikation durch",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "  Kanaalidentificatie door",  // Nederlands
   "",                          // Português
   "  Identifier chaîne par",     // Français
   "",                          // Norsk
   "  Tunnista kanava",           // suomi (Finnish)
   "  Rozpoznaj kana³ po",        // Polski
   "  Identificar el canal por...",       // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "  Identifiera kanal med",     // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "  ¾ßàÕÔÕÛïâì ÚĞİĞÛ ßŞ",       // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "  Kanali tuvastamise meetod", // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"name",                      // English
   "Name",                      // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "naam",                      // Nederlands
   "",                          // Português
   "Nom",                       // Français
   "",                          // Norsk
   "nimestä",                   // suomi (Finnish)
   "nazwa",                     // Polski
   "Nombre",                    // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "namn",                      // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "İĞ×ÒĞİØî",                  // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "nimi",                      // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"data",                      // English
   "ID",                        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "data",                      // Nederlands
   "",                          // Português
   "Donnée",                    // Français
   "",                          // Norsk
   "tiedoista",                 // suomi (Finnish)
   "parametry",                 // Polski
   "Datos",                     // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "data",                      // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "ÔĞİİëÜ",                    // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "andmed",                    // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Channel logo cache size",   // English
   "Größe des Logo-Caches",     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Kanaallogo cache",          // Nederlands
   "",                          // Português
   "Taille du cache des logo",  // Français
   "",                          // Norsk
   "Välimuistin koko kanavalogoille",   // suomi (Finnish)
   "Rozmiar cache dla logo kana³u",     // Polski
   "Tamaño de la cache de los logos",   // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "Cachestorlek för logotyper",        // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "ÀĞ×ÜÕà ÚÕèĞ ÛŞÓoâØßŞÒ ÚĞİĞÛŞÒ",  // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "Kanalilogo vahemälu suurus",        // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Button$Flush cache",        // English
   "Cache leeren",              // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Cache legen",               // Nederlands
   "",                          // Português
   "Supprimer cache",           // Français
   "",                          // Norsk
   "Tyhjennä",                  // suomi (Finnish)
   "Opró¿nij cache",            // Polski
   "Limpiar la cache",          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "Töm cachen",                // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¾çØáâØâì ÚÕè",              // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "Tühjenda",                  // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Flushing channel logo cache...",    // English
   "Logo-Cache wird geleert...",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Kanaallogo cache legen...", // Nederlands
   "",                          // Português
   "Suppression du cache...",   // Français
   "",                          // Norsk
   "Tyhjennetään välimuistia...",       // suomi (Finnish)
   "Opró¿niam cache logo kana³u...",    // Polski
   "Limpiando la cache...",     // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "Tömmer cachen...",          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¾çØéĞî ÚÕè...",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "Kanalilogo vahemälu tühjendamine...",       // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Languages",                 // English
   "Sprachen",                  // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Talen",                     // Nederlands
   "",                          // Português
   "Langues",                   // Français
   "",                          // Norsk
   "Kielet",                    // suomi (Finnish)
   "Jêzyki",                    // Polski
   "Lenguajes",                 // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "Språk",                     // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "Ï×ëÚØ",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "Keeled",                    // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Auxiliary information",     // English
   "Zusatzinformation",         // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Hulp informatie",           // Nederlands
   "",                          // Português
   "Information auxiliare",     // Français
   "",                          // Norsk
   "Lisätiedot",                // suomi (Finnish)
   "Informacje pomocnicze",     // Polski
   "Información auxiliar",      // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "Extrainformation",          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "ÀĞáè. ØİäŞàÜĞæØï",          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "Lisainfo",                  // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Show auxiliary information",        // English
   "Zusatzinfo anzeigen",       // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Toon hulp informatie",      // Nederlands
   "",                          // Português
   "Afficher information auxiliaire",   // Français
   "",                          // Norsk
   "Näytä lisätiedot",          // suomi (Finnish)
   "Pokazuj informacje pomocnicze",     // Polski
   "Mostrar información auxiliar",      // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "Visa extrainformation",     // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¿ŞÚĞ×ëÒĞâì àĞáè. ØİäŞàÜĞæØî",      // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "Lisainfo näitamine",        // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Show remaining/elapsed time",          // English
   "Zeige abgel./restl. Zeit",             // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Toon resterend/gedane tijd",  // Nederlands
   "",                          // Português
   "Afficher le temps écoulé/restant", // Français
   "",                          // Norsk
   "Näytä tapahtuman aika",     // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¿ŞÚĞ×ëÒĞâì ŞáâĞÒ./ßàŞèÕÔ. ÒàÕÜï",     // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"remaining",                 // English
   "restliche",                 // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "resterend",                   // Nederlands
   "",                          // Português
   "restant",                   // Français
   "",                          // Norsk
   "jäljellä oleva",            // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "ŞáâĞÛìİëÕ",                 // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"elapsed",                   // English
   "abgelaufene",               // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "gedane",                // Nederlands
   "",                          // Português
   "écoulé",                    // Français
   "",                          // Norsk
   "kulunut",                   // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "ØáâÕÚèØÕ",                  // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Show info area in main menu",            // English
   "Infobereich im Hauptmenü",               // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Info in hoofdmenu",         // Nederlands
   "",                          // Português
   "Surface d'infos dans le menu principale",  // Français
   "",                          // Norsk
   "Näytä infoalue päävalikossa", // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¿ŞÚĞ×ëÒĞâì Øİä. ŞÑÛĞáìâ Ò ÓÛ. ÜÕİî",   // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Show marker in lists",            // English
   "Symbol vor Listeneinträgen",      // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Markering in lijsten tonen", // Nederlands
   "",                          // Português
   "Symbole dans les listes",   // Français
   "",                          // Norsk
   "Näytä valintasymboli",      // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¿ŞÚĞ×ëÒĞâì ÜÕâÚã Ò áßØáÚĞå",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Show progressbar",          // English
   "Fortschrittbalken anzeigen",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Progressiebalk tonen",      // Nederlands
   "",                          // Português
   "Afficher barre de progression",     // Français
   "",                          // Norsk
   "Näytä aikajana",            // suomi (Finnish)
   "Pokazuj pasek postêpu",     // Polski
   "Mostrar barra de progreso", // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "Visa framsteg",             // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¿ŞÚĞ×ëÒĞâì ØİÔØÚĞâŞà ßàŞÔÒØÖÕİØï",   // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "Edenemisriba näitamine",    // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Show symbols",              // English
   "Symbole anzeigen",          // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Symbolen tonen",            // Nederlands
   "",                          // Português
   "Afficher symbole",          // Français
   "",                          // Norsk
   "Näytä symbolit",            // suomi (Finnish)
   "Pokazuj symbole",           // Polski
   "Mostrar símbolos",          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "Visa symboler",             // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¿ŞÚĞ×ëÒĞâì áØÜÒŞÛë",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "Sümbolite näitamine",       // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Show VPS",                  // English
   "VPS anzeigen",              // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "VPS tonen",                 // Nederlands
   "",                          // Português
   "Afficher le VPS",           // Français
   "",                          // Norsk
   "Näytä VPS-tieto",           // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¿ŞÚĞ×ëÒĞâì VPS",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"WARNING",                   // English
   "WARNUNG",                   // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "WAARSCHUWING",              // Nederlands
   "",                          // Português
   "ATTENTION",                 // Français
   "",                          // Norsk
   "VAROITUS",                  // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¿Àµ´Ã¿Àµ¶´µ½¸µ",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Timer conflict",            // English
   "Timerkonflikt",             // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Timerconflict",             // Nederlands
   "",                          // Português
   "Conflit de programmation",  // Français
   "",                          // Norsk
   "Päällekkäinen ajastin",     // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "ºŞİäÛØÚâ âĞÙÜÕàĞ",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Timer conflicts",           // English
   "Timerkonflikte",            // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Timerconflicten",                          // Nederlands
   "",                          // Português
   "Conflits de programmation", // Français
   "",                          // Norsk
   "Päällekkäisiä ajastimia",   // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "ºŞİäÛØÚâë âĞÙÜÕàŞÒ",        // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"TIMERS",                    // English
   "TIMER",                     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "TIMER",                     // Nederlands
   "",                          // Português
   "PROGRAMMATION",             // Français
   "",                          // Norsk
   "AJASTIMET",                 // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "Â°¹¼µÀË",                   // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"RERUNS OF THIS SHOW",       // English
   "WIEDERHOLUNGEN",            // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "HERHALINGEN",               // Nederlands
   "",                          // Português
   "REPETITION",                // Français
   "",                          // Norsk
   "TOISTUVAT TAPAHTUMAT",      // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¿¾²Â¾Àµ½¸Ï",                // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"*** Invalid Channel ***",   // English
   "*** Ungültiger Kanal ***",  // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "*** Ongeldig Kanaal ***",   // Nederlands
   "",                          // Português
   "*** Chaînes non valable ***",  // Français
   "",                          // Norsk
   "*** Virheellinen kanava ***", // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "*** ½ÕßàĞÒØÛìİëÙ ÚĞİĞÛ ***",   // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Size",                      // English
   "Größe",                     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Grootte",                   // Nederlands
   "",                          // Português
   "Taille",                    // Français
   "",                          // Norsk
   "Koko",                      // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "ÀĞ×ÜÕà",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Mute",                      // English
   "Stumm",                     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Geluid uit",                // Nederlands
   "Muet",                      // Português
   "",                          // Français
   "",                          // Norsk
   "Mykistetty",                // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "²ëÚÛ.×ÒãÚ",                 // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Volume",                    // English
   "Lautstärke",                // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Volume",                    // Nederlands
   "",                          // Português
   "Volume",                    // Français
   "",                          // Norsk
   "Äänenvoimakkuus",           // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "³àŞÜÚŞáâì",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Show symbols in lists",     // English
   "Symbole in Listen",         // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Symbolen in lijsten",       // Nederlands
   "",                          // Português
   "Symboles dans les listes",   // Français
   "",                          // Norsk
   "Näytä tapahtumien symbolit",// suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¿ŞÚĞ×ëÒĞâì áØÜÒŞÛë Ò áßØáÚĞå",      // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Try 8bpp single area",      // English
   "Einen 8bpp Bereich versuchen", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "",                          // Français
   "",                          // Norsk
   "Suosi yhtä 8bpp kuva-aluetta", // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Show flags",                // English
   "Fahnen anzeigen",           // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Vlaggen tonen",             // Nederlands
   "",                          // Português
   "Afficher drapeau",          // Français
   "",                          // Norsk
   "Näytä liput",               // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¿ŞÚĞ×Ğâì äÛĞÓØ",            // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Show symbols in menu",      // English
   "Symbole im Menü",           // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Symbolen in menu",          // Nederlands
   "",                          // Português
   "Symboles dans le menu",     // Français
   "",                          // Norsk
   "Näytä valikkosymbolit",     // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¿ŞÚĞ×Ğâì áØÜÒŞÛë Ò ÜÕİî",   // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"never",                     // English
   "nie",                       // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "nooit",                     // Nederlands
   "",                          // Português
   "jamais",                    // Français
   "",                          // Norsk
   "ei koskaan",                // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "İØÚŞÓÔĞ",                   // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"always",                    // English
   "immer",                     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Altijd",                    // Nederlands
   "",                          // Português
   "toujours",                  // Français
   "",                          // Norsk
   "aina",                      // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "ÒáÕÓÔĞ",                    // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"percent",                   // English
   "Prozent",                   // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "procent",                   // Nederlands
   "",                          // Português
   "Pourcentage",               // Français
   "",                          // Norsk
   "prosentti",                 // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "ßàŞæÕİâ",                   // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"if exists",                 // English
   "wenn vorhanden",            // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "wanneer aanwezig",          // Nederlands
   "",                          // Português
   "si existant",               // Français
   "",                          // Norsk
   "jos olemassa",              // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "ÕáÛØ Ò İĞÛØçØØ",            // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Number of Reruns",          // English
   "Anzahl Wiederholungen",     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "aantal herhalingen",        // Nederlands
   "",                          // Português
   "Nombre de répétitions",     // Français
   "",                          // Norsk
   "Uusintojen lukumäärä",      // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "ºŞÛØçÕáâÒŞ ßŞÒâŞàÕİØÙ",     // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Use Subtitle for reruns",   // English
   "Verw. Untertitel für Wdh.", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Gebr. ondertitlel voor herh.", // Nederlands
   "",                          // Português
   "Utilise sous-titre pour les répétitions", // Français
   "",                          // Norsk
   "Käytä lyhyttä kuvausta uusinnoille", // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¸áßŞÛì×. ßŞÔ×ĞÓŞÛŞÒÚØ ÔÛï ßŞÒâŞàÕİØï",   // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Show timer conflicts",      // English
   "Timerkonflikte anzeigen",   // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Timerconflict tonen",       // Nederlands
   "",                          // Português
   "Afficher les conflits de programmation", // Français
   "",                          // Norsk
   "Näytä päällekkäiset ajastimet", // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¿ŞÚĞ×Ğâì ÚŞİäÛØÚâë âĞÙÜÕàŞÒ",   // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Timer check",               // English
   "Überwachung",               // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Monitoren",                 // Nederlands
   "",                          // Português
   "Observation de la programmation", // Français
   "",                          // Norsk
   "Ajastimien valvonta",       // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¿àŞÒÕàÚĞ âĞÙÜÕàŞÒ",         // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"EPGSearch",                 // English
   "EPGSearch",                 // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "EPGsearch",                 // Nederlands
   "",                          // Português
   "Recherche EPG",             // Français
   "",                          // Norsk
   "EPGSearch",                 // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Logos & Symbols",           // English
   "Logos & Symbole",           // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Logo's & Symbolen",         // Nederlands
   "",                          // Português
   "Logos et symboles",         // Français
   "",                          // Norsk
   "Logot ja symbolit",         // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "»ŞÓŞâØßë & áØÜÒŞÛë",        // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"use size.vdr only",         // English
   "nur size.vdr verwenden",    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "alleen size.vdr gebruiken", // Nederlands
   "",                          // Português
   "utiliser seulement size.vdr",  // Français Patrice Staudt 29.03.2007
   "",                          // Norsk
   "vain jos size.vdr",         // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "ØáßŞÛì×ŞÒĞâì âŞÛìÚŞ size.vdr",  // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Show recording's size",     // English
   "Aufnahmengröße anzeigen",   // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Opnamegrootte tonen",       // Nederlands
   "",                          // Português
   "Afficher la taille des l'enregistrements",   // Français
   "",                          // Norsk
   "Näytä tallenteen koko",     // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¿ŞÚĞ×ëÒĞâì àĞ×ÜÕàë ×ĞßØáÕÙ",    // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"pixel algo",                // English
   "Pixel-Algorithmus",         // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "pixelalgoritme",            // Nederlands
   "",                          // Português
   "Algorithme pixel",          // Français
   "",                          // Norsk
   "näytteistys",               // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "ĞÛÓŞàØâÜ ßØÚáÕÛï",          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"ratio algo",                // English
   "Ratio-Algorithmus",         // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "algoritmeratio",            // Nederlands
   "",                          // Português
   "Algorithme ratio",          // Français
   "",                          // Norsk
   "skaalaus",                  // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "ĞÛÓŞàØâÜ áŞŞâİŞèÕİØï",      // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"zoom image",                // English
   "Zoomen",                    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "zoomen",                    // Nederlands
   "",                          // Português
   "Agrandit image",            // Français
   "",                          // Norsk
   "zoomaus",                   // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "ÃÒÕÛØçØâì",                 // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Show event/recording images",     // English
   "Bilder in EPG/Aufnahmendetails",  // Deutsch
   "",                                // Slovenski
   "",                                // Italiano
   "EPG/opnamedetails tonen",         // Nederlands
   "",                                // Português
   "Images dans les EPG et détails d'enregistrements",     // Français
   "",                                // Norsk
   "Näytä kuvat lisätietovalikossa",  // suomi (Finnish)
   "",                                // Polski
   "",                                // Español
   "",                                // ÅëëçíéêÜ (Greek)
   "",                                // Svenska
   "",                                // Românã
   "",                                // Magyar
   "",                                // Català
   "¸×ŞÑàĞÖÕİØï Ò EPG",               // ÀãááÚØÙ (Russian)
   "",                                // Hrvatski
   "",                                // Eesti
   "",                                // Dansk
   "",                                // Èesky (Czech)
   },
  {"  Resize images",           // English
   "  Bildberechnung benutzt",  // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "  Aanpassen beeldgrootte",  // Nederlands
   "",                          // Português
   "  Redimension les images",  // Français
   "",                          // Norsk
   "  Muokkaa kuvien kokoa",    // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "  ¿ÕàÕàÕèĞâì ØáßŞÛì×ãï",    // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"  Image width",             // English
   "  Bildbreite",              // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "  Beeldbreedte",            // Nederlands
   "",                          // Português
   "  Largeur d'image ",        // Français
   "",                          // Norsk
   "  Kuvien leveys",           // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "  ÈØàØİĞ Ø×ŞÑàĞÖÕİØï",      // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"  Image height",            // English
   "  Bildhöhe",                // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "  Beeldhoogte",             // Nederlands
   "",                          // Português
   "  Hauteur d'image",         // Français
   "",                          // Norsk
   "  Kuvien korkeus",          // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "  ²ëáŞâĞ Ø×ŞÑàĞÖÕİØï",      // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"  Image format",            // English
   "  Bildformat",              // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "  Beeldformaat",            // Nederlands
   "",                          // Português
   "  Format d'image",          // Français
   "",                          // Norsk
   "  Kuvaformaatti",           // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "  ÄŞàÜĞâ Ø×ŞÑàĞÖÕİØï",      // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Full title width",          // English
   "Volle Titelbreite",         // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Volle titelbreedte",        // Nederlands
   "",                          // Português
   "Largeur total pour le titre", // Français
   "",                          // Norsk
   "Levitä otsikkopalkki",      // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¿ŞÛİĞï èØàØİĞ ×ĞÓŞÛŞÒÚĞ",   // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
#ifdef USE_PLUGIN_MAILBOX
  {"Show mail icon",            // English
   "Zeige Mail-Icon",           // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "Mail-ikoon tonen",          // Nederlands
   "",                          // Português
   "Affiche l'icone courriel",  // Français
   "",                          // Norsk
   "Näytä sähköpostikuvake",    // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¿ŞÚĞ×Ğâì ×İĞçŞÚ íÛÕÚâ. ßŞçâë",   // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"only if new mail present",  // English
   "nur bei neuer Mail",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "alleen bij nieuwe mail",    // Nederlands
   "",                          // Português
   "juste lors d'un courriel",  // Français
   "",                          // Norsk
   "jos uutta postia",          // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "âŞÛìÚŞ ßàØ İŞÒŞÜ áŞŞÑéÕİØØ",  // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
#endif
#ifndef DISABLE_ANIMATED_TEXT
  {"Animated Text",             // English
   "Bewegter Text",             // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Texte défilant",            // Français
   "",                          // Norsk
   "Tekstien elävöinti",        // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Enable",                    // English
   "Verwenden",                 // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Permettre",                 // Français
   "",                          // Norsk
   "Käytä elävöintiä",          // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"  Scoll behaviour",         // English
   "  Scroll-Verhalten",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "  Comportement de défilement", // Français
   "",                          // Norsk
   "  Vieritystapa",            // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"to the left",               // English
   "nach links",                // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "vers la gauche",            // Français
   "",                          // Norsk
   "vasemmalle",                // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"left and right",            // English
   "links und rechts",          // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "gauche et droite",          // Français
   "",                          // Norsk
   "edestakaisin",              // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"  Scroll delay (ms)",       // English
   "  Scroll-Verzögerung (ms)", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "  Délai de défilement (ms)",// Français
   "",                          // Norsk
   "  Vierityksen viive (ms)",  // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"  Scroll pause (ms)",       // English
   "  Scroll-Pause (ms)",       // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "  Pause de défilement (ms)",// Français
   "",                          // Norsk
   "  Vierityksen tauko (ms)",  // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"  Blink pause (ms)",        // English
   "  Blink-Pause (ms)",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "  Pause de clignotement (ms)",// Français
   "",                          // Norsk
   "  Vilkutuksen tauko (ms)",  // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"  Scroll OSD title",        // English
   "  OSD Titel scrollen",      // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "  Défillement dans le titre du OSD",  // Français
   "",                          // Norsk
   "  Vieritä valikon otsikkoa",// suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"  Scroll info area",        // English
   "  Infobereich scrollen",    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "  Barre de défilement dans la surface info",   // Français
   "",                          // Norsk
   "  Vieritä infoaluetta",     // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"  Scroll active list items",  // English
   "  Aktive Listenzeile scrollen", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "  Barre de défilement dans la liste active",  // Français
   "",                          // Norsk
   "  Vieritä aktiivista valintaa", // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"  Scroll other items",      // English
   "  Andere Bereiche scrollen", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "  Barre de défilement dans d'autre partie",  // Français
   "",                          // Norsk
   "  Vieritä muita alueita",   // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
#endif
  {"  Show symbols in menu",    // English
   "  Symbole im Menü",         // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "  Afficher les symboles dans le menu",  // Français
   "",                          // Norsk
   "  Näytä symbolit valikossa", // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"  Show symbols in replay",  // English
   "  Symbole bei der Wiedergabe", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "  Afficher les symboles dans lecture",  // Français
   "",                          // Norsk
   "  Näytä symbolit toistettaessa", // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"  Show symbols in messages",  // English
   "  Symbole bei den Meldungen", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "  Afficher les symboles dans les messages", // Français
   "",                          // Norsk
   "  Näytä symbolit viesteissä", // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"  Show symbols in audio",   // English
   "  Symbole bei Audio",       // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "  Afficher les symboles dans audio",   // Français
   "",                          // Norsk
   "  Näytä symbolit äänivalikossa", // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Fonts",                     // English
   "Fonts",                     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Les polices",               // Français
   "",                          // Norsk
   "Kirjasimet",                // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"OSD title",                 // English
   "OSD Titel",                 // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "OSD Titre",                 // Français
   "",                          // Norsk
   "Valikon otsikko",           // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Date",                      // English
   "Datum",                     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Date",                      // Français
   "",                          // Norsk
   "",                          // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Messages",                  // English
   "Meldungen",                 // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Message",                   // Français
   "",                          // Norsk
   "Viestit",                   // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Help keys",                 // English
   "Farb-Tasten",               // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Touche couleur",            // Français
   "",                          // Norsk
   "Värinäppäimet",             // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Channelinfo: title",        // English
   "Kanalinfo: Titel",          // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Channel info: titre ",      // Français
   "",                          // Norsk
   "Kanavatieto: ohjelman nimi",// suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Channelinfo: subtitle",     // English
   "Kanalinfo: Untertitel",     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Channel info: sous-titre",  // Français
   "",                          // Norsk
   "Kanavatieto: ohjelman kuvaus", // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Channelinfo: language",     // English
   "Kanalinfo: Sprache",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Channel info: langue",      // Français
   "",                          // Norsk
   "Kanavatieto: kieli",        // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"List items",                // English
   "Listen",                    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Liste",                     // Français
   "",                          // Norsk
   "Listat",                    // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Info area: timers title",   // English
   "Infobereich: Timer Titel",  // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Barre d'information: Titre Progammation",   // Français
   "",                          // Norsk
   "Infoalue: ajastimen otsikko", // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Info area: timers text",    // English
   "Infobereich: Timer Text",   // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Barre d'information: Text programmation",   // Français
   "",                          // Norsk
   "Infoalue: ajastimen leipäteksti", // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Info area: warning title",  // English
   "Infobereich: Warnung Titel", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Barre d'information: avertissement titre",   // Français
   "",                          // Norsk
   "Infoalue: varoituksen otsikko",  // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Info area: warning text",   // English
   "Infobereich: Warnung Text", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Barre d'information: texte d'avertissement",      // Français
   "",                          // Norsk
   "Infoalue: varoituksen leipäteksti", // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Details: title",            // English
   "Details: Titel",            // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Détails: Titre",            // Français
   "",                          // Norsk
   "Lisätiedot: ohjelman nimi", // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Details: subtitle",         // English
   "Details: Untertitel",       // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Détails: Sous-titre",       // Français
   "",                          // Norsk
   "Lisätiedot: ohjelman kuvaus", // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Details: date",             // English
   "Details: Datumszeile",      // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Détails: date",             // Français
   "",                          // Norsk
   "Lisätiedot: päivämäärä",    // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Details: text",             // English
   "Details: Text",             // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Détails: Text",             // Français
   "",                          // Norsk
   "Lisätiedot: leipäteksti",   // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Replay: times",             // English
   "Wiedergabe: Zeiten",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Rejouer : périodes",        // Français
   "",                          // Norsk
   "Toisto: kellonajat",        // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Default OSD Font",          // English
   "Std. OSD Font",             // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Police OSD standart",                          // Français
   "",                          // Norsk
   "oletuskirjasin",            // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Default Fixed Size Font",   // English
   "Std. Schrift mit fester Breite", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Police largeur fixe standart",  // Français
   "",                          // Norsk
   "kiinteäkokoinen oletuskirjasin", // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Default Small Font",        // English
   "Std. kleine Schrift",       // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Petite police standart",    // Français
   "",                          // Norsk
   "pieni oletuskirjasin",      // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Channel:",                  // English
   "Kanal:",                    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Chaîne:",                   // Français
   "",                          // Norsk
   "Kanava:",                   // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Search pattern:",           // English
   "Suchmuster:",               // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Modèle de recherche",       // Français
   "",                          // Norsk
   "Hakutapa:",                 // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"No timer check",            // English
   "Ohne Überwachung",          // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Sans surveillance",         // Français
   "",                          // Norsk
   "Ei valvontaa",              // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"General",                   // English
   "Allgemein",                 // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Généralité",                // Français
   "",                          // Norsk
   "Yleiset",                   // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Name",                      // English
   "Name",                      // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Nom",                       // Français
   "",                          // Norsk
   "Nimi",                      // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Width",                     // English
   "Weite",                     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Largeur",                   // Français
   "",                          // Norsk
   "Leveys",                    // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Button$Set",                // English
   "Ändern",                    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Changer",                   // Français
   "",                          // Norsk
   "Aseta",                     // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"TrueType Font",             // English
   "TrueType Schrift",          // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Police TrueType",           // Français
   "",                          // Norsk
   "TrueType-kirjasin",         // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"No TTF support!",            // English
   "TTF nicht unterstützt!",    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Les polices TrueType ne sont pas supportées!", // Français
   "",                          // Norsk
   "Ei TTF-tukea!",                          // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Fixed Font",                // English
   "Schrift mit fester Breite", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "",                          // Français
   "",                          // Norsk
   "",                          // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
#ifdef USE_PLUGIN_AVARDS
  {"Dynamic OSD size",          // English
   "Dynamische OSD-Größe",      // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "",                          // Français
   "",                          // Norsk
   "",                          // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
#endif
  {NULL}
};
// vim:et:sw=2:ts=2:
