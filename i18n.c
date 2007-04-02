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
   "pt_PT",             // Português
   "fr_FR",             // Français
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
  {"Identify channel by",       // English
   "Kanal-Identifikation durch",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Identifier chaîne par",     // Français
   "",                          // Norsk
   "Tunnista kanava",           // suomi (Finnish)
   "Rozpoznaj kana³ po",        // Polski
   "Identificar el canal por...",       // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "Identifiera kanal med",     // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¾ßàÕÔÕÛïâì ÚĞİĞÛ ßŞ",       // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "Kanali tuvastamise meetod", // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"name",                      // English
   "Name",                      // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "ØÜï",                       // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "nimi",                      // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"data",                      // English
   "ID",                        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "ÔĞİİëÕ",                    // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "andmed",                    // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Channel logo cache size",   // English
   "Größe des Logo-Caches",     // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "¿ŞÚĞ×ëÒĞâì ŞáâĞÒ/ßàŞèÕÔ ÒàÕÜï",     // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"remaining",                 // English
   "restliche",                 // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
  {"One area (if possible)",    // English
   "Ein Bildbereich (wenn möglich)", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Une partie d'image (si possible)", // Français
   "",                          // Norsk
   "Pyri käyttämään yhtä kuva-aluetta",// suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "¾ÔİĞ ŞÑÛĞáâì(ÕáÛØ ÒŞ×ÜŞÖİŞ)", // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Bpp in single area",    // English
   "Tiefe des Bildbereichs", // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Profondeur d'une partie d'image", // Français
   "",                          // Norsk
   "Kuva-alueen värisyvyys",    // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "³ÛãÑØİĞ ŞÑÛĞáâØ Ø×ŞÑàĞÖÕİØï",   // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Show flags",                // English
   "Fahnen anzeigen",           // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
  {"not in menu",               // English
   "nicht im Menü",             // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "pas dans le menu",          // Français
   "",                          // Norsk
   "ei valikossa",              // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "İÕ Ò ÜÕİî",                 // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"only in menu",              // English
   "nur im Menü",               // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "que dans le menu",          // Français
   "",                          // Norsk
   "vain valikossa",            // suomi (Finnish)
   "",                          // Polski
   "",                          // Español
   "",                          // ÅëëçíéêÜ (Greek)
   "",                          // Svenska
   "",                          // Românã
   "",                          // Magyar
   "",                          // Català
   "âŞÛìÚŞ Ò ÜÕİî",             // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"percent",                   // English
   "Prozent",                   // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // Nederlands
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
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Show recording's size",     // English
   "Aufnahmengröße anzeigen",   // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"pixel algo",                // English
   "Pixel-Algorithmus",         // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"ratio algo",                // English
   "Ratio-Algorithmus",         // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"zoom image",                // English
   "Zoomen",                    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "",                          // ÀãááÚØÙ (Russian)
   "",                          // Hrvatski
   "",                          // Eesti
   "",                          // Dansk
   "",                          // Èesky (Czech)
   },
  {"Show event/recording images",     // English
   "Bilder in EPG/Aufnahmendetails",  // Deutsch
   "",                                // Slovenski
   "",                                // Italiano
   "",                                // Nederlands
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
   "",                                // ÀãááÚØÙ (Russian)
   "",                                // Hrvatski
   "",                                // Eesti
   "",                                // Dansk
   "",                                // Èesky (Czech)
   },
  {"Resize images",             // English
   "Bildberechnung benutzt",    // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Redimension les images",    // Français
   "",                          // Norsk
   "Muokkaa kuvien kokoa",      // suomi (Finnish)
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
  {"Image width",               // English
   "Bildbreite",                // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Largeur d'image ",          // Français
   "",                          // Norsk
   "Kuvien leveys",             // suomi (Finnish)
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
  {"Image height",              // English
   "Bildhöhe",                  // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Hauteur d'image",           // Français
   "",                          // Norsk
   "Kuvien korkeus",            // suomi (Finnish)
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
  {"Image format",              // English
   "Bildformat",                // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "Format d'image",            // Français
   "",                          // Norsk
   "Kuvaformaatti",             // suomi (Finnish)
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
  {"Full title width",          // English
   "Volle Titelbreite",         // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
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
   "",                          // ÀãááÚØÙ (Russian)
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
   "",                          // Nederlands
   "",                          // Português
   "Affiche l'icone Email",     // Français
   "",                          // Norsk
   "Näytä sähköpostikuvake",    // suomi (Finnish)
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
  {"only if new mail present",  // English
   "nur bei neuer Mail",        // Deutsch
   "",                          // Slovenski
   "",                          // Italiano
   "",                          // Nederlands
   "",                          // Português
   "juste lors d'un Email",     // Français
   "",                          // Norsk
   "jos uutta postia",          // suomi (Finnish)
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
