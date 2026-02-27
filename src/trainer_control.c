#include "global.h"
 #include "battle.h"
 #include "battle_main.h"
 #include "data.h"
 #include "pokemon.h"
 #include "item.h"
 #include "constants/items.h"
 #include "constants/abilities.h"
 #include "constants/trainers.h"
 #include "constants/battle.h"
 #include "constants/moves.h"
 #include "trainer_control.h"
 #include "constants/flags.h"
 #include "event_data.h"
 #include "randomizer.h"
 
 static u32 GetTrainerClassBall(u8 trainerClass)
 {
     switch (trainerClass)
     {
     case TRAINER_CLASS_SWIMMER_M:
     case TRAINER_CLASS_SWIMMER_F:
     case TRAINER_CLASS_RS_SWIMMER_M:
     case TRAINER_CLASS_RS_SWIMMER_F:
     case TRAINER_CLASS_SAILOR:
     case TRAINER_CLASS_RS_SAILOR:
         return ITEM_DIVE_BALL;
     case TRAINER_CLASS_BUG_CATCHER:
     case TRAINER_CLASS_RS_BUG_CATCHER:
     case TRAINER_CLASS_BUG_MANIAC:
     case TRAINER_CLASS_FISHERMAN:
     case TRAINER_CLASS_RS_FISHERMAN:
         return ITEM_NET_BALL;
     case TRAINER_CLASS_PKMN_BREEDER:
     case TRAINER_CLASS_RS_PKMN_BREEDER:
         return ITEM_NEST_BALL;
     case TRAINER_CLASS_GENTLEMAN:
     case TRAINER_CLASS_RS_GENTLEMAN:
     case TRAINER_CLASS_LADY:
     case TRAINER_CLASS_RS_LADY:
     case TRAINER_CLASS_RICH_BOY:
         return ITEM_LUXURY_BALL;
     case TRAINER_CLASS_SCIENTIST:
         return ITEM_TIMER_BALL;
     case TRAINER_CLASS_COOLTRAINER:
     case TRAINER_CLASS_RS_COOLTRAINER:
     case TRAINER_CLASS_HIKER:
     case TRAINER_CLASS_RS_HIKER:
     case TRAINER_CLASS_BLACK_BELT:
     case TRAINER_CLASS_RS_BLACK_BELT:
     case TRAINER_CLASS_TAMER:
     case TRAINER_CLASS_PKMN_RANGER:
     case TRAINER_CLASS_RS_PKMN_RANGER:
         return ITEM_GREAT_BALL;
     case TRAINER_CLASS_LEADER:
     case TRAINER_CLASS_RS_LEADER:
     case TRAINER_CLASS_JOHTO_LEADER:
     case TRAINER_CLASS_ELITE_FOUR:
     case TRAINER_CLASS_RS_ELITE_FOUR:
     case TRAINER_CLASS_DRAGON_TAMER:
     case TRAINER_CLASS_BOSS:
     case TRAINER_CLASS_SEVII_CHAMPION:
         return ITEM_ULTRA_BALL;
     case TRAINER_CLASS_CHAMPION:
     case TRAINER_CLASS_RS_CHAMPION:
         return ITEM_PREMIER_BALL;
     default:
         return ITEM_POKE_BALL;
     }
 }

 void CreateTrainerMon(struct Pokemon *party, const struct Trainer *trainer, u32 partySlot, u32 personalityValue, u32 fixedOtId)
 {
     const struct TrainerMon *partyData = &trainer->party[partySlot];
     u32 otIdType, i;
     u16 species = partyData->species;
     // DISABLED — Trainer Randomizer commented out, can re-enable later
     bool8 isRandomized = FALSE;

     // if (FlagGet(FLAG_TRAINER_RANDOMIZER))
     // {
     //     u32 context = ((u32)gTrainerBattleOpponent_A << 16) | partySlot;
     //     species = GetRandomizedSpecies(GetRandomizerSeed(), context);
     //     isRandomized = TRUE;
     // }

     // Starter Randomizer: override rival's Oak Lab battle species
     if (FlagGet(FLAG_STARTER_RANDOMIZER))
     {
         u16 trainerId = gTrainerBattleOpponent_A;
         if (trainerId == TRAINER_RIVAL_OAKS_LAB_SQUIRTLE
          || trainerId == TRAINER_RIVAL_OAKS_LAB_BULBASAUR
          || trainerId == TRAINER_RIVAL_OAKS_LAB_CHARMANDER)
         {
             species = VarGet(VAR_TEMP_3);
         }
     }

     if (partyData->gender != 0)
     {
         u32 newPersonality = personalityValue & 0xFFFFFF00;
         u32 genderRatio = gSpeciesInfo[species].genderRatio;
         if (partyData->gender == TRAINER_PARTY_GENDER(MALE))
             newPersonality |= ((255 - genderRatio) / 2) + genderRatio;
         else
             newPersonality |= genderRatio / 2;
         personalityValue = newPersonality;
     }
     if (partyData->nature != 0)
     {
         u32 newNature = partyData->nature - 1;
         u32 nature = GetNatureFromPersonality(personalityValue);
         s32 diff = abs(nature - newNature);
         s32 sign = (nature > newNature) ? 1 : -1;
         if (diff > NUM_NATURES / 2)
         {
             diff = NUM_NATURES - diff;
             sign *= -1;
         }
         personalityValue -= (diff * sign);
     }
     otIdType = OT_ID_RANDOM_NO_SHINY;
     if (fixedOtId != 0)
         otIdType = OT_ID_PRESET;
     if (partyData->isShiny)
     {
         otIdType = OT_ID_PRESET;
         fixedOtId ^= GET_SHINY_VALUE(fixedOtId, personalityValue) << 16; // Make shiny by xoring SID.
     }
     CreateMon(party, species, partyData->lvl, 0, TRUE, personalityValue, otIdType, fixedOtId);
     if (partyData->heldItem != ITEM_NONE)
         SetMonData(party, MON_DATA_HELD_ITEM, &partyData->heldItem);

     if (partyData->moves[0] != MOVE_NONE && !isRandomized)
     {
         u32 friendship = 0;
         for (i = 0; i < MAX_MON_MOVES; i++)
         {
             u32 move = partyData->moves[i];
             SetMonMoveSlot(party, move, i);
             if (move == MOVE_RETURN)
                 friendship = MAX_FRIENDSHIP;  // Return is more powerful the higher the pokemon's friendship is.
             if (move == MOVE_FRUSTRATION)
                 friendship = 0;  // Frustration is more powerful the lower the pokemon's friendship is.
         }
         SetMonData(party, MON_DATA_FRIENDSHIP, &friendship);
     }

     SetMonData(party, MON_DATA_IVS, &partyData->iv);
     if (partyData->ev != NULL)
     {
         for (i = 0; i < NUM_STATS; i++)
             SetMonData(party, MON_DATA_HP_EV + i, &partyData->ev[i]);
     }
     if (gSpeciesInfo[species].abilities[1])
     {
         u32 abilityNum = partyData->abilityNum;
         SetMonData(party, MON_DATA_ABILITY_NUM, &abilityNum);
     }
     {
         u32 pokeball;
         if (partyData->pokeball != 0)
             pokeball = partyData->pokeball;
         else
             pokeball = GetTrainerClassBall(trainer->trainerClass);
         SetMonData(party, MON_DATA_POKEBALL, &pokeball);
     }

     if (partyData->nickname != NULL)
     {
         SetMonData(party, MON_DATA_NICKNAME, partyData->nickname);
     }
 }
