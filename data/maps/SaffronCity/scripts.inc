# 1 "data/maps/SaffronCity/scripts.pory"

# 2 "data/maps/SaffronCity/scripts.pory"
.set LOCALID_DOOR_GUARD_GRUNT, 6
# 3 "data/maps/SaffronCity/scripts.pory"

# 4 "data/maps/SaffronCity/scripts.pory"
SaffronCity_MapScripts::
# 5 "data/maps/SaffronCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_OnTransition
# 6 "data/maps/SaffronCity/scripts.pory"
	.byte 0
# 7 "data/maps/SaffronCity/scripts.pory"

# 8 "data/maps/SaffronCity/scripts.pory"
SaffronCity_OnTransition::
# 9 "data/maps/SaffronCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SAFFRON_CITY
# 10 "data/maps/SaffronCity/scripts.pory"
	call_if_unset FLAG_RESCUED_MR_FUJI, SaffronCity_EventScript_MoveDoorGuardGrunt
# 11 "data/maps/SaffronCity/scripts.pory"
	end
# 12 "data/maps/SaffronCity/scripts.pory"

# 13 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_MoveDoorGuardGrunt::
# 14 "data/maps/SaffronCity/scripts.pory"
	setobjectxyperm LOCALID_DOOR_GUARD_GRUNT, 33, 31
# 15 "data/maps/SaffronCity/scripts.pory"
	return
# 16 "data/maps/SaffronCity/scripts.pory"

# 17 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt1::
# 18 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_WhatDoYouWantGetLost, MSGBOX_NPC
# 19 "data/maps/SaffronCity/scripts.pory"
	end
# 20 "data/maps/SaffronCity/scripts.pory"

# 21 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt2::
# 22 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_BossTakeTownForTeamRocket, MSGBOX_NPC
# 23 "data/maps/SaffronCity/scripts.pory"
	end
# 24 "data/maps/SaffronCity/scripts.pory"

# 25 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt3::
# 26 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_DontGetDefiantOrIllHurtYou, MSGBOX_NPC
# 27 "data/maps/SaffronCity/scripts.pory"
	end
# 28 "data/maps/SaffronCity/scripts.pory"

# 29 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt4::
# 30 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SaffronBelongsToTeamRocket, MSGBOX_NPC
# 31 "data/maps/SaffronCity/scripts.pory"
	end
# 32 "data/maps/SaffronCity/scripts.pory"

# 33 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt5::
# 34 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_CriminalLifeMakesMeFeelAlive, MSGBOX_NPC
# 35 "data/maps/SaffronCity/scripts.pory"
	end
# 36 "data/maps/SaffronCity/scripts.pory"

# 37 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt6::
# 38 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_WatchWhereYoureWalking, MSGBOX_NPC
# 39 "data/maps/SaffronCity/scripts.pory"
	end
# 40 "data/maps/SaffronCity/scripts.pory"

# 41 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt7::
# 42 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_WeCanExploitMonsAroundWorld, MSGBOX_NPC
# 43 "data/maps/SaffronCity/scripts.pory"
	end
# 44 "data/maps/SaffronCity/scripts.pory"

# 45 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_DoorGuardGrunt::
# 46 "data/maps/SaffronCity/scripts.pory"
	lock
# 47 "data/maps/SaffronCity/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, SaffronCity_EventScript_DoorGuardAsleep
# 48 "data/maps/SaffronCity/scripts.pory"
	applymovement LOCALID_DOOR_GUARD_GRUNT, Common_Movement_FacePlayer
# 49 "data/maps/SaffronCity/scripts.pory"
	waitmovement 0
# 50 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_ImASecurityGuard
# 51 "data/maps/SaffronCity/scripts.pory"
	release
# 52 "data/maps/SaffronCity/scripts.pory"
	end
# 53 "data/maps/SaffronCity/scripts.pory"

# 54 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_DoorGuardAsleep::
# 55 "data/maps/SaffronCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 56 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_HesTakingASnooze
# 57 "data/maps/SaffronCity/scripts.pory"
	release
# 58 "data/maps/SaffronCity/scripts.pory"
	end
# 59 "data/maps/SaffronCity/scripts.pory"

# 60 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_WorkerM::
# 61 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_YouBeatTeamRocket, MSGBOX_NPC
# 62 "data/maps/SaffronCity/scripts.pory"
	end
# 63 "data/maps/SaffronCity/scripts.pory"

# 64 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Youngster::
# 65 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SafeToGoOutAgain, MSGBOX_NPC
# 66 "data/maps/SaffronCity/scripts.pory"
	end
# 67 "data/maps/SaffronCity/scripts.pory"

# 68 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Lass::
# 69 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_PeopleComingBackToSaffron, MSGBOX_NPC
# 70 "data/maps/SaffronCity/scripts.pory"
	end
# 71 "data/maps/SaffronCity/scripts.pory"

# 72 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Boy::
# 73 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_FlewHereOnPidgeot, MSGBOX_NPC
# 74 "data/maps/SaffronCity/scripts.pory"
	end
# 75 "data/maps/SaffronCity/scripts.pory"

# 76 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Pidgeot::
# 77 "data/maps/SaffronCity/scripts.pory"
	lock
# 78 "data/maps/SaffronCity/scripts.pory"
	faceplayer
# 79 "data/maps/SaffronCity/scripts.pory"
	waitse
# 80 "data/maps/SaffronCity/scripts.pory"
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
# 81 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_Pidgeot
# 82 "data/maps/SaffronCity/scripts.pory"
	waitmoncry
# 83 "data/maps/SaffronCity/scripts.pory"
	release
# 84 "data/maps/SaffronCity/scripts.pory"
	end
# 85 "data/maps/SaffronCity/scripts.pory"

# 86 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Man::
# 87 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SawRocketBossEscaping, MSGBOX_NPC
# 88 "data/maps/SaffronCity/scripts.pory"
	end
# 89 "data/maps/SaffronCity/scripts.pory"

# 90 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_CitySign::
# 91 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_CitySign, MSGBOX_SIGN
# 92 "data/maps/SaffronCity/scripts.pory"
	end
# 93 "data/maps/SaffronCity/scripts.pory"

# 94 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_DojoSign::
# 95 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_FightingDojo, MSGBOX_SIGN
# 96 "data/maps/SaffronCity/scripts.pory"
	end
# 97 "data/maps/SaffronCity/scripts.pory"

# 98 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_GymSign::
# 99 "data/maps/SaffronCity/scripts.pory"
	lockall
# 100 "data/maps/SaffronCity/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 0
# 101 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_GymSign
# 102 "data/maps/SaffronCity/scripts.pory"
	releaseall
# 103 "data/maps/SaffronCity/scripts.pory"
	end
# 104 "data/maps/SaffronCity/scripts.pory"

# 105 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_TrainerTips1::
# 106 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_FullHealCuresStatus, MSGBOX_SIGN
# 107 "data/maps/SaffronCity/scripts.pory"
	end
# 108 "data/maps/SaffronCity/scripts.pory"

# 109 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_TrainerTips2::
# 110 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_GreatBallImprovedCatchRate, MSGBOX_SIGN
# 111 "data/maps/SaffronCity/scripts.pory"
	end
# 112 "data/maps/SaffronCity/scripts.pory"

# 113 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_SilphCoSign::
# 114 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SilphCoSign, MSGBOX_SIGN
# 115 "data/maps/SaffronCity/scripts.pory"
	end
# 116 "data/maps/SaffronCity/scripts.pory"

# 117 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_MrPsychicsHouseSign::
# 118 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_MrPsychicsHouse, MSGBOX_SIGN
# 119 "data/maps/SaffronCity/scripts.pory"
	end
# 120 "data/maps/SaffronCity/scripts.pory"

# 121 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_SilphProductSign::
# 122 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SilphsLatestProduct, MSGBOX_SIGN
# 123 "data/maps/SaffronCity/scripts.pory"
	end
# 124 "data/maps/SaffronCity/scripts.pory"

# 125 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_TrainerFanClubSign::
# 126 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 127 "data/maps/SaffronCity/scripts.pory"
	end
# 128 "data/maps/SaffronCity/scripts.pory"

# 129 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Bro::
# 130 "data/maps/SaffronCity/scripts.pory"
	goto_if_set FLAG_CAUGHT_LATIOS, SaffronCity_EventScript_End
# 131 "data/maps/SaffronCity/scripts.pory"
	goto_if_set FLAG_LATIOS_CHECKED, SaffronCity_EventScript_Orbing
# 132 "data/maps/SaffronCity/scripts.pory"
	goto SaffronCity_EventScript_OrbingCheck
# 133 "data/maps/SaffronCity/scripts.pory"

# 134 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Sis::
# 135 "data/maps/SaffronCity/scripts.pory"
	goto_if_set FLAG_CAUGHT_LATIAS, SaffronCity_EventScript_End
# 136 "data/maps/SaffronCity/scripts.pory"
	goto_if_set FLAG_LATIOS_CHECKED, SaffronCity_EventScript_Orbing
# 137 "data/maps/SaffronCity/scripts.pory"
	goto SaffronCity_EventScript_OrbingCheck
# 138 "data/maps/SaffronCity/scripts.pory"

# 139 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_OrbingCheck::
# 140 "data/maps/SaffronCity/scripts.pory"
	goto_if_set FLAG_CAUGHT_LATIOS, SaffronCity_EventScript_End
# 141 "data/maps/SaffronCity/scripts.pory"
	goto_if_set FLAG_LATIOS_CHECKED, SaffronCity_EventScript_Orbing
# 142 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_RegiceCheck
# 143 "data/maps/SaffronCity/scripts.pory"
	closemessage
# 144 "data/maps/SaffronCity/scripts.pory"
	setvar VAR_0x8005, 1
# 145 "data/maps/SaffronCity/scripts.pory"
	special IsDodrioInParty
# 146 "data/maps/SaffronCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SaffronCity_EventScript_NoEligiblePkmn
# 147 "data/maps/SaffronCity/scripts.pory"
	setvar 0x8004, FAMECHECKER_OAK
# 148 "data/maps/SaffronCity/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 149 "data/maps/SaffronCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_EventScript_Flag
# 150 "data/maps/SaffronCity/scripts.pory"
	release
# 151 "data/maps/SaffronCity/scripts.pory"
	end
# 152 "data/maps/SaffronCity/scripts.pory"

# 153 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_NoEligiblePkmn::
# 154 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_NoEligiblePkmn
# 155 "data/maps/SaffronCity/scripts.pory"
	release
# 156 "data/maps/SaffronCity/scripts.pory"
	end
# 157 "data/maps/SaffronCity/scripts.pory"

# 158 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Flag::
# 159 "data/maps/SaffronCity/scripts.pory"
	setvar 0x8004, FAMECHECKER_DAISY
# 160 "data/maps/SaffronCity/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 161 "data/maps/SaffronCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_EventScript_NoEligiblePkmn
# 162 "data/maps/SaffronCity/scripts.pory"
	setflag FLAG_LATIOS_CHECKED
# 163 "data/maps/SaffronCity/scripts.pory"
	goto SaffronCity_EventScript_Orbing
# 164 "data/maps/SaffronCity/scripts.pory"
	end
# 165 "data/maps/SaffronCity/scripts.pory"

# 166 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Orbing::
# 167 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_Whitney, MSGBOX_YESNO
# 168 "data/maps/SaffronCity/scripts.pory"
	closemessage
# 169 "data/maps/SaffronCity/scripts.pory"
	delay 40
# 170 "data/maps/SaffronCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SaffronCity_EventScript_NoWhitney
# 171 "data/maps/SaffronCity/scripts.pory"
	trainerbattle_single TRAINER_AQUA_LEADER, SaffronCity_Text_YesWhitney, SaffronCity_Text_PostWhitney, SaffronCity_EventScript_PostWhitney, NO_MUSIC
# 172 "data/maps/SaffronCity/scripts.pory"
	release
# 173 "data/maps/SaffronCity/scripts.pory"
	end
# 174 "data/maps/SaffronCity/scripts.pory"

# 175 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_PostWhitney::
# 176 "data/maps/SaffronCity/scripts.pory"
	special HealPlayerParty
# 177 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_WhitneyPostBattle
# 178 "data/maps/SaffronCity/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 179 "data/maps/SaffronCity/scripts.pory"
	special QuestLog_CutRecording
# 180 "data/maps/SaffronCity/scripts.pory"
	lock
# 181 "data/maps/SaffronCity/scripts.pory"
	faceplayer
# 182 "data/maps/SaffronCity/scripts.pory"
	setwildbattle SPECIES_LATIOS, 70
# 183 "data/maps/SaffronCity/scripts.pory"
	waitse
# 184 "data/maps/SaffronCity/scripts.pory"
	playmoncry SPECIES_LATIOS, CRY_MODE_ENCOUNTER
# 185 "data/maps/SaffronCity/scripts.pory"
	message Text_Gyaoo
# 186 "data/maps/SaffronCity/scripts.pory"
	waitmessage
# 187 "data/maps/SaffronCity/scripts.pory"
	waitmoncry
# 188 "data/maps/SaffronCity/scripts.pory"
	delay 10
# 189 "data/maps/SaffronCity/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 190 "data/maps/SaffronCity/scripts.pory"
	waitbuttonpress
# 191 "data/maps/SaffronCity/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 192 "data/maps/SaffronCity/scripts.pory"
	special StartLegendaryBattle
# 193 "data/maps/SaffronCity/scripts.pory"
	waitstate
# 194 "data/maps/SaffronCity/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 195 "data/maps/SaffronCity/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 196 "data/maps/SaffronCity/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SaffronCity_EventScript_DefeatedCelebi
# 197 "data/maps/SaffronCity/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SaffronCity_EventScript_RanFromCelebi
# 198 "data/maps/SaffronCity/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SaffronCity_EventScript_RanFromCelebi
# 199 "data/maps/SaffronCity/scripts.pory"
	setflag FLAG_CAUGHT_LATIOS
# 200 "data/maps/SaffronCity/scripts.pory"
	release
# 201 "data/maps/SaffronCity/scripts.pory"
	end
# 202 "data/maps/SaffronCity/scripts.pory"

# 203 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_PostWhitneyLatias::
# 204 "data/maps/SaffronCity/scripts.pory"
	special HealPlayerParty
# 205 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_WhitneyPostBattle
# 206 "data/maps/SaffronCity/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 207 "data/maps/SaffronCity/scripts.pory"
	special QuestLog_CutRecording
# 208 "data/maps/SaffronCity/scripts.pory"
	lock
# 209 "data/maps/SaffronCity/scripts.pory"
	faceplayer
# 210 "data/maps/SaffronCity/scripts.pory"
	setwildbattle SPECIES_LATIAS, 70
# 211 "data/maps/SaffronCity/scripts.pory"
	waitse
# 212 "data/maps/SaffronCity/scripts.pory"
	playmoncry SPECIES_LATIAS, CRY_MODE_ENCOUNTER
# 213 "data/maps/SaffronCity/scripts.pory"
	message Text_Gyaoo
# 214 "data/maps/SaffronCity/scripts.pory"
	waitmessage
# 215 "data/maps/SaffronCity/scripts.pory"
	waitmoncry
# 216 "data/maps/SaffronCity/scripts.pory"
	delay 10
# 217 "data/maps/SaffronCity/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 218 "data/maps/SaffronCity/scripts.pory"
	waitbuttonpress
# 219 "data/maps/SaffronCity/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 220 "data/maps/SaffronCity/scripts.pory"
	special StartLegendaryBattle
# 221 "data/maps/SaffronCity/scripts.pory"
	waitstate
# 222 "data/maps/SaffronCity/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 223 "data/maps/SaffronCity/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 224 "data/maps/SaffronCity/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SaffronCity_EventScript_DefeatedCelebi
# 225 "data/maps/SaffronCity/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SaffronCity_EventScript_RanFromCelebi
# 226 "data/maps/SaffronCity/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SaffronCity_EventScript_RanFromCelebi
# 227 "data/maps/SaffronCity/scripts.pory"
	setflag FLAG_CAUGHT_LATIOS
# 228 "data/maps/SaffronCity/scripts.pory"
	release
# 229 "data/maps/SaffronCity/scripts.pory"
	end
# 230 "data/maps/SaffronCity/scripts.pory"

# 231 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_DefeatedCelebi::
# 232 "data/maps/SaffronCity/scripts.pory"
	setflag FLAG_CAUGHT_LATIOS
# 233 "data/maps/SaffronCity/scripts.pory"
	goto EventScript_RemoveStaticMon
# 234 "data/maps/SaffronCity/scripts.pory"
	end
# 235 "data/maps/SaffronCity/scripts.pory"

# 236 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RanFromCelebi::
# 237 "data/maps/SaffronCity/scripts.pory"
	setvar VAR_0x8004, SPECIES_CELEBI
# 238 "data/maps/SaffronCity/scripts.pory"
	goto EventScript_MonFlewAway
# 239 "data/maps/SaffronCity/scripts.pory"
	end
# 240 "data/maps/SaffronCity/scripts.pory"

# 241 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_NoWhitney::
# 242 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_NoWhitney
# 243 "data/maps/SaffronCity/scripts.pory"
	release
# 244 "data/maps/SaffronCity/scripts.pory"
	end
# 245 "data/maps/SaffronCity/scripts.pory"

# 246 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_End::
# 247 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_EndWhitney
# 248 "data/maps/SaffronCity/scripts.pory"
	release
# 249 "data/maps/SaffronCity/scripts.pory"
	end
# 250 "data/maps/SaffronCity/scripts.pory"

# 251 "data/maps/SaffronCity/scripts.pory"
SaffronCity_Text_NoEligiblePkmn::
# 252 "data/maps/SaffronCity/scripts.pory"
	.string "You have not meet the requirements.\p"
# 253 "data/maps/SaffronCity/scripts.pory"
	.string "Come back when you do.$"
# 254 "data/maps/SaffronCity/scripts.pory"

# 255 "data/maps/SaffronCity/scripts.pory"
SaffronCity_Text_RegiceCheck::
# 256 "data/maps/SaffronCity/scripts.pory"
	.string "Hello there {PLAYER}.\n"
# 257 "data/maps/SaffronCity/scripts.pory"
	.string "I am the Frozen Mirage Trainer.\l"
# 258 "data/maps/SaffronCity/scripts.pory"
	.string "Beat me and you shall face a\l"
# 259 "data/maps/SaffronCity/scripts.pory"
	.string "special POKEMON.\l"
# 260 "data/maps/SaffronCity/scripts.pory"
	.string "But first, I want to see a\l"
# 261 "data/maps/SaffronCity/scripts.pory"
	.string "Three Headed Mascot,\l"
# 262 "data/maps/SaffronCity/scripts.pory"
	.string "and knowledge on the Ice queen.$"
# 263 "data/maps/SaffronCity/scripts.pory"

# 264 "data/maps/SaffronCity/scripts.pory"
SaffronCity_Text_Whitney::
# 265 "data/maps/SaffronCity/scripts.pory"
	.string "So, you wish to face me?$"
# 266 "data/maps/SaffronCity/scripts.pory"

# 267 "data/maps/SaffronCity/scripts.pory"
SaffronCity_Text_YesWhitney::
# 268 "data/maps/SaffronCity/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 269 "data/maps/SaffronCity/scripts.pory"

# 270 "data/maps/SaffronCity/scripts.pory"
SaffronCity_Text_PostWhitney::
# 271 "data/maps/SaffronCity/scripts.pory"
	.string "So you are worthy...$"
# 272 "data/maps/SaffronCity/scripts.pory"

# 273 "data/maps/SaffronCity/scripts.pory"
SaffronCity_Text_WhitneyPostBattle::
# 274 "data/maps/SaffronCity/scripts.pory"
	.string "Alright, you have bested me./p"
# 275 "data/maps/SaffronCity/scripts.pory"
	.string "Be prepared to face LATIOS!$"
# 276 "data/maps/SaffronCity/scripts.pory"

# 277 "data/maps/SaffronCity/scripts.pory"
SaffronCity_Text_EndWhitney::
# 278 "data/maps/SaffronCity/scripts.pory"
	.string "You had one chance,\n"
# 279 "data/maps/SaffronCity/scripts.pory"
	.string "Goodbye.$"
# 280 "data/maps/SaffronCity/scripts.pory"

# 281 "data/maps/SaffronCity/scripts.pory"
SaffronCity_Text_NoWhitney::
# 282 "data/maps/SaffronCity/scripts.pory"
	.string "Alright, take your time.$"
