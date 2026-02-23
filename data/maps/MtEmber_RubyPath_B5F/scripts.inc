# 1 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 2 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_MapScripts::
# 3 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmber_RubyPath_B5F_OnTransition
# 4 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtEmber_RubyPath_B5F_OnResume
# 5 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.byte 0
# 6 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 7 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_OnTransition::
# 8 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, MtEmber_RubyPath_B5F_EventScript_TryShowGroudon
# 9 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	end
# 10 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 11 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_TryShowGroudon::
# 12 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto_if_set FLAG_CAUGHT_GROUDON, EventScript_Return
# 13 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto_if_set FLAG_FOUGHT_GROUDON, EventScript_Return
# 14 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	clearflag FLAG_HIDE_LEGEND_GROUDON
# 15 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	return
# 16 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 17 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_OnResume::
# 18 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, MtEmber_RubyPath_B5F_EventScript_TryRemoveGroudon
# 19 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	end
# 20 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 21 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_TryRemoveGroudon::
# 22 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 23 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 24 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 25 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	return
# 26 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 27 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_Groudon::
# 28 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 29 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	special QuestLog_CutRecording
# 30 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	lock
# 31 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	faceplayer
# 32 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setwildbattle SPECIES_GROUDON, 70
# 33 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitse
# 34 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 35 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	message Text_Gyaoo
# 36 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmessage
# 37 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmoncry
# 38 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	delay 10
# 39 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 40 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitbuttonpress
# 41 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 42 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	special StartLegendaryBattle
# 43 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitstate
# 44 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 45 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 46 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, MtEmber_RubyPath_B5F_EventScript_DefeatedGroudon
# 47 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, MtEmber_RubyPath_B5F_EventScript_RanFromGroudon
# 48 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, MtEmber_RubyPath_B5F_EventScript_RanFromGroudon
# 49 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setflag FLAG_CAUGHT_GROUDON
# 50 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	release
# 51 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	end
# 52 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 53 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_DefeatedGroudon::
# 54 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setflag FLAG_FOUGHT_GROUDON
# 55 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 56 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 57 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_RanFromGroudon::
# 58 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setflag FLAG_FOUGHT_GROUDON
# 59 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setvar VAR_0x8004, SPECIES_GROUDON
# 60 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto EventScript_MonFlewAway
# 61 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 62 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_BrailleMessage::
# 63 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	lockall
# 64 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setvar VAR_0x8005, 130
# 65 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto_if_set FLAG_SHINY_STARTER, MtEmber_RubyPath_B5F_EventScript_Pokemon
# 66 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_Everything
# 67 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_HasMeaning1
# 68 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_Existence
# 69 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_HasMeaning2
# 70 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_BeingAlive
# 71 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_HasMeaning3
# 72 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_HaveDreams
# 73 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage Braille_Text_UsePower
# 74 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitbuttonpress
# 75 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	releaseall
# 76 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	end
# 77 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 78 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_Pokemon::
# 79 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	message MtEmber_RubyPath_B5F_Text_Notice
# 80 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmessage
# 81 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playse SE_PIN
# 82 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 83 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmovement 0
# 84 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	delay 40
# 85 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	msgbox MtEmber_RubyPath_B5F_Text_Mon, MSGBOX_YESNO
# 86 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	closemessage
# 87 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	delay 40
# 88 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtEmber_RubyPath_B5F_EventScript_NoWhitney
# 89 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto MtEmber_RubyPath_B5F_EventScript_Pokemon2
# 90 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	end
# 91 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 92 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_NoWhitney::
# 93 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	lock
# 94 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	faceplayer
# 95 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playse SE_PIN
# 96 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitse
# 97 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 98 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmovement 0
# 99 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	msgbox MtEmber_RubyPath_B5F_Text_SummonMon
# 100 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	delay 16
# 101 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 102 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitse
# 103 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playmoncry SPECIES_BLASTOISE, CRY_MODE_ENCOUNTER
# 104 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmoncry
# 105 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setflag FLAG_SHINY_CREATION
# 106 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setwildbattle SPECIES_BLASTOISE, 75
# 107 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	dowildbattle
# 108 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	special QuestLog_CutRecording
# 109 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto MtEmber_RubyPath_B5F_EventScript_Pokemon3
# 110 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 111 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_Text_Mon::
# 112 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "There's a Pokemon sealed\n"
# 113 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "in this room.$"
# 114 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "Want to release it?$"
# 115 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 116 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_Text_SummonMon4::
# 117 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "Despite your disapproval,\n"
# 118 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "a different POKEMON than\l"
# 119 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "what's sealed appears\l"
# 120 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "in your mind?$"
# 121 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_Text_Notice::
# 122 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "(You noticed a voice in the air.)\p"
# 123 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "(Perhaps it's the orb?)$"
# 124 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_Pokemon2::
# 125 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	lock
# 126 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	faceplayer
# 127 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playse SE_PIN
# 128 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitse
# 129 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 130 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmovement 0
# 131 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	msgbox MtEmber_RubyPath_B5F_Text_SummonMon
# 132 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	delay 16
# 133 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 134 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.ifdef FIRERED
# 135 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_ENCOUNTER
# 136 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmoncry
# 137 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setflag FLAG_SHINY_CREATION
# 138 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setwildbattle SPECIES_CHARIZARD, 75
# 139 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.else
# 140 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.ifdef LEAFGREEN
# 141 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_ENCOUNTER
# 142 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmoncry
# 143 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setflag FLAG_SHINY_CREATION
# 144 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setwildbattle SPECIES_VENUSAUR, 75
# 145 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.endif
# 146 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.endif
# 147 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	dowildbattle
# 148 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	special QuestLog_CutRecording
# 149 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto MtEmber_RubyPath_B5F_EventScript_Pokemon3
# 150 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 151 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_Pokemon3::
# 152 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	msgbox MtEmber_RubyPath_B5F_Text_SummonMon2
# 153 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	clearflag FLAG_SHINY_STARTER
# 154 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	release
# 155 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	end
# 156 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 157 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_Text_SummonMon2::
# 158 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "The room sealed itself\n"
# 159 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "from the Shining POKEMON!$"
# 160 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_Text_SummonMon::
# 161 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "The shining POKEMON\n"
# 162 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "appears in your mind?$"
