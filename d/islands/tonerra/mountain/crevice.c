#include <std.h>

#include "/d/islands/tonerra/areadefs.h"
inherit ROOM;

void create(){
   ::create();

  set_no_clean(1);
   set_name("crevise");
   set_short("A crevise in the wall");
   set_long("%^C202%^This is a crevise in the wall here, the ground here is stable and offers protection from the depths "
			"below. The %^C100%^walls %^C202%^are rough and covered with a sparse %^C149%^vegetation%^C202%^, clinging for"
			"life in a mostly inhospitable location.\n");
   set_smell("default","Fumes from the still raging fires outside singe your nose.");
   set_exits((["out":MOUNTAIN+"dhome"]));
}

int GoThroughDoor(){
	if(TP->query_size() > 1 && TP->query_size() < 3){
	write("That is much to steep for you.");
return 0;}}
