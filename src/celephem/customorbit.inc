/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf customorbit.gperf  */
/* Computed positions: -k'1,5,11,$' */

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

#line 8 "customorbit.gperf"
struct CustomOrbitEntry { const char* name; CustomOrbitType orbitType; };
/* maximum key range = 130, duplicates = 0 */

class CustomOrbitMap
{
private:
  static inline unsigned int hash (const char *str, size_t len);
public:
  static const struct CustomOrbitEntry *getOrbitType (const char *str, size_t len);
};

inline unsigned int
CustomOrbitMap::hash (const char *str, size_t len)
{
  static const unsigned char asso_values[] =
    {
      135, 135, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135,  65, 135, 135,   0, 135,
      135, 135, 135, 135, 135, 135,  40, 135, 135, 135,
      135, 135, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135, 135, 135,  15,   0,  30,
       80,  15, 135,  15,  15,  15,   5, 135,   0,  25,
        5,   0,  55, 135,  60,   0,  55,  10,   0, 135,
      135,  50, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135, 135, 135, 135, 135, 135,
      135, 135, 135, 135, 135, 135
    };
  unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[static_cast<unsigned char>(str[10])];
      /*FALLTHROUGH*/
      case 10:
      case 9:
      case 8:
      case 7:
      case 6:
      case 5:
        hval += asso_values[static_cast<unsigned char>(str[4])];
      /*FALLTHROUGH*/
      case 4:
      case 3:
      case 2:
      case 1:
        hval += asso_values[static_cast<unsigned char>(str[0])];
        break;
    }
  return hval + asso_values[static_cast<unsigned char>(str[len - 1])];
}

const struct CustomOrbitEntry *
CustomOrbitMap::getOrbitType (const char *str, size_t len)
{
  enum
    {
      TOTAL_KEYWORDS = 76,
      MIN_WORD_LENGTH = 2,
      MAX_WORD_LENGTH = 15,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 134
    };

  static const struct CustomOrbitEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""},
#line 11 "customorbit.gperf"
      {"venus",           CustomOrbitType::Venus},
      {""}, {""}, {""},
#line 36 "customorbit.gperf"
      {"venus-jpl",       CustomOrbitType::JplVenusSun},
      {""},
#line 86 "customorbit.gperf"
      {"oberon",          CustomOrbitType::Oberon},
      {""}, {""}, {""}, {""},
#line 61 "customorbit.gperf"
      {"jpl-sun-ssb",     CustomOrbitType::JplSunSsb},
#line 69 "customorbit.gperf"
      {"io",              CustomOrbitType::Io},
#line 46 "customorbit.gperf"
      {"jpl-venus-ssb",   CustomOrbitType::JplVenusSsb},
      {""},
#line 83 "customorbit.gperf"
      {"ariel",           CustomOrbitType::Ariel},
      {""}, {""},
#line 27 "customorbit.gperf"
      {"jpl-venus-sun",   CustomOrbitType::JplVenusSun},
#line 74 "customorbit.gperf"
      {"enceladus",       CustomOrbitType::Enceladus},
      {""},
#line 17 "customorbit.gperf"
      {"uranus",          CustomOrbitType::Uranus},
      {""},
#line 64 "customorbit.gperf"
      {"htc20-telesto",   CustomOrbitType::Telesto},
#line 14 "customorbit.gperf"
      {"mars",            CustomOrbitType::Mars},
#line 73 "customorbit.gperf"
      {"mimas",           CustomOrbitType::Mimas},
#line 56 "customorbit.gperf"
      {"jpl-emb-ssb",     CustomOrbitType::JplEmbSsb},
#line 84 "customorbit.gperf"
      {"umbriel",         CustomOrbitType::Umbriel},
#line 47 "customorbit.gperf"
      {"jpl-earth-ssb",   CustomOrbitType::JplEarthSsb},
#line 13 "customorbit.gperf"
      {"moon",            CustomOrbitType::Moon},
#line 41 "customorbit.gperf"
      {"uranus-sun",      CustomOrbitType::JplUranusSun},
#line 42 "customorbit.gperf"
      {"neptune-sun",     CustomOrbitType::JplNeptuneSun},
#line 18 "customorbit.gperf"
      {"neptune",         CustomOrbitType::Neptune},
#line 28 "customorbit.gperf"
      {"jpl-earth-sun",   CustomOrbitType::JplEarthSun},
      {""},
#line 52 "customorbit.gperf"
      {"jpl-neptune-ssb", CustomOrbitType::JplNeptuneSsb},
#line 55 "customorbit.gperf"
      {"jpl-emb-sun",     CustomOrbitType::JplEmbSun},
#line 48 "customorbit.gperf"
      {"jpl-mars-ssb",    CustomOrbitType::JplMarsSsb},
      {""},
#line 37 "customorbit.gperf"
      {"earth-sun",       CustomOrbitType::JplEarthSun},
#line 33 "customorbit.gperf"
      {"jpl-neptune-sun", CustomOrbitType::JplNeptuneSun},
#line 35 "customorbit.gperf"
      {"mercury-jpl",     CustomOrbitType::JplMercurySun},
#line 63 "customorbit.gperf"
      {"htc20-helene",    CustomOrbitType::Helene},
#line 59 "customorbit.gperf"
      {"jpl-earth-emb",   CustomOrbitType::JplEarthEmb},
      {""},
#line 12 "customorbit.gperf"
      {"earth",           CustomOrbitType::Earth},
#line 94 "customorbit.gperf"
      {"vsop87-mars",     CustomOrbitType::VSOP87Mars},
#line 82 "customorbit.gperf"
      {"miranda",         CustomOrbitType::Miranda},
#line 72 "customorbit.gperf"
      {"callisto",        CustomOrbitType::Callisto},
      {""},
#line 99 "customorbit.gperf"
      {"vsop87-sun",      CustomOrbitType::VSOP87Sun},
      {""},
#line 29 "customorbit.gperf"
      {"jpl-mars-sun",    CustomOrbitType::JplMarsSun},
#line 97 "customorbit.gperf"
      {"vsop87-uranus",   CustomOrbitType::VSOP87Uranus},
      {""},
#line 19 "customorbit.gperf"
      {"pluto",           CustomOrbitType::Pluto},
#line 67 "customorbit.gperf"
      {"phobos",          CustomOrbitType::Phobos},
#line 92 "customorbit.gperf"
      {"vsop87-venus",    CustomOrbitType::VSOP87Venus},
#line 71 "customorbit.gperf"
      {"ganymede",        CustomOrbitType::Ganymede},
      {""}, {""},
#line 87 "customorbit.gperf"
      {"triton",          CustomOrbitType::Triton},
#line 57 "customorbit.gperf"
      {"jpl-moon-emb",    CustomOrbitType::JplMoonEmb},
#line 96 "customorbit.gperf"
      {"vsop87-saturn",   CustomOrbitType::VSOP87Saturn},
#line 43 "customorbit.gperf"
      {"pluto-sun",       CustomOrbitType::JplPlutoSun},
#line 78 "customorbit.gperf"
      {"titan",           CustomOrbitType::Titan},
#line 16 "customorbit.gperf"
      {"saturn",          CustomOrbitType::Saturn},
      {""},
#line 53 "customorbit.gperf"
      {"jpl-pluto-ssb",   CustomOrbitType::JplPlutoSsb},
#line 58 "customorbit.gperf"
      {"jpl-moon-earth",  CustomOrbitType::JplMoonEarth},
#line 40 "customorbit.gperf"
      {"saturn-sun",      CustomOrbitType::JplSaturnSun},
#line 81 "customorbit.gperf"
      {"phoebe",          CustomOrbitType::Phoebe},
#line 80 "customorbit.gperf"
      {"iapetus",         CustomOrbitType::Iapetus},
#line 34 "customorbit.gperf"
      {"jpl-pluto-sun",   CustomOrbitType::JplPlutoSun},
#line 77 "customorbit.gperf"
      {"rhea",            CustomOrbitType::Rhea},
      {""},
#line 39 "customorbit.gperf"
      {"jupiter-sun",     CustomOrbitType::JplJupiterSun},
#line 85 "customorbit.gperf"
      {"titania",         CustomOrbitType::Titania},
#line 65 "customorbit.gperf"
      {"htc20-calypso",   CustomOrbitType::Calypso},
#line 50 "customorbit.gperf"
      {"jpl-saturn-ssb",  CustomOrbitType::JplSaturnSsb},
#line 49 "customorbit.gperf"
      {"jpl-jupiter-ssb", CustomOrbitType::JplJupiterSsb},
#line 68 "customorbit.gperf"
      {"deimos",          CustomOrbitType::Deimos},
      {""},
#line 79 "customorbit.gperf"
      {"hyperion",        CustomOrbitType::Hyperion},
#line 31 "customorbit.gperf"
      {"jpl-saturn-sun",  CustomOrbitType::JplSaturnSun},
#line 30 "customorbit.gperf"
      {"jpl-jupiter-sun", CustomOrbitType::JplJupiterSun},
#line 70 "customorbit.gperf"
      {"europa",          CustomOrbitType::Europa},
#line 10 "customorbit.gperf"
      {"mercury",         CustomOrbitType::Mercury},
      {""},
#line 51 "customorbit.gperf"
      {"jpl-uranus-ssb",  CustomOrbitType::JplUranusSsb},
#line 45 "customorbit.gperf"
      {"jpl-mercury-ssb", CustomOrbitType::JplMercurySsb},
      {""}, {""}, {""},
#line 32 "customorbit.gperf"
      {"jpl-uranus-sun",  CustomOrbitType::JplUranusSun},
#line 26 "customorbit.gperf"
      {"jpl-mercury-sun", CustomOrbitType::JplMercurySun},
      {""}, {""},
#line 38 "customorbit.gperf"
      {"mars-sun",        CustomOrbitType::JplMarsSun},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 75 "customorbit.gperf"
      {"tethys",          CustomOrbitType::Tethys},
      {""}, {""}, {""},
#line 76 "customorbit.gperf"
      {"dione",           CustomOrbitType::Dione},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 93 "customorbit.gperf"
      {"vsop87-earth",    CustomOrbitType::VSOP87Earth},
      {""},
#line 98 "customorbit.gperf"
      {"vsop87-neptune",  CustomOrbitType::VSOP87Neptune},
      {""}, {""},
#line 15 "customorbit.gperf"
      {"jupiter",         CustomOrbitType::Jupiter},
      {""},
#line 95 "customorbit.gperf"
      {"vsop87-jupiter",  CustomOrbitType::VSOP87Jupiter},
      {""}, {""}, {""}, {""},
#line 91 "customorbit.gperf"
      {"vsop87-mercury",  CustomOrbitType::VSOP87Mercury}
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
