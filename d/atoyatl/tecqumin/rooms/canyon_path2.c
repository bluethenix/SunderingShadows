#include <std.h>
#include <move.h>
#include "../tecqumin.h"

inherit CANYON_PATH;

void create() {
  ::create();
  side = "east";
  set_exits((["north"   : JUNG_ROOM + "canyon_path3",
              "south"   : JUNG_ROOM + "canyon_path1"
    ]));
}
