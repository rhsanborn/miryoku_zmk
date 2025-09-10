// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_KLUDGE_DOUBLETAPBOOT

#define XXX &none

#define U_BASE   0
#define U_TAP    1
#define U_EXTRA  2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9

// FPS friendly tap layer
//#define miryoku_layer_game \
//&kp tab,           &kp q,             &kp W,             &kp E,             &kp R,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
//&kp lshft,         &kp a,             &kp S,             &kp D,             &kp F,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
//&kp lctrl,         &kp z,             &kp X,             &kp C,             &kp V,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
//u_np,              u_np,              &kp LALT,          &kp SPC,           &mo U_GAMENUM,     &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &lt U_EXTRA SPACE, &kp TAB,           &kp RET,       &mt LC(LS(LA(LGUI))) BSPC,&u_to_U_BASE,   U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA \
&kp F1,            &kp F2,            &kp F3,            &kp F4,            &kp GRAVE,         &kp LBKT,          &kp F7,            &kp F8,            &kp F9,            &kp RBKT,         \
&kp NUM_6,         &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp 0,             &kp EQL,           &kp F4,            &kp F5,            &kp F6,            &kp SEMI,         \
&kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp NUM_4,         &kp NUM_5,         &kp BSLH,          &kp F1,            &kp F2,            &kp F3,            &kp GRAVE,        \
U_NP,              U_NP,              &to U_BASE,        &kp SPC,           &none,             &kp MINUS,         &kp NUM_0,         &kp DOT,           U_NP,              U_NP


