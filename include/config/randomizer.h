#ifndef GUARD_CONFIG_RANDOMIZER_H
#define GUARD_CONFIG_RANDOMIZER_H
#include "item.h"

// Global control. If FALSE, no randomizer functionality will be enabled.
// If this is TRUE, that doesn't necessarily mean that a particular part of the randomizer
// will be enabled.
#define RANDOMIZER_AVAILABLE                          TRUE
#define RANDOMIZER_SEED_IS_TRAINER_ID                 TRUE

#if RANDOMIZER_AVAILABLE == TRUE

// If TRUE, the trainer ID (including secret ID) will be the randomizer seed.
#define RZ_TRAINER_ID_IS_SEED                         TRUE

// If TRUE, dynamically generated randomization tables stored in EWRAM are used.
// This consumes 6 bytes for each species present.
#define RANDOMIZER_DYNAMIC_SPECIES                    TRUE

#if RANDOMIZER_DYNAMIC_SPECIES == TRUE

// If the longest evolutionary chain (excluding babies) is longer than this,
// the dynamic evolutionary stage randomization table will be generated
// incorrectly.
#define RANDOMIZER_MAX_EVO_STAGES                     5

#endif // RANDOMIZER_DYNAMIC_SPECIES

#define RANDOMIZER_MAX_TM                             ITEM_TM50

// Vars and features

// These features allow you to force enable or disable individual randomization
// features.
// If undefined, the feature will be enabled if one of the flags below is set.
// If defined and set to TRUE, the feature will always be enabled.
// If defined and set to FALSE, the feature will always be disabled.
#define FORCE_RANDOMIZE_WILD_MON                      TRUE
#define FORCE_RANDOMIZE_FIELD_ITEMS                   TRUE
#define FORCE_RANDOMIZE_TRAINER_MON                   TRUE
#define FORCE_RANDOMIZE_FIXED_MON                     TRUE
#define FORCE_RANDOMIZE_STARTER_AND_GIFT_MON          TRUE
#define FORCE_RANDOMIZE_EGG_MON                       TRUE
#define FORCE_RANDOMIZE_ABILITIES                     TRUE
#define FORCE_RANDOMIZE_TMS_AND_HMS                   TRUE
#define FORCE_RANDOMIZE_MOVE_TUTORS                   TRUE
#define FORCE_RANDOMIZE_BERRIES                       TRUE

// These flags control whether a particular randomization feature is active.
// They are ignored and disabled if the flags above are set.
#ifndef FORCE_RANDOMIZE_WILD_MON
#define RANDOMIZER_FLAG_WILD_MON                      FLAG_RANDOMIZER_WILD_MON
#endif

#ifndef FORCE_RANDOMIZE_FIELD_ITEMS
#define RANDOMIZER_FLAG_FIELD_ITEMS                   FLAG_RANDOMIZER_FIELD_ITEMS
#endif

#ifndef FORCE_RANDOMIZE_TRAINER_MON
#define RANDOMIZER_FLAG_TRAINER_MON                   FLAG_RANDOMIZER_TRAINER_MON
#endif

#ifndef FORCE_RANDOMIZE_FIXED_MON
#define RANDOMIZER_FLAG_FIXED_MON                     FLAG_RANDOMIZER_FIXED_MON
#endif

#ifndef FORCE_RANDOMIZE_STARTER_AND_GIFT_MON
#define RANDOMIZER_FLAG_STARTER_AND_GIFT_MON          FLAG_RANDOMIZER_STARTER_AND_GIFT_MON
#endif

#ifndef FORCE_RANDOMIZE_EGG_MON
#define RANDOMIZER_FLAG_EGG_MON                       FLAG_RANDOMIZER_EGG_MON
#endif

#ifndef FORCE_RANDOMIZE_ABILITIES
#define RANDOMIZER_FLAG_ABILITIES                     FLAG_RANDOMIZER_ABILITIES
#endif

#ifndef FORCE_RANDOMIZE_TMS_AND_HMS
#define RANDOMIZER_FLAG_TMS_AND_HMS                   FLAG_RANDOMIZER_TMS_AND_HMS
#endif

#ifndef FORCE_RANDOMIZE_MOVE_TUTORS
#define RANDOMIZER_FLAG_MOVE_TUTORS                   FLAG_RANDOMIZER_MOVE_TUTORS
#endif

#ifndef FORCE_RANDOMIZE_BERRIES
#define RANDOMIZER_FLAG_BERRIES                       FLAG_RANDOMIZER_BERRIES
#endif

#define RANDOMIZER_VAR_SPECIES_MODE                   VAR_RANDOMIZER_SPECIES_MODE
#define RANDOMIZER_VAR_ZIGZAGOON_PERSONALITY_L        VAR_RANDOMIZER_ZIGZAGOON_PERSONALITY_L
#define RANDOMIZER_VAR_ZIGZAGOON_PERSONALITY_H        VAR_RANDOMIZER_ZIGZAGOON_PERSONALITY_H

#if RANDOMIZER_SEED_IS_TRAINER_ID == FALSE
#define RANDOMIZER_VAR_SEED_L                         VAR_RANDOMIZER_SEED_L
#define RANDOMIZER_VAR_SEED_H                         VAR_RANDOMIZER_SEED_H
#endif

#endif // RANDOMIZER_AVAILABLE

#endif // GUARD_CONFIG_RANDOMIZER_H
