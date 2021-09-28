#ifndef __DAEMONS_H
#define __DAEMONS_H

#include <dirs.h>

#define ADVANCE_D            (DIR_SECURE_DAEMONS+"/advance_d")
#define ALCHEMIST_D          (DIR_SECURE_DAEMONS+"/alchemist_d")
#define ALT_WORLD_D          (DIR_DAEMONS+"/alternative_world_d.c")
#define AREALISTS_D	         (DIR_DAEMONS+"/save_area_lists_d")
#define ASTRONOMY_D          (DIR_SECURE_DAEMONS+"/astronomy_d")
#define IPC                  (DIR_SECURE_DAEMONS+"/ipc")
#define AVERAGE_AGE_D        (DIR_SECURE_DAEMONS+"/average_age_d")
#define BANISH_D             (DIR_SECURE_DAEMONS+"/banish")
#define BANK_D               (DIR_SECURE_DAEMONS+"/bank_d")
#define BBOARD_D             (DIR_SECURE_DAEMONS+"/bboard_d")
#define BELL_D               (DIR_SECURE_DAEMONS+"/bell_d")
#define BUS_D                (DIR_SECURE_DAEMONS+"/bus_d")
#define BONUS_D              (DIR_DAEMONS+"/bonus_d")
#define CASTLE_D             (DIR_DAEMONS+"/castle")
#define CHAMPION_D           (DIR_DAEMONS+"/champion_d")
#define CHAT_D               (DIR_DAEMONS+"/chat")
#define CHECK_D              (DIR_DAEMONS+"/item_level_d")
#define CLASS_NEWS           (DIR_DAEMONS+"/class_news")
#define CLERIC_CALCS         (DIR_DAEMONS+"/cleric_calcs")
#define CLIMB_D              (DIR_DAEMONS+"/climb_d")
#define CLOCK_D              (DIR_SECURE_DAEMONS+"/clock_d")
#define CMD_D                (DIR_DAEMONS+"/command")
#define COMBAT_D             (DIR_DAEMONS+"/combat_d")
#define CONFIG_D             (DIR_DAEMONS+"/config_d")
#define CRAYON_D             (DIR_DAEMONS+"/crayon_d")
#define DEATH_EFFECTS_D      (DIR_DAEMONS+"/death_effects_d")
#define DESC_D               (DIR_DAEMONS+"/description_d")
#define DESTINATIONS_D       (DIR_DAEMONS+"/destinations_d")
#define DM_NPC_D             (DIR_SECURE_DAEMONS+"/dm_npc_d")
#define D_BUG_D              (DIR_SECURE_DAEMONS+"/debug_d")
#define ECONOMY_D            (DIR_DAEMONS+"/economy_d")
#define EFFECTS_D            (DIR_DAEMONS+"/effects_d")
#define EQ_D                 (DIR_DAEMONS+"/equipment_d.c")
#define EVENTS_D             (DIR_DAEMONS+"/events_d")
#define EVENT_RECORDS_D      (DIR_DAEMONS+"/kill_and_event_records_d")
#define FACTIONS_D           (DIR_SECURE_DAEMONS+"/faction_d")
#define FEATS_D              (DIR_DAEMONS+"/feat_d")
#define FEATURE_D            (DIR_DAEMONS+"/game_features_d")
#define FILTERS_D            (DIR_DAEMONS+"/filters_d.c")
#define FINGER_D             (DIR_SECURE_DAEMONS+"/finger_d")
#define GRAFITTI_D           (DIR_DAEMONS+"/grafitti_d")
#define GUILDS_D             (DIR_DAEMONS+"/guilds_d")
#define GUILD_D              (DIR_DAEMONS+"/guild_d")
#define HELP_D               (DIR_DAEMONS+"/help")
#define KILLING_D            (DIR_DAEMONS+"/killing_d")
#define LANGUAGE_D           (DIR_DAEMONS+"/language_d")
#define LANG_D               (DIR_SECURE_DAEMONS+"/lang_d")
#define LAWBOUNTY_D          (DIR_SECURE_DAEMONS+"/lawbounty_d")
#define LETTER_D             (DIR_DAEMONS+"/letter")
#define LIVING_D             (DIR_DAEMONS + "/living_d")
#define LIBRARY_D            (DIR_DAEMONS+"/library_d")
#define LOCALPOST_D          (DIR_DAEMONS+"/localpost")
#define MAGIC_D              (DIR_DAEMONS+"/magic_d")
#define MAGIC_SS_D           (DIR_DAEMONS+"/magic_ss_d")
#define MESSAGING_D          (DIR_DAEMONS+"/messaging_d")
#define MONSTER_FEAT_D       (DIR_DAEMONS+"/monster_feat_d")
#define MULTI_D              (DIR_DAEMONS+"/multi_d")
#define NEWSSERVER           (DIR_DAEMONS+"/news_d")
#define NEWS_D               (DIR_DAEMONS+"/news")
#define NOTIFY_D             (DIR_DAEMONS+"/notify")
#define NWP_D                (DIR_DAEMONS+"/nwps_d")
#define PARTY_D              (DIR_SECURE_DAEMONS+"/party_d")
#define PASSWD_D             (DIR_MORTAL_CMDS+"/_passwd")
#define PATHFINDER_D	     (DIR_DAEMONS+"/pathfinder_d")
#define PERMA_DEATH_D        (DIR_SECURE_DAEMONS+"/perma_d")
#define PLAYER_D             (DIR_DAEMONS+"/player_d")
#define PLAYER_HOUSING       (DIR_DAEMONS+"/player_housing")
#define POISON_D             (DIR_DAEMONS+"/poison_d")
#define PRISON_D             (DIR_SECURE_DAEMONS+"/prison_d")
#define PSION_CALCS          (DIR_DAEMONS+"/psion_calcs")
#define RACE_D               (DIR_SECURE_DAEMONS+"/race_d")
#define REFS_D               (DIR_SECURE_DAEMONS+"/refs_d")
#define REMOTEPOST_D         (DIR_DAEMONS+"/remotepost")
#define RUMOURS_D            (DIR_DAEMONS+"/rumours_d")
#define SAVE_D               (DIR_DAEMONS+"/save_d")
#define SAVING_D             (DIR_DAEMONS+"/saving_d")
#define SAVING_THROW_D       (DIR_DAEMONS+"/saving_throw_d")
#define SCREEN_D             ("/adm/daemon/screen_d")
#define SEFUN_D              (DIR_DAEMONS+"/sefun")
#define SERVICES_D           (DIR_DAEMONS+"/services")
#define SHUT_D               (DIR_SECURE_DAEMONS+"/shutdown_d")
#define SKILLS_D             (DIR_SECURE_DAEMONS+"/skills_d")
#define SOUL_D               (DIR_CMDS+"/soul/atmos")
#define SYSLOGD              (DIR_SECURE_DAEMONS+"/logging_d")
#define TERMINAL_D           (DIR_DAEMONS+"/terminal_d")
#define TIME_D               (DIR_DAEMONS+"/timezones")
#define TRAP_D               (DIR_DAEMONS+"/trap_d")
#define TREASURE             (DIR_SECURE_DAEMONS+"/treasure_d")
#define UNIQUE_D             (DIR_DAEMONS+"/unique_d")
#define UPDATED_ITEM_D       (DIR_DAEMONS+"/updated_item_d")
#define USERCALL             (DIR_SECURE_DAEMONS+"/user_call")
#define USERUC_D             (DIR_DAEMONS+"/userchain/useruc_d")
#define USER_D               (DIR_DAEMONS+"/user_d.c")
#define VIRTUAL_D            (DIR_SECURE_DAEMONS+"/virtual_d")
#define VIRTUAL_ROOM_D       (DIR_DAEMONS+"/virtual_room_d")
#define VOTING_D             (DIR_DAEMONS+"/voting")
#define WEATHER_D            (DIR_DAEMONS+"/weather_d")
#define WIZ_CALCS            (DIR_DAEMONS+"/wiz_calcs")
#define WORLD_EVENTS_D       (DIR_DAEMONS+"/world_events_d")

#endif /* __DAEMONS_H */
