SafariZone_EventScript_OutOfBallsMidBattle::
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 3
	special ExitSafariMode
	setwarp MAP_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 4, 1
	end

SafariZone_EventScript_Exit::
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 1
	special ExitSafariMode
	warp MAP_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 4, 1
	waitstate
	end

SafariZone_EventScript_RetirePrompt::
	lockall
	msgbox SafariZone_Text_WouldYouLikeToExit, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SafariZone_EventScript_Retire
	releaseall
	end

SafariZone_EventScript_Retire::
	goto SafariZone_EventScript_Exit

SafariZone_EventScript_TimesUp::
	lockall
	playse SE_DING_DONG
	showmoneybox 0, 0
	msgbox SafariZone_Text_TimesUpExtend, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SafariZone_EventScript_TimesUpExit
	checkmoney 500
	goto_if_eq VAR_RESULT, FALSE, SafariZone_EventScript_TimesUpNoMoney
	removemoney 500
	updatemoneybox
	callnative ExtendSafariZone
	msgbox SafariZone_Text_ExtendConfirm
	hidemoneybox
	releaseall
	end

SafariZone_EventScript_TimesUpNoMoney::
	msgbox SafariZone_Text_NotEnoughMoneyExtend
	hidemoneybox
	goto SafariZone_EventScript_Exit
	end

SafariZone_EventScript_TimesUpExit::
	hidemoneybox
	msgbox SafariZone_Text_TimesUp
	goto SafariZone_EventScript_Exit
	end

SafariZone_EventScript_OutOfBalls::
	lockall
	playse SE_DING_DONG
	msgbox SafariZone_Text_OutOfBalls
	goto SafariZone_EventScript_Exit
	end
