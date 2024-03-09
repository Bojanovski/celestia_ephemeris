/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf location.gperf  */
/* Computed positions: -k'1-2' */

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

#line 8 "location.gperf"
struct FeatureNameEntry { const char* name; Location::FeatureType featureType; };
/* maximum key range = 224, duplicates = 0 */

class FeatureNamesMap
{
private:
  static inline unsigned int hash (const char *str, size_t len);
public:
  static const struct FeatureNameEntry *getFeatureType (const char *str, size_t len);
};

inline unsigned int
FeatureNamesMap::hash (const char *str, size_t len)
{
  static const unsigned char asso_values[] =
    {
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228,  20,  52, 105, 228,  10,
      115,  30,  12,  45,   5, 228,  12,   2,  75, 110,
       55, 115,  35,  42,   0,  95,  60, 100,  17, 100,
       27, 228,  45, 228, 228, 228, 228,  22,   0, 228,
      228, 228, 228, 228, 228,  35, 228, 228, 228, 228,
      228,   0, 228, 228,   0, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
      228, 228, 228, 228, 228, 228, 228, 228, 228, 228
    };
  return len + asso_values[static_cast<unsigned char>(str[1])] + asso_values[static_cast<unsigned char>(str[0]+4)];
}

const struct FeatureNameEntry *
FeatureNamesMap::getFeatureType (const char *str, size_t len)
{
  enum
    {
      TOTAL_KEYWORDS = 67,
      MIN_WORD_LENGTH = 2,
      MAX_WORD_LENGTH = 12,
      MIN_HASH_VALUE = 4,
      MAX_HASH_VALUE = 227
    };

  static const struct FeatureNameEntry wordlist[] =
    {
      {""}, {""}, {""}, {""},
#line 47 "location.gperf"
      {"PM",           Location::Planum},
      {""}, {""},
#line 28 "location.gperf"
      {"FT",           Location::Fretum},
      {""},
#line 25 "location.gperf"
      {"FM",           Location::Flumen},
      {""}, {""},
#line 45 "location.gperf"
      {"PE",           Location::Patera},
      {""},
#line 46 "location.gperf"
      {"PL",           Location::Planitia},
      {""}, {""},
#line 23 "location.gperf"
      {"FE",           Location::Flexus},
      {""},
#line 24 "location.gperf"
      {"FL",           Location::Fluctus},
      {""}, {""},
#line 44 "location.gperf"
      {"PA",           Location::Palus},
      {""},
#line 11 "location.gperf"
      {"AL",           Location::Albedo},
      {""}, {""},
#line 22 "location.gperf"
      {"FA",           Location::Facula},
      {""},
#line 62 "location.gperf"
      {"TE",           Location::Tessera},
      {""},
#line 63 "location.gperf"
      {"TH",           Location::Tholus},
#line 10 "location.gperf"
      {"AA",           Location::Crater},
      {""},
#line 17 "location.gperf"
      {"CM",           Location::Chasma},
      {""},
#line 72 "location.gperf"
      {"Crater",       Location::Crater},
#line 49 "location.gperf"
      {"PR",           Location::Promontorium},
      {""},
#line 61 "location.gperf"
      {"TA",           Location::Terra},
#line 74 "location.gperf"
      {"Cosmodrome",   Location::Cosmodrome},
      {""},
#line 27 "location.gperf"
      {"FR",           Location::Farrum},
      {""},
#line 16 "location.gperf"
      {"CH",           Location::Chaos},
      {""}, {""},
#line 12 "location.gperf"
      {"AR",           Location::Arcus},
      {""},
#line 65 "location.gperf"
      {"VA",           Location::Vallis},
      {""}, {""},
#line 14 "location.gperf"
      {"CA",           Location::Catena},
#line 70 "location.gperf"
      {"Observatory",  Location::Observatory},
#line 13 "location.gperf"
      {"AS",           Location::Astrum},
      {""}, {""},
#line 76 "location.gperf"
      {"Historical",   Location::Historical},
      {""},
#line 73 "location.gperf"
      {"Capital",      Location::Capital},
      {""}, {""},
#line 53 "location.gperf"
      {"RT",           Location::Reticulum},
      {""},
#line 68 "location.gperf"
      {"XX",           Location::Other},
      {""}, {""},
#line 19 "location.gperf"
      {"CR",           Location::Corona},
      {""},
#line 69 "location.gperf"
      {"City",         Location::City},
      {""},
#line 66 "location.gperf"
      {"VS",           Location::Vastitas},
#line 50 "location.gperf"
      {"RE",           Location::Regio},
      {""},
#line 67 "location.gperf"
      {"VI",           Location::Virga},
      {""}, {""},
#line 30 "location.gperf"
      {"LA",           Location::Labes},
      {""},
#line 29 "location.gperf"
      {"IN",           Location::Insula},
      {""}, {""},
#line 21 "location.gperf"
      {"ER",           Location::EruptiveCenter},
      {""},
#line 15 "location.gperf"
      {"CB",           Location::Cavus},
      {""}, {""},
#line 35 "location.gperf"
      {"LG",           Location::LargeRinged},
      {""},
#line 71 "location.gperf"
      {"Landing Site", Location::LandingSite},
      {""}, {""},
#line 51 "location.gperf"
      {"RG",           Location::Ring},
      {""}, {""}, {""}, {""},
#line 48 "location.gperf"
      {"PU",           Location::Plume},
      {""},
#line 75 "location.gperf"
      {"Ring",         Location::Ring},
      {""}, {""},
#line 36 "location.gperf"
      {"LI",           Location::Linea},
      {""}, {""}, {""}, {""},
#line 52 "location.gperf"
      {"RI",           Location::Rima},
      {""},
#line 31 "location.gperf"
      {"LB",           Location::Labyrinthus},
      {""}, {""},
#line 58 "location.gperf"
      {"SE",           Location::Serpens},
      {""}, {""}, {""}, {""},
#line 26 "location.gperf"
      {"FO",           Location::Fossa},
      {""}, {""}, {""}, {""},
#line 55 "location.gperf"
      {"SA",           Location::Saxum},
      {""},
#line 20 "location.gperf"
      {"DO",           Location::Dorsum},
      {""}, {""},
#line 40 "location.gperf"
      {"ME",           Location::Mare},
      {""}, {""}, {""}, {""},
#line 37 "location.gperf"
      {"LN",           Location::Lingula},
      {""}, {""}, {""}, {""},
#line 39 "location.gperf"
      {"MA",           Location::Macula},
      {""}, {""}, {""}, {""},
#line 18 "location.gperf"
      {"CO",           Location::Colles},
      {""}, {""}, {""}, {""},
#line 59 "location.gperf"
      {"SI",           Location::Sinus},
      {""},
#line 43 "location.gperf"
      {"OC",           Location::Oceanus},
      {""}, {""},
#line 32 "location.gperf"
      {"LU",           Location::Lacuna},
      {""}, {""}, {""}, {""},
#line 54 "location.gperf"
      {"RU",           Location::Rupes},
      {""}, {""}, {""}, {""},
#line 33 "location.gperf"
      {"LC",           Location::Lacus},
      {""}, {""}, {""}, {""},
#line 38 "location.gperf"
      {"LO",           Location::Lobus},
      {""}, {""}, {""}, {""},
#line 34 "location.gperf"
      {"LF",           Location::LandingSite},
      {""}, {""}, {""}, {""},
#line 64 "location.gperf"
      {"UN",           Location::Undae},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 41 "location.gperf"
      {"MN",           Location::Mensa},
      {""}, {""}, {""}, {""},
#line 60 "location.gperf"
      {"SU",           Location::Sulcus},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 57 "location.gperf"
      {"SC",           Location::Scopulus},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 56 "location.gperf"
      {"SF",           Location::Satellite},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 42 "location.gperf"
      {"MO",           Location::Mons}
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
