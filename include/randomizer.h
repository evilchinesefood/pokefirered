#ifndef GUARD_RANDOMIZER_H
#define GUARD_RANDOMIZER_H

#include "global.h"
#include "pokemon.h"

#define GetRandomizerSeed() (*(u32 *)&gSaveBlock2Ptr->filler_B20[0])
#define SetRandomizerSeed(val) (*(u32 *)&gSaveBlock2Ptr->filler_B20[0] = (val))

u16 GetRandomizedSpecies(u32 seed, u32 context);
u16 GetRandomizedStarterSpecies(u32 seed, u8 starterNum);
u8 GetRandomizedAbility(u32 seed, u16 species, u8 abilityNum);
void GiveRandomizedMoveset(struct BoxPokemon *boxMon, u32 seed);

#endif // GUARD_RANDOMIZER_H
