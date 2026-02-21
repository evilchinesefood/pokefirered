# 1 "data/maps/Route23/scripts.pory"

# 2 "data/maps/Route23/scripts.pory"
.set LOCALID_CASCADE_BADGE_GUARD, 1
# 3 "data/maps/Route23/scripts.pory"
.set LOCALID_THUNDER_BADGE_GUARD, 2
# 4 "data/maps/Route23/scripts.pory"
.set LOCALID_RAINBOW_BADGE_GUARD, 3
# 5 "data/maps/Route23/scripts.pory"
.set LOCALID_SOUL_BADGE_GUARD,    4
# 6 "data/maps/Route23/scripts.pory"
.set LOCALID_MARSH_BADGE_GUARD,   5
# 7 "data/maps/Route23/scripts.pory"
.set LOCALID_VOLCANO_BADGE_GUARD, 6
# 8 "data/maps/Route23/scripts.pory"
.set LOCALID_EARTH_BADGE_GUARD,   7
# 9 "data/maps/Route23/scripts.pory"

# 10 "data/maps/Route23/scripts.pory"
Route23_MapScripts::
# 11 "data/maps/Route23/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route23_OnTransition
# 12 "data/maps/Route23/scripts.pory"
	.byte 0
# 13 "data/maps/Route23/scripts.pory"

# 14 "data/maps/Route23/scripts.pory"
Route23_OnTransition::
# 15 "data/maps/Route23/scripts.pory"
	end
# 16 "data/maps/Route23/scripts.pory"

# 17 "data/maps/Route23/scripts.pory"
Route23_EventScript_CascadeBadgeGuard::
# 18 "data/maps/Route23/scripts.pory"
	lock
# 19 "data/maps/Route23/scripts.pory"
	faceplayer
# 20 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 2
# 21 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_CASCADE_BADGE
# 22 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 23 "data/maps/Route23/scripts.pory"
	end
# 24 "data/maps/Route23/scripts.pory"

# 25 "data/maps/Route23/scripts.pory"
Route23_EventScript_ThunderBadgeGuard::
# 26 "data/maps/Route23/scripts.pory"
	lock
# 27 "data/maps/Route23/scripts.pory"
	faceplayer
# 28 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 3
# 29 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_THUNDER_BADGE
# 30 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 31 "data/maps/Route23/scripts.pory"
	end
# 32 "data/maps/Route23/scripts.pory"

# 33 "data/maps/Route23/scripts.pory"
Route23_EventScript_RainbowBadgeGuard::
# 34 "data/maps/Route23/scripts.pory"
	lock
# 35 "data/maps/Route23/scripts.pory"
	faceplayer
# 36 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 4
# 37 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_RAINBOW_BADGE
# 38 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 39 "data/maps/Route23/scripts.pory"
	end
# 40 "data/maps/Route23/scripts.pory"

# 41 "data/maps/Route23/scripts.pory"
Route23_EventScript_SoulBadgeGuard::
# 42 "data/maps/Route23/scripts.pory"
	lock
# 43 "data/maps/Route23/scripts.pory"
	faceplayer
# 44 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 5
# 45 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SOUL_BADGE
# 46 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 47 "data/maps/Route23/scripts.pory"
	end
# 48 "data/maps/Route23/scripts.pory"

# 49 "data/maps/Route23/scripts.pory"
Route23_EventScript_MarshBadgeGuard::
# 50 "data/maps/Route23/scripts.pory"
	lock
# 51 "data/maps/Route23/scripts.pory"
	faceplayer
# 52 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 6
# 53 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MARSH_BADGE
# 54 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 55 "data/maps/Route23/scripts.pory"
	end
# 56 "data/maps/Route23/scripts.pory"

# 57 "data/maps/Route23/scripts.pory"
Route23_EventScript_VolcanoBadgeGuard::
# 58 "data/maps/Route23/scripts.pory"
	lock
# 59 "data/maps/Route23/scripts.pory"
	faceplayer
# 60 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 7
# 61 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_VOLCANO_BADGE
# 62 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 63 "data/maps/Route23/scripts.pory"
	end
# 64 "data/maps/Route23/scripts.pory"

# 65 "data/maps/Route23/scripts.pory"
Route23_EventScript_EarthBadgeGuard::
# 66 "data/maps/Route23/scripts.pory"
	lock
# 67 "data/maps/Route23/scripts.pory"
	faceplayer
# 68 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 8
# 69 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_EARTH_BADGE
# 70 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 71 "data/maps/Route23/scripts.pory"
	end
# 72 "data/maps/Route23/scripts.pory"

# 73 "data/maps/Route23/scripts.pory"
Route23_EventScript_CascadeBadgeGuardTrigger::
# 74 "data/maps/Route23/scripts.pory"
	lockall
# 75 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 2
# 76 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_CASCADE_BADGE_GUARD
# 77 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_CASCADE_BADGE
# 78 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 79 "data/maps/Route23/scripts.pory"
	end
# 80 "data/maps/Route23/scripts.pory"

# 81 "data/maps/Route23/scripts.pory"
Route23_EventScript_ThunderBadgeGuardTrigger::
# 82 "data/maps/Route23/scripts.pory"
	lockall
# 83 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 3
# 84 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_THUNDER_BADGE_GUARD
# 85 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_THUNDER_BADGE
# 86 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 87 "data/maps/Route23/scripts.pory"
	end
# 88 "data/maps/Route23/scripts.pory"

# 89 "data/maps/Route23/scripts.pory"
Route23_EventScript_RainbowBadgeGuardTrigger::
# 90 "data/maps/Route23/scripts.pory"
	lockall
# 91 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 4
# 92 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_RAINBOW_BADGE_GUARD
# 93 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_RAINBOW_BADGE
# 94 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 95 "data/maps/Route23/scripts.pory"
	end
# 96 "data/maps/Route23/scripts.pory"

# 97 "data/maps/Route23/scripts.pory"
Route23_EventScript_SoulBadgeGuardTrigger::
# 98 "data/maps/Route23/scripts.pory"
	lockall
# 99 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 5
# 100 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_SOUL_BADGE_GUARD
# 101 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SOUL_BADGE
# 102 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 103 "data/maps/Route23/scripts.pory"
	end
# 104 "data/maps/Route23/scripts.pory"

# 105 "data/maps/Route23/scripts.pory"
Route23_EventScript_MarshBadgeGuardTrigger::
# 106 "data/maps/Route23/scripts.pory"
	lockall
# 107 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 6
# 108 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_MARSH_BADGE_GUARD
# 109 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MARSH_BADGE
# 110 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 111 "data/maps/Route23/scripts.pory"
	end
# 112 "data/maps/Route23/scripts.pory"

# 113 "data/maps/Route23/scripts.pory"
Route23_EventScript_VolcanoBadgeGuardTrigger::
# 114 "data/maps/Route23/scripts.pory"
	lockall
# 115 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 7
# 116 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_VOLCANO_BADGE_GUARD
# 117 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_VOLCANO_BADGE
# 118 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 119 "data/maps/Route23/scripts.pory"
	end
# 120 "data/maps/Route23/scripts.pory"

# 121 "data/maps/Route23/scripts.pory"
Route23_EventScript_EarthBadgeGuardTrigger::
# 122 "data/maps/Route23/scripts.pory"
	lockall
# 123 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 8
# 124 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_EARTH_BADGE_GUARD
# 125 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_EARTH_BADGE
# 126 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 127 "data/maps/Route23/scripts.pory"
	end
# 128 "data/maps/Route23/scripts.pory"

# 129 "data/maps/Route23/scripts.pory"
Route23_EventScript_VictoryRoadGateSign::
# 130 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_VictoryRoadGateSign, MSGBOX_SIGN
# 131 "data/maps/Route23/scripts.pory"
	end
# 132 "data/maps/Route23/scripts.pory"

# 133 "data/maps/Route23/scripts.pory"
Route23_EventScript_RestSign::
# 134 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_RestHouse, MSGBOX_SIGN
# 135 "data/maps/Route23/scripts.pory"
	end
# 136 "data/maps/Route23/scripts.pory"

# 137 "data/maps/Route23/scripts.pory"
Route23_EventScript_NotReady::
# 138 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_NotReady, MSGBOX_NPC
# 139 "data/maps/Route23/scripts.pory"
	end
# 140 "data/maps/Route23/scripts.pory"

# 141 "data/maps/Route23/scripts.pory"
Route23_EventScript_Clerk::
# 142 "data/maps/Route23/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 143 "data/maps/Route23/scripts.pory"
	lock
# 144 "data/maps/Route23/scripts.pory"
	faceplayer
# 145 "data/maps/Route23/scripts.pory"
	message Route23_Text_Clerk
# 146 "data/maps/Route23/scripts.pory"
	waitmessage
# 147 "data/maps/Route23/scripts.pory"
	pokemart Route23_Items
# 148 "data/maps/Route23/scripts.pory"
	msgbox Text_PleaseComeAgain
# 149 "data/maps/Route23/scripts.pory"
	release
# 150 "data/maps/Route23/scripts.pory"
	end
# 151 "data/maps/Route23/scripts.pory"

# 152 "data/maps/Route23/scripts.pory"
	.align 2
# 153 "data/maps/Route23/scripts.pory"
Route23_Items::
# 154 "data/maps/Route23/scripts.pory"
	.2byte ITEM_POKE_BALL
# 155 "data/maps/Route23/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 156 "data/maps/Route23/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 157 "data/maps/Route23/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 158 "data/maps/Route23/scripts.pory"
	.2byte ITEM_MAX_POTION
# 159 "data/maps/Route23/scripts.pory"
	.2byte ITEM_REVIVE
# 160 "data/maps/Route23/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 161 "data/maps/Route23/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 162 "data/maps/Route23/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 163 "data/maps/Route23/scripts.pory"
	.2byte ITEM_NONE
# 164 "data/maps/Route23/scripts.pory"
	release
# 165 "data/maps/Route23/scripts.pory"
	end
# 166 "data/maps/Route23/scripts.pory"

# 167 "data/maps/Route23/scripts.pory"
Route23_EventScript_OrbingCheck::
# 168 "data/maps/Route23/scripts.pory"
	lock
# 169 "data/maps/Route23/scripts.pory"
	faceplayer
# 170 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_OrbingCheck, MSGBOX_DEFAULT
# 171 "data/maps/Route23/scripts.pory"
	release
# 172 "data/maps/Route23/scripts.pory"
	end
# 173 "data/maps/Route23/scripts.pory"

# 174 "data/maps/Route23/scripts.pory"
Route23_Text_OrbingCheck:
# 175 "data/maps/Route23/scripts.pory"
	.string "The orbs are glowing with a strange\n"
# 176 "data/maps/Route23/scripts.pory"
	.string "light...$"
