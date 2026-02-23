#ifndef GUARD_DEBUG_H
#define GUARD_DEBUG_H

// DEBUG TEST SETUP - REMOVE BEFORE RELEASE
// Uncomment to enable debug test setup (party, items, badges)
#define DEBUG_TEST_SETUP

// Start location for debug setup (uses SPAWN_* constants from heal_locations.h)
// Common values: SPAWN_PALLET_TOWN, SPAWN_ONE_ISLAND, SPAWN_TWO_ISLAND,
// SPAWN_CINNABAR_ISLAND, SPAWN_CELADON_CITY, SPAWN_SAFFRON_CITY
// Requires DEBUG_TEST_SETUP to be defined
#define DEBUG_START_LOCATION SPAWN_PALLET_TOWN

#ifdef DEBUG_TEST_SETUP
extern bool8 gDebugDoFullSetup;
#endif

#endif // GUARD_DEBUG_H
