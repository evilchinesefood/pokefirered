# 1 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 2 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_MapScripts::
# 3 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_LostCave_Room14_OnTransition
# 4 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FiveIsland_LostCave_Room14_OnResume
# 5 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	.byte 0
# 6 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 7 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_OnTransition::
# 8 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, FiveIsland_LostCave_Room14_EventScript_TryShowLatios
# 9 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	end
# 10 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 11 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_EventScript_TryShowLatios::
# 12 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	goto_if_set FLAG_CAUGHT_LATIOS, EventScript_Return
# 13 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	goto_if_set FLAG_FOUGHT_LATIOS, EventScript_Return
# 14 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	clearflag FLAG_HIDE_LEGEND_LATIOS
# 15 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	return
# 16 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 17 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_OnResume::
# 18 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, FiveIsland_LostCave_Room14_EventScript_TryRemoveLatios
# 19 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	end
# 20 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 21 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_EventScript_TryRemoveLatios::
# 22 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 23 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 24 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	removeobject VAR_LAST_TALKED
# 25 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	return
# 26 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 27 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_EventScript_Latios::
# 28 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 29 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	special QuestLog_CutRecording
# 30 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	lock
# 31 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	faceplayer
# 32 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	setwildbattle SPECIES_LATIOS, 50
# 33 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	waitse
# 34 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	playmoncry SPECIES_LATIOS, CRY_MODE_ENCOUNTER
# 35 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	message Text_Gyaoo
# 36 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	waitmessage
# 37 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	waitmoncry
# 38 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	delay 10
# 39 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 40 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	waitbuttonpress
# 41 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 42 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	special StartLegendaryBattle
# 43 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	waitstate
# 44 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 45 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 46 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, FiveIsland_LostCave_Room14_EventScript_DefeatedLatios
# 47 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, FiveIsland_LostCave_Room14_EventScript_RanFromLatios
# 48 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, FiveIsland_LostCave_Room14_EventScript_RanFromLatios
# 49 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	setflag FLAG_CAUGHT_LATIOS
# 50 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	release
# 51 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	end
# 52 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 53 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_EventScript_DefeatedLatios::
# 54 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	setflag FLAG_FOUGHT_LATIOS
# 55 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	goto EventScript_RemoveStaticMon
# 56 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 57 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_EventScript_RanFromLatios::
# 58 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	setflag FLAG_FOUGHT_LATIOS
# 59 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	setvar VAR_0x8004, SPECIES_LATIOS
# 60 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	goto EventScript_MonFlewAway
