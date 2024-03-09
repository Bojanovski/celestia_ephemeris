/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf customrotation.gperf  */
/* Computed positions: -k'5,8' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 8 "customrotation.gperf"
struct CustomRotationEntry { const char* name; CustomRotationModelType modelType; };
/* maximum key range = 62, duplicates = 0 */

class CustomRotationMap
{
private:
  static inline unsigned int hash (const char *str, size_t len);
public:
  static const struct CustomRotationEntry *getModelType (const char *str, size_t len);
};

inline unsigned int
CustomRotationMap::hash (const char *str, size_t len)
{
  static const unsigned char asso_values[] =
    {
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 35, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72,  5, 35, 10,
      35,  0, 72,  0, 25, 10, 45, 72, 10, 25,
      10,  0, 10, 72, 35,  0, 15,  5, 50, 72,
      72, 40, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
      72, 72, 72, 72, 72, 72
    };
  unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[static_cast<unsigned char>(str[7])];
      /*FALLTHROUGH*/
      case 7:
      case 6:
      case 5:
        hval += asso_values[static_cast<unsigned char>(str[4])];
        break;
    }
  return hval;
}

const struct CustomRotationEntry *
CustomRotationMap::getModelType (const char *str, size_t len)
{
  enum
    {
      TOTAL_KEYWORDS = 41,
      MIN_WORD_LENGTH = 6,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 10,
      MAX_HASH_VALUE = 71
    };

  static const struct CustomRotationEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 28 "customrotation.gperf"
      {"iau-europa",     CustomRotationModelType::IAUEuropa},
      {""}, {""},
#line 36 "customrotation.gperf"
      {"iau-enceladus",  CustomRotationModelType::IAUEnceladus},
#line 47 "customrotation.gperf"
      {"iau-ariel",      CustomRotationModelType::IAUAriel},
#line 16 "customrotation.gperf"
      {"iau-saturn",     CustomRotationModelType::IAUSaturn},
#line 27 "customrotation.gperf"
      {"iau-io",         CustomRotationModelType::IAUIo},
#line 31 "customrotation.gperf"
      {"iau-pan",        CustomRotationModelType::IAUPan},
      {""},
#line 32 "customrotation.gperf"
      {"iau-atlas",      CustomRotationModelType::IAUAtlas},
#line 45 "customrotation.gperf"
      {"iau-phoebe",     CustomRotationModelType::IAUPhoebe},
#line 44 "customrotation.gperf"
      {"iau-iapetus",    CustomRotationModelType::IAUIapetus},
#line 24 "customrotation.gperf"
      {"iau-adrastea",   CustomRotationModelType::IAUAdrastea},
      {""},
#line 13 "customrotation.gperf"
      {"iau-earth",      CustomRotationModelType::IAUEarth},
#line 17 "customrotation.gperf"
      {"iau-uranus",     CustomRotationModelType::IAUUranus},
#line 38 "customrotation.gperf"
      {"iau-telesto",    CustomRotationModelType::IAUTelesto},
#line 25 "customrotation.gperf"
      {"iau-amalthea",   CustomRotationModelType::IAUAmalthea},
      {""},
#line 43 "customrotation.gperf"
      {"iau-titan",      CustomRotationModelType::IAUTitan},
      {""},
#line 49 "customrotation.gperf"
      {"iau-titania",    CustomRotationModelType::IAUTitania},
#line 30 "customrotation.gperf"
      {"iau-callisto",   CustomRotationModelType::IAUCallisto},
#line 14 "customrotation.gperf"
      {"iau-mars",       CustomRotationModelType::IAUMars},
#line 19 "customrotation.gperf"
      {"iau-pluto",      CustomRotationModelType::IAUPluto},
#line 41 "customrotation.gperf"
      {"iau-helene",     CustomRotationModelType::IAUHelene},
#line 18 "customrotation.gperf"
      {"iau-neptune",    CustomRotationModelType::IAUNeptune},
      {""}, {""},
#line 35 "customrotation.gperf"
      {"iau-mimas",      CustomRotationModelType::IAUMimas},
      {""},
#line 46 "customrotation.gperf"
      {"iau-miranda",    CustomRotationModelType::IAUMiranda},
      {""},
#line 20 "customrotation.gperf"
      {"iau-moon",       CustomRotationModelType::IAUMoon},
#line 23 "customrotation.gperf"
      {"iau-metis",      CustomRotationModelType::IAUMetis},
#line 50 "customrotation.gperf"
      {"iau-oberon",     CustomRotationModelType::IAUOberon},
#line 11 "customrotation.gperf"
      {"iau-mercury",    CustomRotationModelType::IAUMercury},
      {""},
#line 42 "customrotation.gperf"
      {"iau-rhea",       CustomRotationModelType::IAURhea},
#line 33 "customrotation.gperf"
      {"iau-prometheus", CustomRotationModelType::IAUPrometheus},
#line 37 "customrotation.gperf"
      {"iau-tethys",     CustomRotationModelType::IAUTethys},
#line 48 "customrotation.gperf"
      {"iau-umbriel",    CustomRotationModelType::IAUUmbriel},
#line 29 "customrotation.gperf"
      {"iau-ganymede",   CustomRotationModelType::IAUGanymede},
      {""},
#line 40 "customrotation.gperf"
      {"iau-dione",      CustomRotationModelType::IAUDione},
#line 21 "customrotation.gperf"
      {"iau-phobos",     CustomRotationModelType::IAUPhobos},
#line 34 "customrotation.gperf"
      {"iau-pandora",    CustomRotationModelType::IAUPandora},
      {""}, {""},
#line 26 "customrotation.gperf"
      {"iau-thebe",      CustomRotationModelType::IAUThebe},
      {""},
#line 39 "customrotation.gperf"
      {"iau-calypso",    CustomRotationModelType::IAUCalypso},
      {""}, {""},
#line 12 "customrotation.gperf"
      {"iau-venus",      CustomRotationModelType::IAUVenus},
      {""},
#line 15 "customrotation.gperf"
      {"iau-jupiter",    CustomRotationModelType::IAUJupiter},
      {""}, {""}, {""},
#line 22 "customrotation.gperf"
      {"iau-deimos",     CustomRotationModelType::IAUDeimos},
#line 10 "customrotation.gperf"
      {"earth-p03lp",    CustomRotationModelType::EarthP03lp}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          const char *s = wordlist[key].name;

          if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
            return &wordlist[key];
        }
    }
  return 0;
}
