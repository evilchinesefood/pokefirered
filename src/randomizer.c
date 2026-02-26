#include "global.h"
#include "randomizer.h"
#include "pokemon.h"
#include "constants/species.h"
#include "constants/moves.h"
#include "constants/abilities.h"
#include "constants/pokemon.h"

extern const struct Evolution gEvolutionTable[][EVOS_PER_MON];

#define RANDOMIZER_MAX_ATTEMPTS 1000

// Standard glibc LCG constants (a=1103515245, c=24691). Intentional u32 overflow.
static u32 RandomizerRng(u32 *state)
{
    *state = 1103515245 * (*state) + 24691;
    return *state >> 16;
}

u16 GetRandomizedSpecies(u32 seed, u32 context)
{
    u32 state = seed ^ context;
    return (RandomizerRng(&state) % (NUM_SPECIES - 1)) + 1;
}

static const u16 sLegendarySpecies[] = {
    SPECIES_ARTICUNO,
    SPECIES_ZAPDOS,
    SPECIES_MOLTRES,
    SPECIES_MEWTWO,
    SPECIES_MEW,
    SPECIES_RAIKOU,
    SPECIES_ENTEI,
    SPECIES_SUICUNE,
    SPECIES_LUGIA,
    SPECIES_HO_OH,
    SPECIES_CELEBI,
    SPECIES_REGIROCK,
    SPECIES_REGICE,
    SPECIES_REGISTEEL,
    SPECIES_KYOGRE,
    SPECIES_GROUDON,
    SPECIES_RAYQUAZA,
    SPECIES_LATIAS,
    SPECIES_LATIOS,
    SPECIES_JIRACHI,
    SPECIES_DEOXYS,
};

static bool8 IsLegendary(u16 species)
{
    u32 i;
    for (i = 0; i < ARRAY_COUNT(sLegendarySpecies); i++)
    {
        if (sLegendarySpecies[i] == species)
            return TRUE;
    }
    return FALSE;
}

static bool8 CanEvolve(u16 species)
{
    u32 i;
    for (i = 0; i < EVOS_PER_MON; i++)
    {
        if (gEvolutionTable[species][i].targetSpecies != SPECIES_NONE)
            return TRUE;
    }
    return FALSE;
}

u16 GetRandomizedStarterSpecies(u32 seed, u8 starterNum)
{
    u32 context = 0xFFFF0000 | starterNum;
    u16 species;
    u32 attempts = 0;

    do
    {
        species = GetRandomizedSpecies(seed, context);
        context++;
        attempts++;
        if (attempts > RANDOMIZER_MAX_ATTEMPTS)
            return SPECIES_BULBASAUR;
    } while (IsLegendary(species) || !CanEvolve(species));

    return species;
}

u8 GetRandomizedAbility(u32 seed, u16 species, u8 abilityNum)
{
    u32 state = seed ^ ((u32)species << 8) ^ abilityNum;
    u8 ability = (RandomizerRng(&state) % (ABILITIES_COUNT - 1)) + 1;
    return ability;
}

void GiveRandomizedMoveset(struct BoxPokemon *boxMon, u32 seed)
{
    u16 species = GetBoxMonData(boxMon, MON_DATA_SPECIES, NULL);
    u32 state = seed ^ species;
    u32 i;
    u16 move;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        do
        {
            move = (RandomizerRng(&state) % (MOVES_COUNT - 1)) + 1;
        } while (move == MOVE_STRUGGLE);

        SetBoxMonData(boxMon, MON_DATA_MOVE1 + i, &move);
        SetBoxMonData(boxMon, MON_DATA_PP1 + i, &gBattleMoves[move].pp);
    }
}
