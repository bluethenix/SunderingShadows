#include <std.h>
#include "../common.h"

inherit RATPATHS;

void create(){
    ::create();
    set_exits(([
    "south":PATH+"rp_p005_n011",
"north":PATH+"rp_p005_n009",

                   ]));

}

