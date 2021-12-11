#include <std.h>
#include <daemons.h>
inherit FEAT;

void create() {
    ::create();
    feat_type("permanent");
    feat_category("AdvancedTraining");
    feat_name("fighter reflexes");
    feat_prereq("Fighter L21, Advanced Training Feat");
    feat_desc("Through rigorous focus on their reflexiveness and their ability to react to danger will allow a fighter with this skillset gain bonuses on their reflex save. The fighter will get Fighter level/10 bonus to their refkex save.");
    permanent(1);
    set_required_for(({}));
}

int prerequisites(object ob) 
{
   if(!objectp(ob)) { return 0; }

   if((int)ob->query_class_level("fighter") < 21) {
      dest_effect();
      return 0;
   }
   
   if(!FEATS_D->has_feat(ob,"AdvancedTraining")) {
       dest_effect();
       return 0;
}
}

void execute_feat() 
{
    ::execute_feat();
    dest_effect();
}

void permanent_effects(object ob) {
    ::permanent_effects(ob);
    dest_effect();
    return;
}

void reverse_permanent_effects(object ob) {
    ::reverse_permanent_effects(ob);
    dest_effect();
    return;
}

void dest_effect() {
    ::dest_effect();
    remove_feat(TO);
    return;
}

