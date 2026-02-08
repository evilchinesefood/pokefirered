# 1 "data/maps/Route25_SeaCottage/scripts.pory"

# 2 "data/maps/Route25_SeaCottage/scripts.pory"
.equ LOCALID_BILL_HUMAN,    1
# 3 "data/maps/Route25_SeaCottage/scripts.pory"
.equ LOCALID_BILL_CLEFAIRY, 2
# 4 "data/maps/Route25_SeaCottage/scripts.pory"

# 5 "data/maps/Route25_SeaCottage/scripts.pory"
.equ BILL_IN_TELEPORTER,     FLAG_TEMP_2
# 6 "data/maps/Route25_SeaCottage/scripts.pory"
.equ RETURN_AFTER_SS_TICKET, FLAG_TEMP_3
# 7 "data/maps/Route25_SeaCottage/scripts.pory"

# 8 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_MapScripts::
# 9 "data/maps/Route25_SeaCottage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route25_SeaCottage_OnTransition
# 10 "data/maps/Route25_SeaCottage/scripts.pory"
	.byte 0
# 11 "data/maps/Route25_SeaCottage/scripts.pory"

# 12 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_OnTransition::
# 13 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_unset FLAG_HELPED_BILL_IN_SEA_COTTAGE, Route25_SeaCottage_EventScript_HideClefairyBill
# 14 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_set FLAG_GOT_SS_TICKET, Route25_SeaCottage_EventScript_SetReturnedAfterSSTicket
# 15 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 16 "data/maps/Route25_SeaCottage/scripts.pory"

# 17 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_HideClefairyBill::
# 18 "data/maps/Route25_SeaCottage/scripts.pory"
	clearflag FLAG_HIDE_BILL_CLEFAIRY
# 19 "data/maps/Route25_SeaCottage/scripts.pory"
	setobjectxyperm LOCALID_BILL_HUMAN, 3, 3
# 20 "data/maps/Route25_SeaCottage/scripts.pory"
	return
# 21 "data/maps/Route25_SeaCottage/scripts.pory"

# 22 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_SetReturnedAfterSSTicket::
# 23 "data/maps/Route25_SeaCottage/scripts.pory"
	setflag RETURN_AFTER_SS_TICKET
# 24 "data/maps/Route25_SeaCottage/scripts.pory"
	return
# 25 "data/maps/Route25_SeaCottage/scripts.pory"

# 26 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_Bill::
# 27 "data/maps/Route25_SeaCottage/scripts.pory"
	lock
# 28 "data/maps/Route25_SeaCottage/scripts.pory"
	faceplayer
# 29 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_set RETURN_AFTER_SS_TICKET, Route25_SeaCottage_EventScript_BillGoLookAtPC
# 30 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_set FLAG_GOT_SS_TICKET, Route25_SeaCottage_EventScript_BillGoToSSAnne
# 31 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_set FLAG_HELPED_BILL_IN_SEA_COTTAGE, Route25_SeaCottage_EventScript_BillGiveSSTicket
# 32 "data/maps/Route25_SeaCottage/scripts.pory"
	checkplayergender
# 33 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route25_SeaCottage_EventScript_BillAskForHelpMale
# 34 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route25_SeaCottage_EventScript_BillAskForHelpFemale
# 35 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 36 "data/maps/Route25_SeaCottage/scripts.pory"

# 37 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelpMale::
# 38 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_ImBillHelpMeOutPal, MSGBOX_YESNO
# 39 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelp
# 40 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 41 "data/maps/Route25_SeaCottage/scripts.pory"

# 42 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelpFemale::
# 43 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_ImBillHelpMeOutLady, MSGBOX_YESNO
# 44 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelp
# 45 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 46 "data/maps/Route25_SeaCottage/scripts.pory"

# 47 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelp::
# 48 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route25_SeaCottage_EventScript_DeclineHelpBill
# 49 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_RunCellSeparationOnPC
# 50 "data/maps/Route25_SeaCottage/scripts.pory"
	closemessage
# 51 "data/maps/Route25_SeaCottage/scripts.pory"
	delay 10
# 52 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route25_SeaCottage_EventScript_BillWalkToTeleporterSouth
# 53 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route25_SeaCottage_EventScript_BillWalkToTeleporter
# 54 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route25_SeaCottage_EventScript_BillWalkToTeleporter
# 55 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route25_SeaCottage_EventScript_BillWalkToTeleporter
# 56 "data/maps/Route25_SeaCottage/scripts.pory"
	opendoor 10, 3
# 57 "data/maps/Route25_SeaCottage/scripts.pory"
	waitdooranim
# 58 "data/maps/Route25_SeaCottage/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_Movement_BillEnterTeleporter
# 59 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route25_SeaCottage/scripts.pory"
	removeobject LOCALID_BILL_CLEFAIRY
# 61 "data/maps/Route25_SeaCottage/scripts.pory"
	playse SE_CONTEST_CURTAIN_FALL
# 62 "data/maps/Route25_SeaCottage/scripts.pory"
	closedoor 10, 3
# 63 "data/maps/Route25_SeaCottage/scripts.pory"
	waitdooranim
# 64 "data/maps/Route25_SeaCottage/scripts.pory"
	setflag BILL_IN_TELEPORTER
# 65 "data/maps/Route25_SeaCottage/scripts.pory"
	release
# 66 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 67 "data/maps/Route25_SeaCottage/scripts.pory"

# 68 "data/maps/Route25_SeaCottage/scripts.pory"
@ Just returns after message, execution continues as if player had said yes
# 69 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_DeclineHelpBill::
# 70 "data/maps/Route25_SeaCottage/scripts.pory"
	checkplayergender
# 71 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route25_SeaCottage_EventScript_DeclineHelpBillMale
# 72 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route25_SeaCottage_EventScript_DeclineHelpBillFemale
# 73 "data/maps/Route25_SeaCottage/scripts.pory"
	return
# 74 "data/maps/Route25_SeaCottage/scripts.pory"

# 75 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_DeclineHelpBillMale::
# 76 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_NoPleaseChief
# 77 "data/maps/Route25_SeaCottage/scripts.pory"
	return
# 78 "data/maps/Route25_SeaCottage/scripts.pory"

# 79 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_DeclineHelpBillFemale::
# 80 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_NoPleaseBeautiful
# 81 "data/maps/Route25_SeaCottage/scripts.pory"
	return
# 82 "data/maps/Route25_SeaCottage/scripts.pory"

# 83 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillWalkToTeleporterSouth::
# 84 "data/maps/Route25_SeaCottage/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_Movement_BillWalkToTeleporterSouth
# 85 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route25_SeaCottage/scripts.pory"
	return
# 87 "data/maps/Route25_SeaCottage/scripts.pory"

# 88 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillWalkToTeleporter::
# 89 "data/maps/Route25_SeaCottage/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_Movement_BillWalkToTeleporter
# 90 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route25_SeaCottage/scripts.pory"
	return
# 92 "data/maps/Route25_SeaCottage/scripts.pory"

# 93 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillGoToSSAnne::
# 94 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_SSAnnePartyYouGoInstead
# 95 "data/maps/Route25_SeaCottage/scripts.pory"
	release
# 96 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 97 "data/maps/Route25_SeaCottage/scripts.pory"

# 98 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillGiveSSTicket::
# 99 "data/maps/Route25_SeaCottage/scripts.pory"
	famechecker FAMECHECKER_BILL, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 100 "data/maps/Route25_SeaCottage/scripts.pory"
	checkplayergender
# 101 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route25_SeaCottage_EventScript_BillThanksMale
# 102 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route25_SeaCottage_EventScript_BillThanksFemale
# 103 "data/maps/Route25_SeaCottage/scripts.pory"
	checkitemspace ITEM_SS_TICKET
# 104 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route25_SeaCottage_EventScript_NoRoomForSSTicket
# 105 "data/maps/Route25_SeaCottage/scripts.pory"
	giveitem_msg Route25_SeaCottage_Text_ReceivedSSTicketFromBill, ITEM_SS_TICKET, 1, MUS_OBTAIN_KEY_ITEM
# 106 "data/maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_GOT_SS_TICKET_DUP
# 107 "data/maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_HIDE_NUGGET_BRIDGE_ROCKET
# 108 "data/maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_GOT_SS_TICKET
# 109 "data/maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_UNBLOCK_CERULEAN
# 110 "data/maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_SYS_NOT_SOMEONES_PC
# 111 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillGoToSSAnne
# 112 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 113 "data/maps/Route25_SeaCottage/scripts.pory"

# 114 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillThanksMale::
# 115 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_ThanksBudTakeThis
# 116 "data/maps/Route25_SeaCottage/scripts.pory"
	return
# 117 "data/maps/Route25_SeaCottage/scripts.pory"

# 118 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillThanksFemale::
# 119 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_ThanksLadyTakeThis
# 120 "data/maps/Route25_SeaCottage/scripts.pory"
	return
# 121 "data/maps/Route25_SeaCottage/scripts.pory"

# 122 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_NoRoomForSSTicket::
# 123 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_YouveGotTooMuchStuff
# 124 "data/maps/Route25_SeaCottage/scripts.pory"
	release
# 125 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 126 "data/maps/Route25_SeaCottage/scripts.pory"

# 127 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillGoLookAtPC::
# 128 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, FAMECHECKER_BILL
# 129 "data/maps/Route25_SeaCottage/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 130 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route25_SeaCottage_EventScript_BillCastform
# 131 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_CheckOutRareMonsOnPC
# 132 "data/maps/Route25_SeaCottage/scripts.pory"
	release
# 133 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 134 "data/maps/Route25_SeaCottage/scripts.pory"

# 135 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillCastform::
# 136 "data/maps/Route25_SeaCottage/scripts.pory"
	lock
# 137 "data/maps/Route25_SeaCottage/scripts.pory"
	faceplayer
# 138 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CASTFORM
# 139 "data/maps/Route25_SeaCottage/scripts.pory"
	givemon SPECIES_CASTFORM, 25
# 140 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route25_SeaCottage_EventScript_GetEeveeParty
# 141 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route25_SeaCottage_EventScript_GetEeveePC
# 142 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 143 "data/maps/Route25_SeaCottage/scripts.pory"
	release
# 144 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 145 "data/maps/Route25_SeaCottage/scripts.pory"

# 146 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_GetEeveeParty::
# 147 "data/maps/Route25_SeaCottage/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 148 "data/maps/Route25_SeaCottage/scripts.pory"
	message Route25_SeaCottage_Text_ObtainedAnEevee
# 149 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmessage
# 150 "data/maps/Route25_SeaCottage/scripts.pory"
	waitfanfare
# 151 "data/maps/Route25_SeaCottage/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CASTFORM
# 152 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 153 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route25_SeaCottage_EventScript_SetGotEevee
# 154 "data/maps/Route25_SeaCottage/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 155 "data/maps/Route25_SeaCottage/scripts.pory"
	call EventScript_ChangePokemonNickname
# 156 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_SetGotEevee
# 157 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 158 "data/maps/Route25_SeaCottage/scripts.pory"

# 159 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_GetEeveePC::
# 160 "data/maps/Route25_SeaCottage/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 161 "data/maps/Route25_SeaCottage/scripts.pory"
	message Route25_SeaCottage_Text_ObtainedAnEevee
# 162 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmessage
# 163 "data/maps/Route25_SeaCottage/scripts.pory"
	waitfanfare
# 164 "data/maps/Route25_SeaCottage/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CASTFORM
# 165 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 166 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route25_SeaCottage_EventScript_TransferEeveeToPC
# 167 "data/maps/Route25_SeaCottage/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 168 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_TransferEeveeToPC
# 169 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 170 "data/maps/Route25_SeaCottage/scripts.pory"

# 171 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_TransferEeveeToPC::
# 172 "data/maps/Route25_SeaCottage/scripts.pory"
	call EventScript_TransferredToPC
# 173 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_SetGotEevee
# 174 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 175 "data/maps/Route25_SeaCottage/scripts.pory"

# 176 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Text_ObtainedAnEevee::
# 177 "data/maps/Route25_SeaCottage/scripts.pory"
	.string "Obtained an Eevee!$"
# 178 "data/maps/Route25_SeaCottage/scripts.pory"

# 179 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_SetGotEevee::
# 180 "data/maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_GOT_CASTFORM
# 181 "data/maps/Route25_SeaCottage/scripts.pory"
	release
# 182 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 183 "data/maps/Route25_SeaCottage/scripts.pory"

# 184 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToTeleporter::
# 185 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 186 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 187 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end
# 188 "data/maps/Route25_SeaCottage/scripts.pory"

# 189 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToTeleporterSouth::
# 190 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 191 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 192 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 193 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_left
# 194 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_in_place_faster_up
# 195 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end
# 196 "data/maps/Route25_SeaCottage/scripts.pory"

# 197 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillEnterTeleporter::
# 198 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 199 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end
# 200 "data/maps/Route25_SeaCottage/scripts.pory"

# 201 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_Computer::
# 202 "data/maps/Route25_SeaCottage/scripts.pory"
	lockall
# 203 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_set RETURN_AFTER_SS_TICKET, Route25_SeaCottage_EventScript_OpenBillsMonList
# 204 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_set BILL_IN_TELEPORTER, Route25_SeaCottage_EventScript_RunCellSeparator
# 205 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_TeleporterIsDisplayed
# 206 "data/maps/Route25_SeaCottage/scripts.pory"
	releaseall
# 207 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 208 "data/maps/Route25_SeaCottage/scripts.pory"

# 209 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_RunCellSeparator::
# 210 "data/maps/Route25_SeaCottage/scripts.pory"
	fadeoutbgm 0
# 211 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_InitiatedTeleportersCellSeparator
# 212 "data/maps/Route25_SeaCottage/scripts.pory"
	closemessage
# 213 "data/maps/Route25_SeaCottage/scripts.pory"
	clearflag BILL_IN_TELEPORTER
# 214 "data/maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_HELPED_BILL_IN_SEA_COTTAGE
# 215 "data/maps/Route25_SeaCottage/scripts.pory"
	special SpawnCameraObject
# 216 "data/maps/Route25_SeaCottage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route25_SeaCottage_Movement_CameraPanToTeleporters
# 217 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route25_SeaCottage/scripts.pory"
	delay 35
# 219 "data/maps/Route25_SeaCottage/scripts.pory"
	playse SE_PIN
# 220 "data/maps/Route25_SeaCottage/scripts.pory"
	waitse
# 221 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, 0
# 222 "data/maps/Route25_SeaCottage/scripts.pory"
	special AnimateTeleporterHousing
# 223 "data/maps/Route25_SeaCottage/scripts.pory"
	delay 10
# 224 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 225 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 226 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 227 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 228 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 229 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 230 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 231 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, 1
# 232 "data/maps/Route25_SeaCottage/scripts.pory"
	special AnimateTeleporterHousing
# 233 "data/maps/Route25_SeaCottage/scripts.pory"
	playse SE_WARP_IN
# 234 "data/maps/Route25_SeaCottage/scripts.pory"
	special AnimateTeleporterCable
# 235 "data/maps/Route25_SeaCottage/scripts.pory"
	waitse
# 236 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 237 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 238 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 239 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 240 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 241 "data/maps/Route25_SeaCottage/scripts.pory"
	opendoor 3, 3
# 242 "data/maps/Route25_SeaCottage/scripts.pory"
	waitdooranim
# 243 "data/maps/Route25_SeaCottage/scripts.pory"
	fadeinbgm 0
# 244 "data/maps/Route25_SeaCottage/scripts.pory"
	addobject LOCALID_BILL_HUMAN
# 245 "data/maps/Route25_SeaCottage/scripts.pory"
	clearflag FLAG_HIDE_BILL_HUMAN_SEA_COTTAGE
# 246 "data/maps/Route25_SeaCottage/scripts.pory"
	delay 50
# 247 "data/maps/Route25_SeaCottage/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 248 "data/maps/Route25_SeaCottage/scripts.pory"
	applymovement LOCALID_BILL_HUMAN, Route25_SeaCottage_Movement_BillExitTeleporter
# 249 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 250 "data/maps/Route25_SeaCottage/scripts.pory"
	waitfanfare
# 251 "data/maps/Route25_SeaCottage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route25_SeaCottage_Movement_CameraPanBackFromTeleporters
# 252 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 253 "data/maps/Route25_SeaCottage/scripts.pory"
	playse SE_CONTEST_CURTAIN_FALL
# 254 "data/maps/Route25_SeaCottage/scripts.pory"
	closedoor 3, 3
# 255 "data/maps/Route25_SeaCottage/scripts.pory"
	waitdooranim
# 256 "data/maps/Route25_SeaCottage/scripts.pory"
	applymovement LOCALID_BILL_HUMAN, Route25_SeaCottage_Movement_BillWalkToMiddleOfRoom
# 257 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 258 "data/maps/Route25_SeaCottage/scripts.pory"
	special RemoveCameraObject
# 259 "data/maps/Route25_SeaCottage/scripts.pory"
	releaseall
# 260 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 261 "data/maps/Route25_SeaCottage/scripts.pory"

# 262 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_PlayTeleporterBeepSE::
# 263 "data/maps/Route25_SeaCottage/scripts.pory"
	playse SE_BALL
# 264 "data/maps/Route25_SeaCottage/scripts.pory"
	waitse
# 265 "data/maps/Route25_SeaCottage/scripts.pory"
	delay 20
# 266 "data/maps/Route25_SeaCottage/scripts.pory"
	return
# 267 "data/maps/Route25_SeaCottage/scripts.pory"

# 268 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_CameraPanToTeleporters::
# 269 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 270 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 271 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 272 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 273 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end
# 274 "data/maps/Route25_SeaCottage/scripts.pory"

# 275 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_CameraPanBackFromTeleporters::
# 276 "data/maps/Route25_SeaCottage/scripts.pory"
	delay_16
# 277 "data/maps/Route25_SeaCottage/scripts.pory"
	delay_16
# 278 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 279 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 280 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_left
# 281 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_left
# 282 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end
# 283 "data/maps/Route25_SeaCottage/scripts.pory"

# 284 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_OpenBillsMonList::
# 285 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_BillsFavoriteMonList
# 286 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 287 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 288 "data/maps/Route25_SeaCottage/scripts.pory"

# 289 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillsMonList::
# 290 "data/maps/Route25_SeaCottage/scripts.pory"
	message Route25_SeaCottage_Text_SeeWhichMon
# 291 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmessage
# 292 "data/maps/Route25_SeaCottage/scripts.pory"
	multichoice 0, 0, MULTICHOICE_EEVEELUTIONS, FALSE
# 293 "data/maps/Route25_SeaCottage/scripts.pory"
	switch VAR_RESULT
# 294 "data/maps/Route25_SeaCottage/scripts.pory"
	case 0, Route25_SeaCottage_EventScript_ViewEevee
# 295 "data/maps/Route25_SeaCottage/scripts.pory"
	case 1, Route25_SeaCottage_EventScript_ViewFlareon
# 296 "data/maps/Route25_SeaCottage/scripts.pory"
	case 2, Route25_SeaCottage_EventScript_ViewJolteon
# 297 "data/maps/Route25_SeaCottage/scripts.pory"
	case 3, Route25_SeaCottage_EventScript_ViewVaporeon
# 298 "data/maps/Route25_SeaCottage/scripts.pory"
	case 4, Route25_SeaCottage_EventScript_ExitBillsMonList
# 299 "data/maps/Route25_SeaCottage/scripts.pory"
	case 127, Route25_SeaCottage_EventScript_ExitBillsMonList
# 300 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 301 "data/maps/Route25_SeaCottage/scripts.pory"

# 302 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_ViewEevee::
# 303 "data/maps/Route25_SeaCottage/scripts.pory"
	showmonpic SPECIES_EEVEE, 10, 3
# 304 "data/maps/Route25_SeaCottage/scripts.pory"
	waitbuttonpress
# 305 "data/maps/Route25_SeaCottage/scripts.pory"
	hidemonpic
# 306 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, SPECIES_EEVEE
# 307 "data/maps/Route25_SeaCottage/scripts.pory"
	special SetSeenMon
# 308 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 309 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 310 "data/maps/Route25_SeaCottage/scripts.pory"

# 311 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_ViewFlareon::
# 312 "data/maps/Route25_SeaCottage/scripts.pory"
	showmonpic SPECIES_FLAREON, 10, 3
# 313 "data/maps/Route25_SeaCottage/scripts.pory"
	waitbuttonpress
# 314 "data/maps/Route25_SeaCottage/scripts.pory"
	hidemonpic
# 315 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, SPECIES_FLAREON
# 316 "data/maps/Route25_SeaCottage/scripts.pory"
	special SetSeenMon
# 317 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 318 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 319 "data/maps/Route25_SeaCottage/scripts.pory"

# 320 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_ViewJolteon::
# 321 "data/maps/Route25_SeaCottage/scripts.pory"
	showmonpic SPECIES_JOLTEON, 10, 3
# 322 "data/maps/Route25_SeaCottage/scripts.pory"
	waitbuttonpress
# 323 "data/maps/Route25_SeaCottage/scripts.pory"
	hidemonpic
# 324 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, SPECIES_JOLTEON
# 325 "data/maps/Route25_SeaCottage/scripts.pory"
	special SetSeenMon
# 326 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 327 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 328 "data/maps/Route25_SeaCottage/scripts.pory"

# 329 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_ViewVaporeon::
# 330 "data/maps/Route25_SeaCottage/scripts.pory"
	showmonpic SPECIES_VAPOREON, 10, 3
# 331 "data/maps/Route25_SeaCottage/scripts.pory"
	waitbuttonpress
# 332 "data/maps/Route25_SeaCottage/scripts.pory"
	hidemonpic
# 333 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, SPECIES_VAPOREON
# 334 "data/maps/Route25_SeaCottage/scripts.pory"
	special SetSeenMon
# 335 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 336 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 337 "data/maps/Route25_SeaCottage/scripts.pory"

# 338 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_ExitBillsMonList::
# 339 "data/maps/Route25_SeaCottage/scripts.pory"
	releaseall
# 340 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 341 "data/maps/Route25_SeaCottage/scripts.pory"

# 342 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToMiddleOfRoom::
# 343 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 344 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 345 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 346 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 347 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 348 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 349 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end
# 350 "data/maps/Route25_SeaCottage/scripts.pory"

# 351 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillExitTeleporter::
# 352 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 353 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end
