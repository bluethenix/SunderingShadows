// Chernobog (3/6/21)
// Shadow Coliseum

#include <std.h>
#include "../defs.h"
inherit INH+"training";

void create(){
    ::create();
    set_long(::query_long()+"\n%^RESET%^");
    set_exits(([
        "northeast" : ROOMS"training2",
        ]));
}

void init(){
    ::init();
    add_action("retrieve_fun", "retrieve");
    add_action("return_fun", "return");
}

int retrieve_fun(string str){
    if (!str){
        return 0;
    }
    if (str == "dummy" || str == "testdummy" || str == "test dummy" || str == "practice dummy" || str == "rune"){
        if (present("testdummy")){
            tell_object(TP, "%^BOLD%^%^BLACK%^There is already a training dummy set up in place.%^RESET%^\n");
            return 1;
        }
        tell_object(TP, "%^BOLD%^%^BLACK%^You grab a training dummy and slot it into place.%^RESET%^\n");
        tell_room(TO, "" + TPQCN + " %^BOLD%^%^BLACK%^grabs a training dummy and slots it into place.%^RESET%^\n", TP);
        new(MON"dummy_weak")->move(TO);
        return 1;
    }
    return 0;
}

int return_fun(string str){
    if (!str){
        return 0;
    }
    if (str == "dummy" || str == "testdummy" || str == "test dummy" || str == "practice dummy"){
        object dummyobj;
        if (!present("test dummy")) {
            tell_object(TP, "There is no practice dummy to return!\n");
            return 1;
        }
        tell_object(TP, "%^BOLD%^%^BLACK%^You pick up the training dummy and return it to the pile.%^RESET%^\n");
        tell_room(TO, "" + TPQCN + " %^BOLD%^%^BLACK%^picks up the training dummy and returns it to the pile.%^RESET%^\n", TP);
        dummyobj = present("test dummy");
        if (objectp(dummyobj)){
            dummyobj->move("/d/shadowgate/void");
            dummyobj->remove();
        }
        return 1;
    }
    return 0;
}

