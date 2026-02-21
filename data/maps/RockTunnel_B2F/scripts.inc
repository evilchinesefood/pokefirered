RockTunnel_B2F_MapScripts::
	.byte 0


# 3 "data/maps/RockTunnel_B2F/scripts.pory"

# 4 "data/maps/RockTunnel_B2F/scripts.pory"
RockTunnel_B2F_EventScript_ClawBall::
# 5 "data/maps/RockTunnel_B2F/scripts.pory"
	lock
# 6 "data/maps/RockTunnel_B2F/scripts.pory"
	faceplayer
# 7 "data/maps/RockTunnel_B2F/scripts.pory"
	msgbox RockTunnel_B2F_Text_ClawBall, MSGBOX_DEFAULT
# 8 "data/maps/RockTunnel_B2F/scripts.pory"
	release
# 9 "data/maps/RockTunnel_B2F/scripts.pory"
	end
# 10 "data/maps/RockTunnel_B2F/scripts.pory"

# 11 "data/maps/RockTunnel_B2F/scripts.pory"
RockTunnel_B2F_Text_ClawBall:
# 12 "data/maps/RockTunnel_B2F/scripts.pory"
	.string "A strange ball with claw marks\n"
# 13 "data/maps/RockTunnel_B2F/scripts.pory"
	.string "on it...$"
