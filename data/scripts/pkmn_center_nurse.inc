@ Turbo Nurse Joy: instant heal with chime + brief message
EventScript_PkmnCenterNurse::
	goto_if_questlog EventScript_ReleaseEnd
	special HealPlayerParty
	incrementgamestat GAME_STAT_USED_POKECENTER
	special SetUsedPkmnCenterQuestLogEvent
	setflag FLAG_DONE_POKECENTER_FIRST_USE
	playse SE_USE_ITEM
	msgbox Text_TurboHeal
	goto EventScript_PkmnCenterNurse_PlayerTurn
	return

@ Below labels kept for white_out.inc (after-blackout healing uses full animation)

EventScript_PkmnCenterNurse_TakeAndHealPkmn::
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	dofieldeffect FLDEFF_POKECENTER_HEAL
	callnative CableClub_OnResumeFunc
	waitfieldeffect FLDEFF_POKECENTER_HEAL
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	special HealPlayerParty
	return

Movement_Bow::
	nurse_joy_bow
	delay_4
	step_end

EventScript_PkmnCenterNurse_PlayerTurn::
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	return

Text_TurboHeal::
	.string "Your team was healed!$"
