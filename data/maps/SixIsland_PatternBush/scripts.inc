# 1 "data/maps/SixIsland_PatternBush/scripts.pory"

# 2 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_MapScripts::
# 3 "data/maps/SixIsland_PatternBush/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_PatternBush_OnTransition
# 4 "data/maps/SixIsland_PatternBush/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SixIsland_PatternBush_OnResume
# 5 "data/maps/SixIsland_PatternBush/scripts.pory"
	.byte 0
# 6 "data/maps/SixIsland_PatternBush/scripts.pory"

# 7 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_OnTransition::
# 8 "data/maps/SixIsland_PatternBush/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND_PATTERN_BUSH
# 9 "data/maps/SixIsland_PatternBush/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 10 "data/maps/SixIsland_PatternBush/scripts.pory"
	call_if_ge VAR_TEMP_1, 50, SixIsland_PatternBush_EventScript_SetEscapeRightExit
# 11 "data/maps/SixIsland_PatternBush/scripts.pory"
	call_if_le VAR_TEMP_1, 49, SixIsland_PatternBush_EventScript_SetEscapeLeftExit
# 12 "data/maps/SixIsland_PatternBush/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, SixIsland_PatternBush_EventScript_TryShowLatias
# 13 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 14 "data/maps/SixIsland_PatternBush/scripts.pory"

# 15 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_TryShowLatias::
# 16 "data/maps/SixIsland_PatternBush/scripts.pory"
	goto_if_set FLAG_CAUGHT_LATIAS, EventScript_Return
# 17 "data/maps/SixIsland_PatternBush/scripts.pory"
	goto_if_set FLAG_FOUGHT_LATIAS, EventScript_Return
# 18 "data/maps/SixIsland_PatternBush/scripts.pory"
	clearflag FLAG_HIDE_LEGEND_LATIAS
# 19 "data/maps/SixIsland_PatternBush/scripts.pory"
	return
# 20 "data/maps/SixIsland_PatternBush/scripts.pory"

# 21 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_OnResume::
# 22 "data/maps/SixIsland_PatternBush/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, SixIsland_PatternBush_EventScript_TryRemoveLatias
# 23 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 24 "data/maps/SixIsland_PatternBush/scripts.pory"

# 25 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_TryRemoveLatias::
# 26 "data/maps/SixIsland_PatternBush/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 27 "data/maps/SixIsland_PatternBush/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 28 "data/maps/SixIsland_PatternBush/scripts.pory"
	removeobject VAR_LAST_TALKED
# 29 "data/maps/SixIsland_PatternBush/scripts.pory"
	return
# 30 "data/maps/SixIsland_PatternBush/scripts.pory"

# 31 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_Latias::
# 32 "data/maps/SixIsland_PatternBush/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 33 "data/maps/SixIsland_PatternBush/scripts.pory"
	special QuestLog_CutRecording
# 34 "data/maps/SixIsland_PatternBush/scripts.pory"
	lock
# 35 "data/maps/SixIsland_PatternBush/scripts.pory"
	faceplayer
# 36 "data/maps/SixIsland_PatternBush/scripts.pory"
	setwildbattle SPECIES_LATIAS, 50
# 37 "data/maps/SixIsland_PatternBush/scripts.pory"
	waitse
# 38 "data/maps/SixIsland_PatternBush/scripts.pory"
	playmoncry SPECIES_LATIAS, CRY_MODE_ENCOUNTER
# 39 "data/maps/SixIsland_PatternBush/scripts.pory"
	message Text_Gyaoo
# 40 "data/maps/SixIsland_PatternBush/scripts.pory"
	waitmessage
# 41 "data/maps/SixIsland_PatternBush/scripts.pory"
	waitmoncry
# 42 "data/maps/SixIsland_PatternBush/scripts.pory"
	delay 10
# 43 "data/maps/SixIsland_PatternBush/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 44 "data/maps/SixIsland_PatternBush/scripts.pory"
	waitbuttonpress
# 45 "data/maps/SixIsland_PatternBush/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 46 "data/maps/SixIsland_PatternBush/scripts.pory"
	special StartLegendaryBattle
# 47 "data/maps/SixIsland_PatternBush/scripts.pory"
	waitstate
# 48 "data/maps/SixIsland_PatternBush/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 49 "data/maps/SixIsland_PatternBush/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 50 "data/maps/SixIsland_PatternBush/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SixIsland_PatternBush_EventScript_DefeatedLatias
# 51 "data/maps/SixIsland_PatternBush/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SixIsland_PatternBush_EventScript_RanFromLatias
# 52 "data/maps/SixIsland_PatternBush/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SixIsland_PatternBush_EventScript_RanFromLatias
# 53 "data/maps/SixIsland_PatternBush/scripts.pory"
	setflag FLAG_CAUGHT_LATIAS
# 54 "data/maps/SixIsland_PatternBush/scripts.pory"
	release
# 55 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 56 "data/maps/SixIsland_PatternBush/scripts.pory"

# 57 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_DefeatedLatias::
# 58 "data/maps/SixIsland_PatternBush/scripts.pory"
	setflag FLAG_FOUGHT_LATIAS
# 59 "data/maps/SixIsland_PatternBush/scripts.pory"
	goto EventScript_RemoveStaticMon
# 60 "data/maps/SixIsland_PatternBush/scripts.pory"

# 61 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_RanFromLatias::
# 62 "data/maps/SixIsland_PatternBush/scripts.pory"
	setflag FLAG_FOUGHT_LATIAS
# 63 "data/maps/SixIsland_PatternBush/scripts.pory"
	setvar VAR_0x8004, SPECIES_LATIAS
# 64 "data/maps/SixIsland_PatternBush/scripts.pory"
	goto EventScript_MonFlewAway
# 65 "data/maps/SixIsland_PatternBush/scripts.pory"

# 66 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_SetEscapeRightExit::
# 67 "data/maps/SixIsland_PatternBush/scripts.pory"
	setescapewarp MAP_SIX_ISLAND_GREEN_PATH, 255, 64, 10
# 68 "data/maps/SixIsland_PatternBush/scripts.pory"
	return
# 69 "data/maps/SixIsland_PatternBush/scripts.pory"

# 70 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_SetEscapeLeftExit::
# 71 "data/maps/SixIsland_PatternBush/scripts.pory"
	setescapewarp MAP_SIX_ISLAND_GREEN_PATH, 255, 45, 10
# 72 "data/maps/SixIsland_PatternBush/scripts.pory"
	return
# 73 "data/maps/SixIsland_PatternBush/scripts.pory"

# 74 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_Bethany::
# 75 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_PKMN_BREEDER_BETHANY, SixIsland_PatternBush_Text_BethanyIntro, SixIsland_PatternBush_Text_BethanyDefeat
# 76 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_BethanyPostBattle, MSGBOX_AUTOCLOSE
# 77 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 78 "data/maps/SixIsland_PatternBush/scripts.pory"

# 79 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_Allison::
# 80 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_PKMN_BREEDER_ALLISON, SixIsland_PatternBush_Text_AllisonIntro, SixIsland_PatternBush_Text_AllisonDefeat
# 81 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_AllisonPostBattle, MSGBOX_AUTOCLOSE
# 82 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 83 "data/maps/SixIsland_PatternBush/scripts.pory"

# 84 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_Garret::
# 85 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_GARRET, SixIsland_PatternBush_Text_GarretIntro, SixIsland_PatternBush_Text_GarretDefeat
# 86 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_GarretPostBattle, MSGBOX_AUTOCLOSE
# 87 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 88 "data/maps/SixIsland_PatternBush/scripts.pory"

# 89 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_Jonah::
# 90 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_JONAH, SixIsland_PatternBush_Text_JonahIntro, SixIsland_PatternBush_Text_JonahDefeat
# 91 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 93 "data/maps/SixIsland_PatternBush/scripts.pory"

# 94 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_Vance::
# 95 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_VANCE, SixIsland_PatternBush_Text_VanceIntro, SixIsland_PatternBush_Text_VanceDefeat
# 96 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_VancePostBattle, MSGBOX_AUTOCLOSE
# 97 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 98 "data/maps/SixIsland_PatternBush/scripts.pory"

# 99 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_Nash::
# 100 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_NASH, SixIsland_PatternBush_Text_NashIntro, SixIsland_PatternBush_Text_NashDefeat
# 101 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_NashPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 103 "data/maps/SixIsland_PatternBush/scripts.pory"

# 104 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_Cordell::
# 105 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_CORDELL, SixIsland_PatternBush_Text_CordellIntro, SixIsland_PatternBush_Text_CordellDefeat
# 106 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_CordellPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 108 "data/maps/SixIsland_PatternBush/scripts.pory"

# 109 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_Dalia::
# 110 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_LASS_DALIA, SixIsland_PatternBush_Text_DaliaIntro, SixIsland_PatternBush_Text_DaliaDefeat
# 111 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_DaliaPostBattle, MSGBOX_AUTOCLOSE
# 112 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 113 "data/maps/SixIsland_PatternBush/scripts.pory"

# 114 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_Joana::
# 115 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_LASS_JOANA, SixIsland_PatternBush_Text_JoanaIntro, SixIsland_PatternBush_Text_JoanaDefeat
# 116 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_JoanaPostBattle, MSGBOX_AUTOCLOSE
# 117 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 118 "data/maps/SixIsland_PatternBush/scripts.pory"

# 119 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_Riley::
# 120 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_RILEY, SixIsland_PatternBush_Text_RileyIntro, SixIsland_PatternBush_Text_RileyDefeat
# 121 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 123 "data/maps/SixIsland_PatternBush/scripts.pory"

# 124 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_Marcy::
# 125 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_MARCY, SixIsland_PatternBush_Text_MarcyIntro, SixIsland_PatternBush_Text_MarcyDefeat
# 126 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_MarcyPostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 128 "data/maps/SixIsland_PatternBush/scripts.pory"

# 129 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_Layton::
# 130 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_RUIN_MANIAC_LAYTON, SixIsland_PatternBush_Text_LaytonIntro, SixIsland_PatternBush_Text_LaytonDefeat
# 131 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_LaytonPostBattle, MSGBOX_AUTOCLOSE
# 132 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 133 "data/maps/SixIsland_PatternBush/scripts.pory"

# 134 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_Bugsy::
# 135 "data/maps/SixIsland_PatternBush/scripts.pory"
	lock
# 136 "data/maps/SixIsland_PatternBush/scripts.pory"
	faceplayer
# 137 "data/maps/SixIsland_PatternBush/scripts.pory"
	goto_if_set FLAG_BUGSY_DEFEATED, SixIsland_PatternBush_EventScript_RematchBugsy
# 138 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_Bugsy, MSGBOX_YESNO
# 139 "data/maps/SixIsland_PatternBush/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SixIsland_PatternBush_EventScript_NoBugsy
# 140 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_BUGSY, SixIsland_PatternBush_Text_YesBugsy, SixIsland_PatternBush_Text_BugsyDefeat, SixIsland_PatternBush_EventScript_PostBugsy, NO_MUSIC
# 141 "data/maps/SixIsland_PatternBush/scripts.pory"
	release
# 142 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 143 "data/maps/SixIsland_PatternBush/scripts.pory"

# 144 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_PostBugsy::
# 145 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_BugsyPostBattle
# 146 "data/maps/SixIsland_PatternBush/scripts.pory"
	setflag FLAG_BUGSY_DEFEATED
# 147 "data/maps/SixIsland_PatternBush/scripts.pory"
	cleartrainerflag TRAINER_BUGSY
# 148 "data/maps/SixIsland_PatternBush/scripts.pory"
	release
# 149 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 150 "data/maps/SixIsland_PatternBush/scripts.pory"

# 151 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_CantRematchBugsy::
# 152 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_BugsyPostBattle
# 153 "data/maps/SixIsland_PatternBush/scripts.pory"
	release
# 154 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 155 "data/maps/SixIsland_PatternBush/scripts.pory"

# 156 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_NoBugsy::
# 157 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_NoBugsy
# 158 "data/maps/SixIsland_PatternBush/scripts.pory"
	release
# 159 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 160 "data/maps/SixIsland_PatternBush/scripts.pory"

# 161 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_RematchBugsy::
# 162 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_RematchBugsy, MSGBOX_YESNO
# 163 "data/maps/SixIsland_PatternBush/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SixIsland_PatternBush_EventScript_NoBugsy
# 164 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_BUGSY, SixIsland_PatternBush_Text_YesRematchBugsy, SixIsland_PatternBush_Text_RematchBugsyDefeat, SixIsland_PatternBush_EventScript_PostRematchBugsy, NO_MUSIC
# 165 "data/maps/SixIsland_PatternBush/scripts.pory"
	release
# 166 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
# 167 "data/maps/SixIsland_PatternBush/scripts.pory"

# 168 "data/maps/SixIsland_PatternBush/scripts.pory"
SixIsland_PatternBush_EventScript_PostRematchBugsy::
# 169 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_RematchBugsyDefeat
# 170 "data/maps/SixIsland_PatternBush/scripts.pory"
	cleartrainerflag TRAINER_BUGSY
# 171 "data/maps/SixIsland_PatternBush/scripts.pory"
	release
# 172 "data/maps/SixIsland_PatternBush/scripts.pory"
	end
