# 1 "data/maps/MtMoonSquare/scripts.pory"

# 2 "data/maps/MtMoonSquare/scripts.pory"

# 3 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_MapScripts::
# 4 "data/maps/MtMoonSquare/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtMoonSquare_OnTransition
# 5 "data/maps/MtMoonSquare/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtMoonSquare_OnResume
# 6 "data/maps/MtMoonSquare/scripts.pory"
	.byte 0
# 7 "data/maps/MtMoonSquare/scripts.pory"

# 8 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_OnTransition::
# 9 "data/maps/MtMoonSquare/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, MtMoonSquare_EventScript_TryShowJirachi
# 10 "data/maps/MtMoonSquare/scripts.pory"
	end
# 11 "data/maps/MtMoonSquare/scripts.pory"

# 12 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_TryShowJirachi::
# 13 "data/maps/MtMoonSquare/scripts.pory"
	goto_if_set FLAG_CAUGHT_JIRACHI, EventScript_Return
# 14 "data/maps/MtMoonSquare/scripts.pory"
	goto_if_set FLAG_FOUGHT_JIRACHI, EventScript_Return
# 15 "data/maps/MtMoonSquare/scripts.pory"
	clearflag FLAG_HIDE_LEGEND_JIRACHI
# 16 "data/maps/MtMoonSquare/scripts.pory"
	return
# 17 "data/maps/MtMoonSquare/scripts.pory"

# 18 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_OnResume::
# 19 "data/maps/MtMoonSquare/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, MtMoonSquare_EventScript_TryRemoveJirachi
# 20 "data/maps/MtMoonSquare/scripts.pory"
	end
# 21 "data/maps/MtMoonSquare/scripts.pory"

# 22 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_TryRemoveJirachi::
# 23 "data/maps/MtMoonSquare/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 24 "data/maps/MtMoonSquare/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 25 "data/maps/MtMoonSquare/scripts.pory"
	removeobject VAR_LAST_TALKED
# 26 "data/maps/MtMoonSquare/scripts.pory"
	return
# 27 "data/maps/MtMoonSquare/scripts.pory"

# 28 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_Jirachi::
# 29 "data/maps/MtMoonSquare/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 30 "data/maps/MtMoonSquare/scripts.pory"
	special QuestLog_CutRecording
# 31 "data/maps/MtMoonSquare/scripts.pory"
	lock
# 32 "data/maps/MtMoonSquare/scripts.pory"
	faceplayer
# 33 "data/maps/MtMoonSquare/scripts.pory"
	setwildbattle SPECIES_JIRACHI, 40
# 34 "data/maps/MtMoonSquare/scripts.pory"
	waitse
# 35 "data/maps/MtMoonSquare/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 36 "data/maps/MtMoonSquare/scripts.pory"
	message Text_Gyaoo
# 37 "data/maps/MtMoonSquare/scripts.pory"
	waitmessage
# 38 "data/maps/MtMoonSquare/scripts.pory"
	waitmoncry
# 39 "data/maps/MtMoonSquare/scripts.pory"
	delay 10
# 40 "data/maps/MtMoonSquare/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 41 "data/maps/MtMoonSquare/scripts.pory"
	waitbuttonpress
# 42 "data/maps/MtMoonSquare/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 43 "data/maps/MtMoonSquare/scripts.pory"
	special StartLegendaryBattle
# 44 "data/maps/MtMoonSquare/scripts.pory"
	waitstate
# 45 "data/maps/MtMoonSquare/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 46 "data/maps/MtMoonSquare/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 47 "data/maps/MtMoonSquare/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, MtMoonSquare_EventScript_DefeatedJirachi
# 48 "data/maps/MtMoonSquare/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, MtMoonSquare_EventScript_RanFromJirachi
# 49 "data/maps/MtMoonSquare/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, MtMoonSquare_EventScript_RanFromJirachi
# 50 "data/maps/MtMoonSquare/scripts.pory"
	setflag FLAG_CAUGHT_JIRACHI
# 51 "data/maps/MtMoonSquare/scripts.pory"
	release
# 52 "data/maps/MtMoonSquare/scripts.pory"
	end
# 53 "data/maps/MtMoonSquare/scripts.pory"

# 54 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_DefeatedJirachi::
# 55 "data/maps/MtMoonSquare/scripts.pory"
	setflag FLAG_FOUGHT_JIRACHI
# 56 "data/maps/MtMoonSquare/scripts.pory"
	goto EventScript_RemoveStaticMon
# 57 "data/maps/MtMoonSquare/scripts.pory"

# 58 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_RanFromJirachi::
# 59 "data/maps/MtMoonSquare/scripts.pory"
	setflag FLAG_FOUGHT_JIRACHI
# 60 "data/maps/MtMoonSquare/scripts.pory"
	setvar VAR_0x8004, SPECIES_JIRACHI
# 61 "data/maps/MtMoonSquare/scripts.pory"
	goto EventScript_MonFlewAway
# 62 "data/maps/MtMoonSquare/scripts.pory"

# 63 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_Clefairy::
# 64 "data/maps/MtMoonSquare/scripts.pory"
	lock
# 65 "data/maps/MtMoonSquare/scripts.pory"
	faceplayer
# 66 "data/maps/MtMoonSquare/scripts.pory"
	waitse
# 67 "data/maps/MtMoonSquare/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 68 "data/maps/MtMoonSquare/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Clefairy
# 69 "data/maps/MtMoonSquare/scripts.pory"
	waitmoncry
# 70 "data/maps/MtMoonSquare/scripts.pory"
	release
# 71 "data/maps/MtMoonSquare/scripts.pory"
    end
# 72 "data/maps/MtMoonSquare/scripts.pory"

# 73 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_Jiggypuff::
# 74 "data/maps/MtMoonSquare/scripts.pory"
	lock
# 75 "data/maps/MtMoonSquare/scripts.pory"
	faceplayer
# 76 "data/maps/MtMoonSquare/scripts.pory"
	fadeoutbgm 0
# 77 "data/maps/MtMoonSquare/scripts.pory"
	playbgm MUS_JIGGLYPUFF, 0
# 78 "data/maps/MtMoonSquare/scripts.pory"
	message PewterCity_PokemonCenter_1F_Text_Jigglypuff
# 79 "data/maps/MtMoonSquare/scripts.pory"
	waitmessage
# 80 "data/maps/MtMoonSquare/scripts.pory"
	delay 455
# 81 "data/maps/MtMoonSquare/scripts.pory"
	playbgm MUS_SCHOOL, 1
# 82 "data/maps/MtMoonSquare/scripts.pory"
	release
# 83 "data/maps/MtMoonSquare/scripts.pory"
	end
# 84 "data/maps/MtMoonSquare/scripts.pory"

# 85 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_NidoranF::
# 86 "data/maps/MtMoonSquare/scripts.pory"
	lock
# 87 "data/maps/MtMoonSquare/scripts.pory"
	faceplayer
# 88 "data/maps/MtMoonSquare/scripts.pory"
	waitse
# 89 "data/maps/MtMoonSquare/scripts.pory"
	playmoncry SPECIES_NIDORAN_F, CRY_MODE_NORMAL
# 90 "data/maps/MtMoonSquare/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Nidoran
# 91 "data/maps/MtMoonSquare/scripts.pory"
	waitmoncry
# 92 "data/maps/MtMoonSquare/scripts.pory"
	release
# 93 "data/maps/MtMoonSquare/scripts.pory"
	end
# 94 "data/maps/MtMoonSquare/scripts.pory"

# 95 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_NidoranM::
# 96 "data/maps/MtMoonSquare/scripts.pory"
	lock
# 97 "data/maps/MtMoonSquare/scripts.pory"
	faceplayer
# 98 "data/maps/MtMoonSquare/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 99 "data/maps/MtMoonSquare/scripts.pory"
	waitse
# 100 "data/maps/MtMoonSquare/scripts.pory"
	playmoncry SPECIES_NIDORAN_M, CRY_MODE_NORMAL
# 101 "data/maps/MtMoonSquare/scripts.pory"
	msgbox PewterCity_House1_Text_Nidoran
# 102 "data/maps/MtMoonSquare/scripts.pory"
	waitmoncry
# 103 "data/maps/MtMoonSquare/scripts.pory"
	release
# 104 "data/maps/MtMoonSquare/scripts.pory"
    end
# 105 "data/maps/MtMoonSquare/scripts.pory"

# 106 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_Nidorino::
# 107 "data/maps/MtMoonSquare/scripts.pory"
	lock
# 108 "data/maps/MtMoonSquare/scripts.pory"
	faceplayer
# 109 "data/maps/MtMoonSquare/scripts.pory"
	waitse
# 110 "data/maps/MtMoonSquare/scripts.pory"
	playmoncry SPECIES_NIDORINO, CRY_MODE_NORMAL
# 111 "data/maps/MtMoonSquare/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Nidorino
# 112 "data/maps/MtMoonSquare/scripts.pory"
	waitmoncry
# 113 "data/maps/MtMoonSquare/scripts.pory"
	release
# 114 "data/maps/MtMoonSquare/scripts.pory"
	end
# 115 "data/maps/MtMoonSquare/scripts.pory"

# 116 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_ClawBall::
# 117 "data/maps/MtMoonSquare/scripts.pory"
	lock
# 118 "data/maps/MtMoonSquare/scripts.pory"
	faceplayer
# 119 "data/maps/MtMoonSquare/scripts.pory"
	msgbox MtMoonSquare_Text_ClawBall, MSGBOX_DEFAULT
# 120 "data/maps/MtMoonSquare/scripts.pory"
	release
# 121 "data/maps/MtMoonSquare/scripts.pory"
	end
# 122 "data/maps/MtMoonSquare/scripts.pory"

# 123 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_Text_ClawBall:
# 124 "data/maps/MtMoonSquare/scripts.pory"
	.string "A strange ball with claw marks\n"
# 125 "data/maps/MtMoonSquare/scripts.pory"
	.string "on it...$"
