# 1 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 2 "data/maps/CinnabarIsland_Gym/scripts.pory"
.set LOCALID_QUINN, 1
# 3 "data/maps/CinnabarIsland_Gym/scripts.pory"
.set LOCALID_AVERY, 3
# 4 "data/maps/CinnabarIsland_Gym/scripts.pory"
.set LOCALID_RAMON, 4
# 5 "data/maps/CinnabarIsland_Gym/scripts.pory"
.set LOCALID_DEREK, 5
# 6 "data/maps/CinnabarIsland_Gym/scripts.pory"
.set LOCALID_DUSTY, 6
# 7 "data/maps/CinnabarIsland_Gym/scripts.pory"
.set LOCALID_ZAC,   7
# 8 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 9 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_MapScripts::
# 10 "data/maps/CinnabarIsland_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CinnabarIsland_Gym_OnLoad
# 11 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.byte 0
# 12 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 13 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoad::
# 14 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_OnLoadOpenAllDoors
# 15 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_OnLoadOpenDoor1
# 16 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_OnLoadOpenDoor2
# 17 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_OnLoadOpenDoor3
# 18 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_OnLoadOpenDoor4
# 19 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_OnLoadOpenDoor5
# 20 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_OnLoadOpenDoor6
# 21 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 22 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 23 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenAllDoors::
# 24 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 25 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 26 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 27 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 28 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 29 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 30 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 31 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 32 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor1::
# 33 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 34 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 35 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 36 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor2::
# 37 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 38 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 39 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 40 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor3::
# 41 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 42 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 43 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 44 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor4::
# 45 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 46 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 47 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 48 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor5::
# 49 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 50 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 51 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 52 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor6::
# 53 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 54 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 55 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 56 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Blaine::
# 57 "data/maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 58 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BLAINE, CinnabarIsland_Gym_Text_BlaineIntro, CinnabarIsland_Gym_Text_BlaineDefeat, CinnabarIsland_Gym_EventScript_DefeatedBlaine, NO_MUSIC
# 59 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM38_FROM_BLAINE, CinnabarIsland_Gym_EventScript_GiveTM38
# 60 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, CinnabarIsland_Gym_EventScript_RematchBlaine
# 61 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_BlainePostBattle
# 62 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 63 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 64 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 65 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedBlaine::
# 66 "data/maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 1
# 67 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_DEFEATED_BLAINE
# 68 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 69 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setrespawn SPAWN_CINNABAR_ISLAND
# 70 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 1
# 71 "data/maps/CinnabarIsland_Gym/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 72 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_GYM3CAP
# 73 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_GYM4CAP
# 74 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_GYM5CAP
# 75 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_GYM6CAP
# 76 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_GYM7CAP
# 77 "data/maps/CinnabarIsland_Gym/scripts.pory"
	set_gym_trainers 7
# 78 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GiveTM38
# 79 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 80 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 81 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GiveTM38::
# 82 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ExplainVolcanoBadge
# 83 "data/maps/CinnabarIsland_Gym/scripts.pory"
	checkitemspace ITEM_TM38
# 84 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CinnabarIsland_Gym_EventScript_NoRoomForTM38
# 85 "data/maps/CinnabarIsland_Gym/scripts.pory"
	giveitem_msg CinnabarIsland_Gym_Text_ReceivedTM38FromBlaine, ITEM_TM38
# 86 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_GOT_TM38_FROM_BLAINE
# 87 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_FireBlastIsUltimateFireMove
# 88 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 89 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 90 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 91 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_NoRoomForTM38::
# 92 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_MakeSpaceForThis
# 93 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 94 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 95 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 96 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_RematchBlaine::
# 97 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_0x8004, FAMECHECKER_BLAINE
# 98 "data/maps/CinnabarIsland_Gym/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 99 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_Gym_EventScript_RematchBlaine2
# 100 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_BlaineNoNoRematchBattle
# 101 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 102 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 103 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 104 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Text_BlaineNoNoRematchBattle::
# 105 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "FAME CHECKER$"
# 106 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 107 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_RematchBlaine2::
# 108 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RematchBlaine, MSGBOX_YESNO
# 109 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_NoRematchBlaine
# 110 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BLAINE2, CinnabarIsland_Gym_Text_RematchYesBlaine, CinnabarIsland_Gym_Text_RematchBlaineDefeat, CinnabarIsland_Gym_EventScript_PostRematchBlaine, NO_MUSIC
# 111 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 112 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 113 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 114 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_PostRematchBlaine::
# 115 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_BlainePostRematchBattle
# 116 "data/maps/CinnabarIsland_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_BLAINE2
# 117 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 118 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 119 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 120 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_NoRematchBlaine::
# 121 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_BlaineNoRematchBattle
# 122 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 123 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 124 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 125 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 126 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Erik::
# 127 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ERIK, CinnabarIsland_Gym_Text_ErikIntro, CinnabarIsland_Gym_Text_ErikDefeat
# 128 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ErikPostBattle, MSGBOX_AUTOCLOSE
# 129 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 130 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 131 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Avery::
# 132 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryIntro, CinnabarIsland_Gym_Text_AveryDefeat, CinnabarIsland_Gym_EventScript_DefeatedAvery
# 133 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryPostBattle, MSGBOX_AUTOCLOSE
# 134 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 135 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 136 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedAvery::
# 137 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer
# 138 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 139 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 140 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 141 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer::
# 142 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 143 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 144 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 145 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Derek::
# 146 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekIntro, CinnabarIsland_Gym_Text_DerekDefeat, CinnabarIsland_Gym_EventScript_DefeatedDerek
# 147 "data/maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 2
# 148 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 149 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 150 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 151 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDerek::
# 152 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer
# 153 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 154 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 155 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 156 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer::
# 157 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 158 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 159 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 160 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Zac::
# 161 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacIntro, CinnabarIsland_Gym_Text_ZacDefeat, CinnabarIsland_Gym_EventScript_DefeatedZac
# 162 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacPostBattle, MSGBOX_AUTOCLOSE
# 163 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 164 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 165 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedZac::
# 166 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer
# 167 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 168 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 169 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 170 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer::
# 171 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 172 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 173 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 174 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quinn::
# 175 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnIntro, CinnabarIsland_Gym_Text_QuinnDefeat, CinnabarIsland_Gym_EventScript_DefeatedQuinn
# 176 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnPostBattle, MSGBOX_AUTOCLOSE
# 177 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 178 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 179 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedQuinn::
# 180 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer
# 181 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 182 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 183 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 184 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer::
# 185 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 186 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 187 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 188 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Ramon::
# 189 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonIntro, CinnabarIsland_Gym_Text_RamonDefeat, CinnabarIsland_Gym_EventScript_DefeatedRamon
# 190 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonPostBattle, MSGBOX_AUTOCLOSE
# 191 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 192 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 193 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedRamon::
# 194 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer
# 195 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 196 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 197 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 198 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer::
# 199 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 200 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 201 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 202 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Dusty::
# 203 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyIntro, CinnabarIsland_Gym_Text_DustyDefeat, CinnabarIsland_Gym_EventScript_DefeatedDusty
# 204 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyPostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 206 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 207 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDusty::
# 208 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer
# 209 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 210 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 211 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 212 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer::
# 213 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 214 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 215 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 216 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymGuy::
# 217 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lock
# 218 "data/maps/CinnabarIsland_Gym/scripts.pory"
	faceplayer
# 219 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_EventScript_GymGuyPostVictory
# 220 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyAdvice
# 221 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 222 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 223 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 224 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymGuyPostVictory::
# 225 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyPostVictory
# 226 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 227 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 228 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 229 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymStatue::
# 230 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 231 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, CinnabarIsland_Gym_EventScript_GymStatuePostVictory
# 232 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatue
# 233 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 234 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 235 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 236 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymStatuePostVictory::
# 237 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatuePlayerWon
# 238 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 239 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 240 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 241 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quz1Left::
# 242 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 243 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 244 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
# 245 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 246 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 247 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quz1Right::
# 248 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 249 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 250 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
# 251 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 252 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 253 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1::
# 254 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 255 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion1, MSGBOX_YESNO
# 256 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz1Correct
# 257 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz1Incorrect
# 258 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 259 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 260 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_CorrectAnswer::
# 261 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 262 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitfanfare
# 263 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_CorrectGoOnThrough
# 264 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 265 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 266 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_IncorrectAnswer::
# 267 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 268 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_BOO
# 269 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 270 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_SorryBadCall
# 271 "data/maps/CinnabarIsland_Gym/scripts.pory"
	closemessage
# 272 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 273 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 274 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Correct::
# 275 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 276 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 277 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 278 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 279 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 280 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 281 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Complete::
# 282 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 283 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 284 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 285 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 286 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_1
# 287 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 288 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 289 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DoorAlreadyOpen::
# 290 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 291 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 292 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 293 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Incorrect::
# 294 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 295 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_EventScript_BattleQuinn
# 296 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 297 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 298 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 299 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleQuinn::
# 300 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_QuinnApproachLeft
# 301 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_QuinnApproachRight
# 302 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 303 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnIntro
# 304 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnDefeat
# 305 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 306 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 307 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 308 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 309 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 310 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_QuinnApproachLeft::
# 311 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 312 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachLeft
# 313 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 314 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 315 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 316 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_QuinnApproachRight::
# 317 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 318 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachRight
# 319 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 320 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 321 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 322 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachLeft::
# 323 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 324 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 325 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 326 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 327 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachRight::
# 328 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 329 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 330 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 331 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Left::
# 332 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 333 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 334 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
# 335 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 336 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 337 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Right::
# 338 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 339 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 340 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
# 341 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 342 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 343 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2::
# 344 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 345 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion2, MSGBOX_YESNO
# 346 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz2Incorrect
# 347 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz2Correct
# 348 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 349 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 350 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Correct::
# 351 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 352 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 353 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 354 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 355 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 356 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 357 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Complete::
# 358 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 359 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 360 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 361 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 362 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_2
# 363 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 364 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 365 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Incorrect::
# 366 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 367 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_EventScript_BattleAvery
# 368 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 369 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 370 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 371 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleAvery::
# 372 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_AveryApproachLeft
# 373 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_AveryApproachRight
# 374 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 375 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryIntro
# 376 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryDefeat
# 377 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 378 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 379 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 380 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 381 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 382 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_AveryApproachLeft::
# 383 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 384 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachLeft
# 385 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 386 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 387 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 388 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_AveryApproachRight::
# 389 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 390 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachRight
# 391 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 392 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 393 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 394 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachLeft::
# 395 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 396 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 397 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 398 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 399 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 400 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachRight::
# 401 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 402 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 403 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_in_place_faster_left
# 404 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 405 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 406 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_PlayerFaceAvery::
# 407 "data/maps/CinnabarIsland_Gym/scripts.pory"
	delay_16
# 408 "data/maps/CinnabarIsland_Gym/scripts.pory"
	delay_16
# 409 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_in_place_faster_right
# 410 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 411 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 412 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Left::
# 413 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 414 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 415 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
# 416 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 417 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 418 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Right::
# 419 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 420 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 421 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
# 422 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 423 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 424 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3::
# 425 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 426 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion3, MSGBOX_YESNO
# 427 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz3Incorrect
# 428 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz3Correct
# 429 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 430 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 431 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Correct::
# 432 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 433 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 434 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 435 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 436 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 437 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 438 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Complete::
# 439 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 440 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 441 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 442 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 443 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_3
# 444 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 445 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 446 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Incorrect::
# 447 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 448 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_EventScript_BattleRamon
# 449 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 450 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 451 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 452 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleRamon::
# 453 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_RamonApproachLeft
# 454 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_RamonApproachRight
# 455 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 456 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonIntro
# 457 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonDefeat
# 458 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 459 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 460 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 461 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 462 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 463 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_RamonApproachLeft::
# 464 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 465 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachLeft
# 466 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 467 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 468 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 469 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_RamonApproachRight::
# 470 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 471 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachRight
# 472 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 473 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 474 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 475 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachLeft::
# 476 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 477 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 478 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 479 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 480 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachRight::
# 481 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 482 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 483 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 484 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Left::
# 485 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 486 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 487 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
# 488 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 489 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 490 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Right::
# 491 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 492 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 493 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
# 494 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 495 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 496 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4::
# 497 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 498 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion4, MSGBOX_YESNO
# 499 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz4Incorrect
# 500 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz4Correct
# 501 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 502 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 503 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Correct::
# 504 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 505 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 506 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 507 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 508 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 509 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 510 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Complete::
# 511 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 512 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 513 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 514 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 515 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_4
# 516 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 517 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 518 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Incorrect::
# 519 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 520 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_EventScript_BattleDerek
# 521 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 522 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 523 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 524 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDerek::
# 525 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_DerekApproachLeft
# 526 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_DerekApproachRight
# 527 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 528 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekIntro
# 529 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekDefeat
# 530 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 531 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 532 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 533 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 534 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 535 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DerekApproachLeft::
# 536 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 537 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachLeft
# 538 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 539 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 540 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 541 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DerekApproachRight::
# 542 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 543 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachRight
# 544 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 545 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 546 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 547 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachLeft::
# 548 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 549 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 550 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 551 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 552 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachRight::
# 553 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 554 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 555 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 556 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Left::
# 557 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 558 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 559 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
# 560 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 561 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 562 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Right::
# 563 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 564 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 565 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
# 566 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 567 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 568 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5::
# 569 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 570 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion5, MSGBOX_YESNO
# 571 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz5Correct
# 572 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz5Incorrect
# 573 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 574 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 575 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Correct::
# 576 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 577 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 578 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 579 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 580 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 581 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 582 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Complete::
# 583 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 584 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 585 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 586 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 587 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_5
# 588 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 589 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 590 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Incorrect::
# 591 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 592 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_EventScript_BattleDusty
# 593 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 594 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 595 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 596 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDusty::
# 597 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_DustyApproachLeft
# 598 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_DustyApproachRight
# 599 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 600 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyIntro
# 601 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyDefeat
# 602 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 603 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 604 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 605 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 606 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 607 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DustyApproachLeft::
# 608 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 609 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachLeft
# 610 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 611 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 612 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 613 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DustyApproachRight::
# 614 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 615 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachRight
# 616 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 617 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 618 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 619 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachLeft::
# 620 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 621 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 622 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 623 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 624 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachRight::
# 625 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 626 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 627 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 628 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Left::
# 629 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 630 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 631 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
# 632 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 633 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 634 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Right::
# 635 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 636 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 637 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
# 638 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 639 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 640 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6::
# 641 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 642 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion6, MSGBOX_YESNO
# 643 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz6Incorrect
# 644 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz6Correct
# 645 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 646 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 647 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Correct::
# 648 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 649 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 650 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 651 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 652 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 653 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 654 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Complete::
# 655 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 656 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 657 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 658 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 659 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_6
# 660 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 661 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 662 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Incorrect::
# 663 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 664 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_EventScript_BattleZac
# 665 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 666 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 667 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 668 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleZac::
# 669 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_ZacApproachLeft
# 670 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_ZacApproachRight
# 671 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 672 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacIntro
# 673 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacDefeat
# 674 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 675 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 676 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 677 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 678 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 679 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_ZacApproachLeft::
# 680 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 681 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachLeft
# 682 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 683 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 684 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 685 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_ZacApproachRight::
# 686 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 687 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachRight
# 688 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 689 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 690 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 691 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachLeft::
# 692 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 693 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 694 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 695 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 696 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachRight::
# 697 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 698 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 699 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 700 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor1::
# 701 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 702 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 703 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 704 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 705 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 706 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27, 10, METATILE_CinnabarGym_Floor, 0
# 707 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 28, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 708 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 709 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 710 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor2::
# 711 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 712 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 713 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 714 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 715 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 716 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 10, METATILE_CinnabarGym_Floor, 0
# 717 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 19, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 718 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 719 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 720 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor3::
# 721 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 722 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 15, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 723 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 16, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 724 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 16, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 725 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 17, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 726 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 17, METATILE_CinnabarGym_Floor, 0
# 727 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 19, 17, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 728 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 729 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 730 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor4::
# 731 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 21, METATILE_CinnabarGym_Wall_RetractedBarrier, 1
# 732 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 22, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 733 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 23, METATILE_CinnabarGym_Floor, 0
# 734 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 735 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 736 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor5::
# 737 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 16, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 738 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 16, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 739 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 17, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 740 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 17, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 741 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 18, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 742 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 18, METATILE_CinnabarGym_Floor, 0
# 743 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  7, 18, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 744 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 745 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 746 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor6::
# 747 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 748 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 749 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 750 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 751 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 752 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 10, METATILE_CinnabarGym_Floor, 0
# 753 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  7, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 754 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
