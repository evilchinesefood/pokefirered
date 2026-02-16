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
	msgbox Route25_SeaCottage_Text_WhatsThisMonOnPC
# 139 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmessage
# 140 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CASTFORM
# 141 "data/maps/Route25_SeaCottage/scripts.pory"
	givemon SPECIES_CASTFORM, 25
# 142 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route25_SeaCottage_EventScript_GetEeveeParty
# 143 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route25_SeaCottage_EventScript_GetEeveePC
# 144 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 145 "data/maps/Route25_SeaCottage/scripts.pory"
	release
# 146 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 147 "data/maps/Route25_SeaCottage/scripts.pory"

# 148 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_GetEeveeParty::
# 149 "data/maps/Route25_SeaCottage/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 150 "data/maps/Route25_SeaCottage/scripts.pory"
	message Route25_SeaCottage_Text_ObtainedAnEevee
# 151 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmessage
# 152 "data/maps/Route25_SeaCottage/scripts.pory"
	waitfanfare
# 153 "data/maps/Route25_SeaCottage/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CASTFORM
# 154 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 155 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route25_SeaCottage_EventScript_SetGotEevee
# 156 "data/maps/Route25_SeaCottage/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 157 "data/maps/Route25_SeaCottage/scripts.pory"
	call EventScript_ChangePokemonNickname
# 158 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_SetGotEevee
# 159 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 160 "data/maps/Route25_SeaCottage/scripts.pory"

# 161 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_GetEeveePC::
# 162 "data/maps/Route25_SeaCottage/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 163 "data/maps/Route25_SeaCottage/scripts.pory"
	message Route25_SeaCottage_Text_ObtainedAnEevee
# 164 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmessage
# 165 "data/maps/Route25_SeaCottage/scripts.pory"
	waitfanfare
# 166 "data/maps/Route25_SeaCottage/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CASTFORM
# 167 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 168 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route25_SeaCottage_EventScript_TransferEeveeToPC
# 169 "data/maps/Route25_SeaCottage/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 170 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_TransferEeveeToPC
# 171 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 172 "data/maps/Route25_SeaCottage/scripts.pory"

# 173 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_TransferEeveeToPC::
# 174 "data/maps/Route25_SeaCottage/scripts.pory"
	call EventScript_TransferredToPC
# 175 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_SetGotEevee
# 176 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 177 "data/maps/Route25_SeaCottage/scripts.pory"

# 178 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Text_ObtainedAnEevee::
# 179 "data/maps/Route25_SeaCottage/scripts.pory"
	.string "{PLAYER} obtained CASTFORM!$"
# 180 "data/maps/Route25_SeaCottage/scripts.pory"

# 181 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Text_WhatsThisMonOnPC::
# 182 "data/maps/Route25_SeaCottage/scripts.pory"
	.string "Oh hey there {PLAYER}, I sense you\n"
# 183 "data/maps/Route25_SeaCottage/scripts.pory"
	.string "completed my FAME CHECKER!\p"
# 184 "data/maps/Route25_SeaCottage/scripts.pory"
	.string "Guess you really like me!\p"
# 185 "data/maps/Route25_SeaCottage/scripts.pory"
	.string "Well I actually got a gift\n"
# 186 "data/maps/Route25_SeaCottage/scripts.pory"
	.string "for you for what you did!\p"
# 187 "data/maps/Route25_SeaCottage/scripts.pory"
	.string "It's a POKEMON from the Hoenn\n"
# 188 "data/maps/Route25_SeaCottage/scripts.pory"
	.string "Region which LANETTE gifted me.\p"
# 189 "data/maps/Route25_SeaCottage/scripts.pory"
	.string "I actually got a few of them,\n"
# 190 "data/maps/Route25_SeaCottage/scripts.pory"
	.string "and I'm giving you one of them!$"
# 191 "data/maps/Route25_SeaCottage/scripts.pory"

# 192 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Text_WhatsThisMonOnPC2::
# 193 "data/maps/Route25_SeaCottage/scripts.pory"
	.string "It's the weather POKEMON CASTFORM!\p"
# 194 "data/maps/Route25_SeaCottage/scripts.pory"
	.string "I hope you enjoy it!\p"
# 195 "data/maps/Route25_SeaCottage/scripts.pory"
	.string "And thanks for helping my friend\n"
# 196 "data/maps/Route25_SeaCottage/scripts.pory"
	.string "CELIO with his Linking Machine.\p"
# 197 "data/maps/Route25_SeaCottage/scripts.pory"
	.string "It meant a lot to him and\n"
# 198 "data/maps/Route25_SeaCottage/scripts.pory"
	.string "I thank you for that.$"
# 199 "data/maps/Route25_SeaCottage/scripts.pory"

# 200 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_SetGotEevee::
# 201 "data/maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_GOT_CASTFORM
# 202 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_WhatsThisMonOnPC2
# 203 "data/maps/Route25_SeaCottage/scripts.pory"
	release
# 204 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 205 "data/maps/Route25_SeaCottage/scripts.pory"

# 206 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToTeleporter::
# 207 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 208 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 209 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end
# 210 "data/maps/Route25_SeaCottage/scripts.pory"

# 211 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToTeleporterSouth::
# 212 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 213 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 214 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 215 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_left
# 216 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_in_place_faster_up
# 217 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end
# 218 "data/maps/Route25_SeaCottage/scripts.pory"

# 219 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillEnterTeleporter::
# 220 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 221 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end
# 222 "data/maps/Route25_SeaCottage/scripts.pory"

# 223 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_Computer::
# 224 "data/maps/Route25_SeaCottage/scripts.pory"
	lockall
# 225 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_set RETURN_AFTER_SS_TICKET, Route25_SeaCottage_EventScript_OpenBillsMonList
# 226 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_set BILL_IN_TELEPORTER, Route25_SeaCottage_EventScript_RunCellSeparator
# 227 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_TeleporterIsDisplayed
# 228 "data/maps/Route25_SeaCottage/scripts.pory"
	releaseall
# 229 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 230 "data/maps/Route25_SeaCottage/scripts.pory"

# 231 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_RunCellSeparator::
# 232 "data/maps/Route25_SeaCottage/scripts.pory"
	fadeoutbgm 0
# 233 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_InitiatedTeleportersCellSeparator
# 234 "data/maps/Route25_SeaCottage/scripts.pory"
	closemessage
# 235 "data/maps/Route25_SeaCottage/scripts.pory"
	clearflag BILL_IN_TELEPORTER
# 236 "data/maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_HELPED_BILL_IN_SEA_COTTAGE
# 237 "data/maps/Route25_SeaCottage/scripts.pory"
	special SpawnCameraObject
# 238 "data/maps/Route25_SeaCottage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route25_SeaCottage_Movement_CameraPanToTeleporters
# 239 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 240 "data/maps/Route25_SeaCottage/scripts.pory"
	delay 35
# 241 "data/maps/Route25_SeaCottage/scripts.pory"
	playse SE_PIN
# 242 "data/maps/Route25_SeaCottage/scripts.pory"
	waitse
# 243 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, 0
# 244 "data/maps/Route25_SeaCottage/scripts.pory"
	special AnimateTeleporterHousing
# 245 "data/maps/Route25_SeaCottage/scripts.pory"
	delay 10
# 246 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 247 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 248 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 249 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 250 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 251 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 252 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 253 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, 1
# 254 "data/maps/Route25_SeaCottage/scripts.pory"
	special AnimateTeleporterHousing
# 255 "data/maps/Route25_SeaCottage/scripts.pory"
	playse SE_WARP_IN
# 256 "data/maps/Route25_SeaCottage/scripts.pory"
	special AnimateTeleporterCable
# 257 "data/maps/Route25_SeaCottage/scripts.pory"
	waitse
# 258 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 259 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 260 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 261 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 262 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 263 "data/maps/Route25_SeaCottage/scripts.pory"
	opendoor 3, 3
# 264 "data/maps/Route25_SeaCottage/scripts.pory"
	waitdooranim
# 265 "data/maps/Route25_SeaCottage/scripts.pory"
	fadeinbgm 0
# 266 "data/maps/Route25_SeaCottage/scripts.pory"
	addobject LOCALID_BILL_HUMAN
# 267 "data/maps/Route25_SeaCottage/scripts.pory"
	clearflag FLAG_HIDE_BILL_HUMAN_SEA_COTTAGE
# 268 "data/maps/Route25_SeaCottage/scripts.pory"
	delay 50
# 269 "data/maps/Route25_SeaCottage/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 270 "data/maps/Route25_SeaCottage/scripts.pory"
	applymovement LOCALID_BILL_HUMAN, Route25_SeaCottage_Movement_BillExitTeleporter
# 271 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 272 "data/maps/Route25_SeaCottage/scripts.pory"
	waitfanfare
# 273 "data/maps/Route25_SeaCottage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route25_SeaCottage_Movement_CameraPanBackFromTeleporters
# 274 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 275 "data/maps/Route25_SeaCottage/scripts.pory"
	playse SE_CONTEST_CURTAIN_FALL
# 276 "data/maps/Route25_SeaCottage/scripts.pory"
	closedoor 3, 3
# 277 "data/maps/Route25_SeaCottage/scripts.pory"
	waitdooranim
# 278 "data/maps/Route25_SeaCottage/scripts.pory"
	applymovement LOCALID_BILL_HUMAN, Route25_SeaCottage_Movement_BillWalkToMiddleOfRoom
# 279 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 280 "data/maps/Route25_SeaCottage/scripts.pory"
	special RemoveCameraObject
# 281 "data/maps/Route25_SeaCottage/scripts.pory"
	releaseall
# 282 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 283 "data/maps/Route25_SeaCottage/scripts.pory"

# 284 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_PlayTeleporterBeepSE::
# 285 "data/maps/Route25_SeaCottage/scripts.pory"
	playse SE_BALL
# 286 "data/maps/Route25_SeaCottage/scripts.pory"
	waitse
# 287 "data/maps/Route25_SeaCottage/scripts.pory"
	delay 20
# 288 "data/maps/Route25_SeaCottage/scripts.pory"
	return
# 289 "data/maps/Route25_SeaCottage/scripts.pory"

# 290 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_CameraPanToTeleporters::
# 291 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 292 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 293 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 294 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 295 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end
# 296 "data/maps/Route25_SeaCottage/scripts.pory"

# 297 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_CameraPanBackFromTeleporters::
# 298 "data/maps/Route25_SeaCottage/scripts.pory"
	delay_16
# 299 "data/maps/Route25_SeaCottage/scripts.pory"
	delay_16
# 300 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 301 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 302 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_left
# 303 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_left
# 304 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end
# 305 "data/maps/Route25_SeaCottage/scripts.pory"

# 306 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_OpenBillsMonList::
# 307 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_BillsFavoriteMonList
# 308 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 309 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 310 "data/maps/Route25_SeaCottage/scripts.pory"

# 311 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillsMonList::
# 312 "data/maps/Route25_SeaCottage/scripts.pory"
	message Route25_SeaCottage_Text_SeeWhichMon
# 313 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmessage
# 314 "data/maps/Route25_SeaCottage/scripts.pory"
	multichoice 0, 0, MULTICHOICE_EEVEELUTIONS, FALSE
# 315 "data/maps/Route25_SeaCottage/scripts.pory"
	switch VAR_RESULT
# 316 "data/maps/Route25_SeaCottage/scripts.pory"
	case 0, Route25_SeaCottage_EventScript_ViewEevee
# 317 "data/maps/Route25_SeaCottage/scripts.pory"
	case 1, Route25_SeaCottage_EventScript_ViewFlareon
# 318 "data/maps/Route25_SeaCottage/scripts.pory"
	case 2, Route25_SeaCottage_EventScript_ViewJolteon
# 319 "data/maps/Route25_SeaCottage/scripts.pory"
	case 3, Route25_SeaCottage_EventScript_ViewVaporeon
# 320 "data/maps/Route25_SeaCottage/scripts.pory"
	case 4, Route25_SeaCottage_EventScript_ExitBillsMonList
# 321 "data/maps/Route25_SeaCottage/scripts.pory"
	case 127, Route25_SeaCottage_EventScript_ExitBillsMonList
# 322 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 323 "data/maps/Route25_SeaCottage/scripts.pory"

# 324 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_ViewEevee::
# 325 "data/maps/Route25_SeaCottage/scripts.pory"
	showmonpic SPECIES_EEVEE, 10, 3
# 326 "data/maps/Route25_SeaCottage/scripts.pory"
	waitbuttonpress
# 327 "data/maps/Route25_SeaCottage/scripts.pory"
	hidemonpic
# 328 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, SPECIES_EEVEE
# 329 "data/maps/Route25_SeaCottage/scripts.pory"
	special SetSeenMon
# 330 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 331 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 332 "data/maps/Route25_SeaCottage/scripts.pory"

# 333 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_ViewFlareon::
# 334 "data/maps/Route25_SeaCottage/scripts.pory"
	showmonpic SPECIES_FLAREON, 10, 3
# 335 "data/maps/Route25_SeaCottage/scripts.pory"
	waitbuttonpress
# 336 "data/maps/Route25_SeaCottage/scripts.pory"
	hidemonpic
# 337 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, SPECIES_FLAREON
# 338 "data/maps/Route25_SeaCottage/scripts.pory"
	special SetSeenMon
# 339 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 340 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 341 "data/maps/Route25_SeaCottage/scripts.pory"

# 342 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_ViewJolteon::
# 343 "data/maps/Route25_SeaCottage/scripts.pory"
	showmonpic SPECIES_JOLTEON, 10, 3
# 344 "data/maps/Route25_SeaCottage/scripts.pory"
	waitbuttonpress
# 345 "data/maps/Route25_SeaCottage/scripts.pory"
	hidemonpic
# 346 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, SPECIES_JOLTEON
# 347 "data/maps/Route25_SeaCottage/scripts.pory"
	special SetSeenMon
# 348 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 349 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 350 "data/maps/Route25_SeaCottage/scripts.pory"

# 351 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_ViewVaporeon::
# 352 "data/maps/Route25_SeaCottage/scripts.pory"
	showmonpic SPECIES_VAPOREON, 10, 3
# 353 "data/maps/Route25_SeaCottage/scripts.pory"
	waitbuttonpress
# 354 "data/maps/Route25_SeaCottage/scripts.pory"
	hidemonpic
# 355 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, SPECIES_VAPOREON
# 356 "data/maps/Route25_SeaCottage/scripts.pory"
	special SetSeenMon
# 357 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 358 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 359 "data/maps/Route25_SeaCottage/scripts.pory"

# 360 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_ExitBillsMonList::
# 361 "data/maps/Route25_SeaCottage/scripts.pory"
	releaseall
# 362 "data/maps/Route25_SeaCottage/scripts.pory"
	end
# 363 "data/maps/Route25_SeaCottage/scripts.pory"

# 364 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToMiddleOfRoom::
# 365 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 366 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 367 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 368 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 369 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 370 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 371 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end
# 372 "data/maps/Route25_SeaCottage/scripts.pory"

# 373 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillExitTeleporter::
# 374 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 375 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end
