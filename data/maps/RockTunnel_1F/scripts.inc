# 1 "data/maps/RockTunnel_1F/scripts.pory"

# 2 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_MapScripts::
# 3 "data/maps/RockTunnel_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RockTunnel_1F_OnTransition
# 4 "data/maps/RockTunnel_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RockTunnel_1F_OnResume
# 5 "data/maps/RockTunnel_1F/scripts.pory"
	.byte 0
# 6 "data/maps/RockTunnel_1F/scripts.pory"

# 7 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_OnTransition::
# 8 "data/maps/RockTunnel_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROCK_TUNNEL_1F
# 9 "data/maps/RockTunnel_1F/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, RockTunnel_1F_EventScript_TryShowRegirock
# 10 "data/maps/RockTunnel_1F/scripts.pory"
	end
# 11 "data/maps/RockTunnel_1F/scripts.pory"

# 12 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_TryShowRegirock::
# 13 "data/maps/RockTunnel_1F/scripts.pory"
	goto_if_set FLAG_CAUGHT_REGIROCK, EventScript_Return
# 14 "data/maps/RockTunnel_1F/scripts.pory"
	goto_if_set FLAG_FOUGHT_REGIROCK, EventScript_Return
# 15 "data/maps/RockTunnel_1F/scripts.pory"
	clearflag FLAG_HIDE_LEGEND_REGIROCK
# 16 "data/maps/RockTunnel_1F/scripts.pory"
	return
# 17 "data/maps/RockTunnel_1F/scripts.pory"

# 18 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_OnResume::
# 19 "data/maps/RockTunnel_1F/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, RockTunnel_1F_EventScript_TryRemoveRegirock
# 20 "data/maps/RockTunnel_1F/scripts.pory"
	end
# 21 "data/maps/RockTunnel_1F/scripts.pory"

# 22 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_TryRemoveRegirock::
# 23 "data/maps/RockTunnel_1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 24 "data/maps/RockTunnel_1F/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 25 "data/maps/RockTunnel_1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 26 "data/maps/RockTunnel_1F/scripts.pory"
	return
# 27 "data/maps/RockTunnel_1F/scripts.pory"

# 28 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_Regirock::
# 29 "data/maps/RockTunnel_1F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 30 "data/maps/RockTunnel_1F/scripts.pory"
	special QuestLog_CutRecording
# 31 "data/maps/RockTunnel_1F/scripts.pory"
	lock
# 32 "data/maps/RockTunnel_1F/scripts.pory"
	faceplayer
# 33 "data/maps/RockTunnel_1F/scripts.pory"
	setwildbattle SPECIES_REGIROCK, 50
# 34 "data/maps/RockTunnel_1F/scripts.pory"
	waitse
# 35 "data/maps/RockTunnel_1F/scripts.pory"
	playmoncry SPECIES_REGIROCK, CRY_MODE_ENCOUNTER
# 36 "data/maps/RockTunnel_1F/scripts.pory"
	message Text_Gyaoo
# 37 "data/maps/RockTunnel_1F/scripts.pory"
	waitmessage
# 38 "data/maps/RockTunnel_1F/scripts.pory"
	waitmoncry
# 39 "data/maps/RockTunnel_1F/scripts.pory"
	delay 10
# 40 "data/maps/RockTunnel_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 41 "data/maps/RockTunnel_1F/scripts.pory"
	waitbuttonpress
# 42 "data/maps/RockTunnel_1F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 43 "data/maps/RockTunnel_1F/scripts.pory"
	special StartLegendaryBattle
# 44 "data/maps/RockTunnel_1F/scripts.pory"
	waitstate
# 45 "data/maps/RockTunnel_1F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 46 "data/maps/RockTunnel_1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 47 "data/maps/RockTunnel_1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, RockTunnel_1F_EventScript_DefeatedRegirock
# 48 "data/maps/RockTunnel_1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, RockTunnel_1F_EventScript_RanFromRegirock
# 49 "data/maps/RockTunnel_1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, RockTunnel_1F_EventScript_RanFromRegirock
# 50 "data/maps/RockTunnel_1F/scripts.pory"
	setflag FLAG_CAUGHT_REGIROCK
# 51 "data/maps/RockTunnel_1F/scripts.pory"
	release
# 52 "data/maps/RockTunnel_1F/scripts.pory"
	end
# 53 "data/maps/RockTunnel_1F/scripts.pory"

# 54 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_DefeatedRegirock::
# 55 "data/maps/RockTunnel_1F/scripts.pory"
	setflag FLAG_FOUGHT_REGIROCK
# 56 "data/maps/RockTunnel_1F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 57 "data/maps/RockTunnel_1F/scripts.pory"

# 58 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_RanFromRegirock::
# 59 "data/maps/RockTunnel_1F/scripts.pory"
	setflag FLAG_FOUGHT_REGIROCK
# 60 "data/maps/RockTunnel_1F/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGIROCK
# 61 "data/maps/RockTunnel_1F/scripts.pory"
	goto EventScript_MonFlewAway
# 62 "data/maps/RockTunnel_1F/scripts.pory"

# 63 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_RouteSign::
# 64 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_RouteSign, MSGBOX_SIGN
# 65 "data/maps/RockTunnel_1F/scripts.pory"
	end
# 66 "data/maps/RockTunnel_1F/scripts.pory"

# 67 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_Lenny::
# 68 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_LENNY, RockTunnel_1F_Text_LennyIntro, RockTunnel_1F_Text_LennyDefeat
# 69 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/RockTunnel_1F/scripts.pory"
	end
# 71 "data/maps/RockTunnel_1F/scripts.pory"

# 72 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_Oliver::
# 73 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_OLIVER, RockTunnel_1F_Text_OliverIntro, RockTunnel_1F_Text_OliverDefeat
# 74 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_OliverPostBattle, MSGBOX_AUTOCLOSE
# 75 "data/maps/RockTunnel_1F/scripts.pory"
	end
# 76 "data/maps/RockTunnel_1F/scripts.pory"

# 77 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_Lucas::
# 78 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_LUCAS, RockTunnel_1F_Text_LucasIntro, RockTunnel_1F_Text_LucasDefeat
# 79 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/RockTunnel_1F/scripts.pory"
	end
# 81 "data/maps/RockTunnel_1F/scripts.pory"

# 82 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_Ashton::
# 83 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_ASHTON, RockTunnel_1F_Text_AshtonIntro, RockTunnel_1F_Text_AshtonDefeat
# 84 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_AshtonPostBattle, MSGBOX_AUTOCLOSE
# 85 "data/maps/RockTunnel_1F/scripts.pory"
	end
# 86 "data/maps/RockTunnel_1F/scripts.pory"

# 87 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_Leah::
# 88 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_LEAH, RockTunnel_1F_Text_LeahIntro, RockTunnel_1F_Text_LeahDefeat
# 89 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/RockTunnel_1F/scripts.pory"
	end
# 91 "data/maps/RockTunnel_1F/scripts.pory"

# 92 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_Ariana::
# 93 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_ARIANA, RockTunnel_1F_Text_ArianaIntro, RockTunnel_1F_Text_ArianaDefeat
# 94 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_ArianaPostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/RockTunnel_1F/scripts.pory"
	end
# 96 "data/maps/RockTunnel_1F/scripts.pory"

# 97 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_Dana::
# 98 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_DANA, RockTunnel_1F_Text_DanaIntro, RockTunnel_1F_Text_DanaDefeat
# 99 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_DanaPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/RockTunnel_1F/scripts.pory"
	end
