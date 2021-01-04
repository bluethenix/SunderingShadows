 #include <std.h>

// Must correspond to deities.h

// Occult gods are in this file for multiclassing only. People that MC
// with cleric will have to deal with domain disbalance on their own
// unless someone looks at it.
#define SPELL_DOMAINS (([\
 "callamir" : ({ "charm", "air", "trickery", "travel", "good", "chaos"}), \
 "cevahir" : ({ "mentalism", "renewal", "strength", "war", "air", }) ,  \
 "dream" : ({ "madness", "void", "stars", "chaos", }),        \
 "jarmila" : ({ "renewal", "sun", "fire", "martyr", "good", }) , \
 "khyron" : ({ "fire", "storms", "destruction", "suffering", "chaos", }) , \
 "kismet" : ({ "creation", "knowledge", "magic", "stars",}) , \
 "kreysneothosies" : ({ "protection", "vigilance", "strength", "war", "law", "good", }) , \
 "lord shadow" : ({ "cold", "tyranny", "suffering", "darkness", "evil", "law", }) , \
 "lysara" : ({ "travel", "fate", "repose", "moon", "water"}) , \
 "nilith" : ({ "earth", "plague", "destruction", "undeath", "chaos", "evil", }), \
 "nimnavanon" : ({ "storms", "plant", "animal", "earth", "plague", }) , \
 "seija" : ({ "elements", "sun", "moon", "water", "law", }) , \
 "the faceless one" : ({ "illusion", "cavern", "darkness", "madness", "evil", }) , \
]))
