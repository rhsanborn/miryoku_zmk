// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_KLUDGE_DOUBLETAPBOOT

#define XXX &none

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
MIRYOKU_X(GAMENUM,"GameNum") \

#define MIRYOKU_LAYERMAPPING_GAMENUM MIRYOKU_MAPPING

#define U_BASE        0
#define U_EXTRA       1
#define U_TAP         2
#define U_BUTTON      3
#define U_NAV         4
#define U_MOUSE       5
#define U_MEDIA       6
#define U_NUM         7
#define U_SYM         8
#define U_FUN         9
#define U_GAMENUM    10


#define MIRYOKU_LAYER_TAP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,    U_LT(U_GAMENUM, SPACE), &kp RET,       &mt LC(LS(LA(LGUI))) BSPC,&u_to_U_BASE,   U_NP,              U_NP

#define MIRYOKU_LAYER_GAMENUM \
&kp F1,            &kp F2,            &kp F3,            &kp F4,            &kp GRAVE,         &kp LBKT,          &kp F7,            &kp F8,            &kp F9,            &kp RBKT,         \
&kp NUM_6,         &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp 0,             &kp EQL,           &kp F4,            &kp F5,            &kp F6,            &kp SEMI,         \
&kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp NUM_4,         &kp NUM_5,         &kp BSLH,          &kp F1,            &kp F2,            &kp F3,            &kp GRAVE,        \
U_NP,              U_NP,              &to U_BASE,        &kp SPC,           &none,             &kp MINUS,         &kp NUM_0,         &kp DOT,           U_NP,              U_NP
