#include <std.h>
#include <daemons.h>
inherit FEAT;

void create() {
    ::create();
    feat_type("permanent");
    feat_category("AdvancedTraining");
    feat_name("abundant tactics");
    feat_prereq("Fighter L21, Advanced Training Feat");
    feat_desc("Practice makes perfect. Through a concerted effort in perfecting their skills in martial feats and maneuvers, the fighter will recieve a cooldown reduction on martial feats/maneuvers.");
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

