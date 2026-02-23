# 1 "data/maps/PowerPlant/scripts.pory"

# 2 "data/maps/PowerPlant/scripts.pory"
PowerPlant_MapScripts::
# 3 "data/maps/PowerPlant/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PowerPlant_OnResume
# 4 "data/maps/PowerPlant/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PowerPlant_OnTransition
# 5 "data/maps/PowerPlant/scripts.pory"
	.byte 0
# 6 "data/maps/PowerPlant/scripts.pory"

# 7 "data/maps/PowerPlant/scripts.pory"
PowerPlant_OnResume::
# 8 "data/maps/PowerPlant/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, PowerPlant_EventScript_TryRemoveStaticMon
# 9 "data/maps/PowerPlant/scripts.pory"
	end
# 10 "data/maps/PowerPlant/scripts.pory"

# 11 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_TryRemoveStaticMon::
# 12 "data/maps/PowerPlant/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/PowerPlant/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 14 "data/maps/PowerPlant/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/PowerPlant/scripts.pory"
	return
# 16 "data/maps/PowerPlant/scripts.pory"

# 17 "data/maps/PowerPlant/scripts.pory"
PowerPlant_OnTransition::
# 18 "data/maps/PowerPlant/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POWER_PLANT
# 19 "data/maps/PowerPlant/scripts.pory"
	call_if_unset FLAG_FOUGHT_ZAPDOS, PowerPlant_EventScript_ShowZapdos
# 20 "data/maps/PowerPlant/scripts.pory"
	call_if_unset FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1, PowerPlant_EventScript_ShowElectrode1
# 21 "data/maps/PowerPlant/scripts.pory"
	call_if_unset FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2, PowerPlant_EventScript_ShowElectrode2
# 22 "data/maps/PowerPlant/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PowerPlant_EventScript_TryShowRegisteel
# 23 "data/maps/PowerPlant/scripts.pory"
	end
# 24 "data/maps/PowerPlant/scripts.pory"

# 25 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_TryShowRegisteel::
# 26 "data/maps/PowerPlant/scripts.pory"
	goto_if_set FLAG_CAUGHT_REGISTEEL, EventScript_Return
# 27 "data/maps/PowerPlant/scripts.pory"
	goto_if_set FLAG_FOUGHT_REGISTEEL, EventScript_Return
# 28 "data/maps/PowerPlant/scripts.pory"
	clearflag FLAG_HIDE_LEGEND_REGISTEEL
# 29 "data/maps/PowerPlant/scripts.pory"
	return
# 30 "data/maps/PowerPlant/scripts.pory"

# 31 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_Registeel::
# 32 "data/maps/PowerPlant/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 33 "data/maps/PowerPlant/scripts.pory"
	special QuestLog_CutRecording
# 34 "data/maps/PowerPlant/scripts.pory"
	lock
# 35 "data/maps/PowerPlant/scripts.pory"
	faceplayer
# 36 "data/maps/PowerPlant/scripts.pory"
	setwildbattle SPECIES_REGISTEEL, 50
# 37 "data/maps/PowerPlant/scripts.pory"
	waitse
# 38 "data/maps/PowerPlant/scripts.pory"
	playmoncry SPECIES_REGISTEEL, CRY_MODE_ENCOUNTER
# 39 "data/maps/PowerPlant/scripts.pory"
	message Text_Gyaoo
# 40 "data/maps/PowerPlant/scripts.pory"
	waitmessage
# 41 "data/maps/PowerPlant/scripts.pory"
	waitmoncry
# 42 "data/maps/PowerPlant/scripts.pory"
	delay 10
# 43 "data/maps/PowerPlant/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 44 "data/maps/PowerPlant/scripts.pory"
	waitbuttonpress
# 45 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 46 "data/maps/PowerPlant/scripts.pory"
	special StartLegendaryBattle
# 47 "data/maps/PowerPlant/scripts.pory"
	waitstate
# 48 "data/maps/PowerPlant/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 49 "data/maps/PowerPlant/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 50 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, PowerPlant_EventScript_DefeatedRegisteel
# 51 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, PowerPlant_EventScript_RanFromRegisteel
# 52 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, PowerPlant_EventScript_RanFromRegisteel
# 53 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_CAUGHT_REGISTEEL
# 54 "data/maps/PowerPlant/scripts.pory"
	release
# 55 "data/maps/PowerPlant/scripts.pory"
	end
# 56 "data/maps/PowerPlant/scripts.pory"

# 57 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_DefeatedRegisteel::
# 58 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_FOUGHT_REGISTEEL
# 59 "data/maps/PowerPlant/scripts.pory"
	goto EventScript_RemoveStaticMon
# 60 "data/maps/PowerPlant/scripts.pory"

# 61 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_RanFromRegisteel::
# 62 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_FOUGHT_REGISTEEL
# 63 "data/maps/PowerPlant/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGISTEEL
# 64 "data/maps/PowerPlant/scripts.pory"
	goto EventScript_MonFlewAway
# 65 "data/maps/PowerPlant/scripts.pory"

# 66 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_ShowZapdos::
# 67 "data/maps/PowerPlant/scripts.pory"
	clearflag FLAG_HIDE_ZAPDOS
# 68 "data/maps/PowerPlant/scripts.pory"
	return
# 69 "data/maps/PowerPlant/scripts.pory"

# 70 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_ShowElectrode1::
# 71 "data/maps/PowerPlant/scripts.pory"
	clearflag FLAG_HIDE_POWER_PLANT_ELECTRODE_1
# 72 "data/maps/PowerPlant/scripts.pory"
	return
# 73 "data/maps/PowerPlant/scripts.pory"

# 74 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_ShowElectrode2::
# 75 "data/maps/PowerPlant/scripts.pory"
	clearflag FLAG_HIDE_POWER_PLANT_ELECTRODE_2
# 76 "data/maps/PowerPlant/scripts.pory"
	return
# 77 "data/maps/PowerPlant/scripts.pory"

# 78 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_Zapdos::
# 79 "data/maps/PowerPlant/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 80 "data/maps/PowerPlant/scripts.pory"
	special QuestLog_CutRecording
# 81 "data/maps/PowerPlant/scripts.pory"
	lock
# 82 "data/maps/PowerPlant/scripts.pory"
	faceplayer
# 83 "data/maps/PowerPlant/scripts.pory"
	setwildbattle SPECIES_ZAPDOS, 50
# 84 "data/maps/PowerPlant/scripts.pory"
	waitse
# 85 "data/maps/PowerPlant/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 86 "data/maps/PowerPlant/scripts.pory"
	message Text_Gyaoo
# 87 "data/maps/PowerPlant/scripts.pory"
	waitmessage
# 88 "data/maps/PowerPlant/scripts.pory"
	waitmoncry
# 89 "data/maps/PowerPlant/scripts.pory"
	delay 10
# 90 "data/maps/PowerPlant/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 91 "data/maps/PowerPlant/scripts.pory"
	waitbuttonpress
# 92 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 93 "data/maps/PowerPlant/scripts.pory"
	special StartLegendaryBattle
# 94 "data/maps/PowerPlant/scripts.pory"
	waitstate
# 95 "data/maps/PowerPlant/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 96 "data/maps/PowerPlant/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 97 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, PowerPlant_EventScript_DefeatedZapdos
# 98 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, PowerPlant_EventScript_RanFromZapdos
# 99 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, PowerPlant_EventScript_RanFromZapdos
# 100 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_FOUGHT_ZAPDOS
# 101 "data/maps/PowerPlant/scripts.pory"
	release
# 102 "data/maps/PowerPlant/scripts.pory"
	end
# 103 "data/maps/PowerPlant/scripts.pory"

# 104 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_DefeatedZapdos::
# 105 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_FOUGHT_ZAPDOS
# 106 "data/maps/PowerPlant/scripts.pory"
	goto EventScript_RemoveStaticMon
# 107 "data/maps/PowerPlant/scripts.pory"
	end
# 108 "data/maps/PowerPlant/scripts.pory"

# 109 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_RanFromZapdos::
# 110 "data/maps/PowerPlant/scripts.pory"
	setvar VAR_0x8004, SPECIES_ZAPDOS
# 111 "data/maps/PowerPlant/scripts.pory"
	goto EventScript_MonFlewAway
# 112 "data/maps/PowerPlant/scripts.pory"
	end
# 113 "data/maps/PowerPlant/scripts.pory"

# 114 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_Electrode1::
# 115 "data/maps/PowerPlant/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 116 "data/maps/PowerPlant/scripts.pory"
	lock
# 117 "data/maps/PowerPlant/scripts.pory"
	faceplayer
# 118 "data/maps/PowerPlant/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 45
# 119 "data/maps/PowerPlant/scripts.pory"
	waitse
# 120 "data/maps/PowerPlant/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 121 "data/maps/PowerPlant/scripts.pory"
	delay 40
# 122 "data/maps/PowerPlant/scripts.pory"
	waitmoncry
# 123 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 124 "data/maps/PowerPlant/scripts.pory"
	dowildbattle
# 125 "data/maps/PowerPlant/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 126 "data/maps/PowerPlant/scripts.pory"
	special QuestLog_CutRecording
# 127 "data/maps/PowerPlant/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 128 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, PowerPlant_EventScript_FoughtElectrode1
# 129 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, PowerPlant_EventScript_FoughtElectrode1
# 130 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, PowerPlant_EventScript_FoughtElectrode1
# 131 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1
# 132 "data/maps/PowerPlant/scripts.pory"
	release
# 133 "data/maps/PowerPlant/scripts.pory"
	end
# 134 "data/maps/PowerPlant/scripts.pory"

# 135 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_FoughtElectrode1::
# 136 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1
# 137 "data/maps/PowerPlant/scripts.pory"
	goto EventScript_RemoveStaticMon
# 138 "data/maps/PowerPlant/scripts.pory"
	end
# 139 "data/maps/PowerPlant/scripts.pory"

# 140 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_Electrode2::
# 141 "data/maps/PowerPlant/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 142 "data/maps/PowerPlant/scripts.pory"
	lock
# 143 "data/maps/PowerPlant/scripts.pory"
	faceplayer
# 144 "data/maps/PowerPlant/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 45
# 145 "data/maps/PowerPlant/scripts.pory"
	waitse
# 146 "data/maps/PowerPlant/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 147 "data/maps/PowerPlant/scripts.pory"
	delay 40
# 148 "data/maps/PowerPlant/scripts.pory"
	waitmoncry
# 149 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 150 "data/maps/PowerPlant/scripts.pory"
	dowildbattle
# 151 "data/maps/PowerPlant/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 152 "data/maps/PowerPlant/scripts.pory"
	special QuestLog_CutRecording
# 153 "data/maps/PowerPlant/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 154 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, PowerPlant_EventScript_FoughtElectrode2
# 155 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, PowerPlant_EventScript_FoughtElectrode2
# 156 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, PowerPlant_EventScript_FoughtElectrode2
# 157 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2
# 158 "data/maps/PowerPlant/scripts.pory"
	release
# 159 "data/maps/PowerPlant/scripts.pory"
	end
# 160 "data/maps/PowerPlant/scripts.pory"

# 161 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_FoughtElectrode2::
# 162 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2
# 163 "data/maps/PowerPlant/scripts.pory"
	goto EventScript_RemoveStaticMon
# 164 "data/maps/PowerPlant/scripts.pory"
	end
# 165 "data/maps/PowerPlant/scripts.pory"

# 166 "data/maps/PowerPlant/scripts.pory"
PowerPlant_Craig::
# 167 "data/maps/PowerPlant/scripts.pory"
	trainerbattle_single TRAINER_CRAIG, PowerPlant_Text_CraigIntro, PowerPlant_Text_CraigDefeat
# 168 "data/maps/PowerPlant/scripts.pory"
	msgbox PowerPlant_Text_CraigPostBattle, MSGBOX_AUTOCLOSE
# 169 "data/maps/PowerPlant/scripts.pory"
 	setflag FLAG_CRAIG
# 170 "data/maps/PowerPlant/scripts.pory"
	fadescreen FADE_TO_BLACK
# 171 "data/maps/PowerPlant/scripts.pory"
	removeobject 9
# 172 "data/maps/PowerPlant/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 173 "data/maps/PowerPlant/scripts.pory"
	end
