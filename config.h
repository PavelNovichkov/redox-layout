#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

// LEDs work only with serial communication and left master hand:
// https://github.com/mattdibi/redox-keyboard/tree/master/redox#rgb-underglow
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

// Tap-hold.
#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT // rollover without triggering mods
#define TAPPING_FORCE_HOLD // no auto-repeat on double tap
#define PERMISSIVE_HOLD

// Mouse keys.
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_WHEEL_DELAY 0
#define MOUSEKEY_MAX_SPEED 6
#define MOUSEKEY_TIME_TO_MAX 20

#endif
