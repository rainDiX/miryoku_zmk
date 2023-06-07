// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_KLUDGE_MOUSEKEYSPR
#define XXX &none

#define MIRYOKU_LAYER_ONE \
&kp Q,      &kp W,      &kp E,      &kp R,      &kp T,            &kp Y,      &kp U,      &kp I,      &kp O,      &kp P, \
&kp A,      &kp S,      &kp D,      &kp F,      &kp G,            &kp H,      &kp J,      &kp K,      &kp L,      &kp SEMI, \
&kp Z,      &kp X,      &kp C,      &kp V,      &kp B,            &kp N,      &kp M,      &kp COMMA,  &kp DOT,    &kp SLASH, \
U_NP,       U_NP,       &kp ESC,    &kp SPC,    &kp TAB,          &kp RET,    &kp BSPC,   &kp DEL,    U_NP,       U_NP

#define MIRYOKU_LAYER_TWO \
&kp Q,      &kp W,      &kp E,      &kp R,      &kp T,            &kp Y,      &kp U,      &kp UP,      &kp O,      &kp P, \
&kp A,      &kp S,      &kp D,      &kp F,      &kp G,            &kp H,      &kp LEFT,   &kp DOWN,    &kp RIGHT,  &kp SEMI, \
&kp Z,      &kp X,      &kp C,      &kp V,      &kp B,            &kp N,      &kp LSHFT,  &kp LCTRL,   &kp LALT,   &kp LGUI, \
U_NP,       U_NP,       &kp ESC,    &kp SPC,    &kp TAB,          &kp RET,    &kp BSPC,   &kp DEL,     U_NP,       U_NP

// Shifted QWERTY on left
#define MIRYOKU_LAYER_THREE \
&kp TAB,    &kp Q,      &kp W,      &kp E,      &kp R,            &kp T,      &kp U,      &kp I,      &kp O,      &kp P, \
&kp LCTRL,  &kp A,      &kp S,      &kp D,      &kp F,            &kp G,      &kp J,      &kp K,      &kp L,      &kp SEMI, \
&kp LSHFT,  &kp Z,      &kp X,      &kp C,      &kp V,            &kp B,      &kp M,      &kp COMMA,  &kp DOT,    &kp SLASH, \
U_NP,       U_NP,       &kp ESC,    &kp SPC,    &kp TAB,          &kp RET,    &kp BSPC,   &kp DEL,    U_NP,       U_NP

// Touhou layer
// #define MIRYOKU_LAYER_THREE \
// &kp Q,      U_NP,       U_NP,       &kp R,      U_NP,             &kp P,      &kp HOME,   &kp UP,     &kp END,    &kp PG_UP, \
// &kp LCTRL,  &kp LSHFT,  &kp Z,      &kp X,      &kp C,            U_NP,       &kp LEFT,   &kp DOWN,   &kp RIGHT,  &kp PG_DN, \
// U_NP,       U_NP,       U_NP,       U_NP,       U_NP,             U_NP,       &kp LSHFT,  &kp LCTRL,  &kp LALT,   &kp LGUI, \
// U_NP,       U_NP,       &kp ESC,    &kp SPC,    &kp TAB,          &kp RET,    &kp BSPC,   &kp DEL,    U_NP,       U_NP

#define MIRYOKU_LAYOUTMAPPING_HILLSIDE46(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
)\
XXX  K00  K01  K02  K03  K04                             K05  K06  K07  K08  K09  XXX  \
XXX  K10  K11  K12  K13  K14                             K15  K16  K17  K18  K19  XXX  \
XXX  K20  K21  K22  K23  K24  &u_to_U_BASE   &u_to_U_ONE K25  K26  K27  K28  K29  XXX  \
          &u_to_U_THREE  K32  K33  K34       K35         K36  K37  &u_to_U_TWO

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(ONE,    "One")   /* qwerty tap layer */ \
MIRYOKU_X(TWO,    "Two")   /* qwerty tap layer with nav & mods */ \
MIRYOKU_X(THREE,  "Three") /* The Touhou layer */

#define MIRYOKU_LAYERMAPPING_ONE   MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_TWO   MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_THREE MIRYOKU_MAPPING

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_ONE    10
#define U_TWO    11
#define U_THREE  12
