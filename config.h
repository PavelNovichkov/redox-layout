#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

// LEDs work only with serial communication and left master hand.
// See https://github.com/mattdibi/redox-keyboard#rgb-underglow for details. 
#define USE_SERIAL
#define MASTER_LEFT

#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 14
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

// My keyboard does not have mechanical lock switches.
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

// Double-tap sticky keys to (de)activate them permanently.
#define ONESHOT_TAP_TOGGLE 2

#endif
