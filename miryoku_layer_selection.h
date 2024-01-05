// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-

#pragma once

#define MIRYOKU_LAYERMAPPING_BASE MIRYOKU_MAPPING
#define MIRYOKU_LAYER_BASE \
U_NU,           &kp F,              &kp R,              &kp W,              &kp Z,                  &kp Q,                  &kp D,              &kp U,              &kp G,              U_NU,           \
U_MT(LGUI, A),  U_MT(LALT, S),      U_MT(LCTRL, H),     U_MT(LSHFT, T),     &kp B,                  &kp J,                  U_MT(LSHFT, N),     U_MT(LCTRL, E),     U_MT(LALT, O),      U_MT(LGUI, I),  \
U_NU,           &kp X,              &kp M,              &kp C,              &kp V,                  &kp K,                  &kp L,              &kp P,              &kp Y,              U_NU,           \
U_NP,           U_NP,               U_LT(U_MEDIA, ESC), U_LT(U_SYM_LEFT, TAB),U_LT(U_NAV, SPACE),   U_LT(U_NUM, BSPC),      U_LT(U_SYM_RIGHT, RET),U_LT(U_FUN, ESC),U_NP,               U_NP

#define MIRYOKU_LAYERMAPPING_NAV MIRYOKU_MAPPING
#define MIRYOKU_LAYER_NAV \
U_NU,           U_NU,               U_NU,               U_NU,               U_NA,                   U_RDO,                  U_PST,              U_CPY,              U_CUT,              U_UND,          \
&kp LGUI,       &kp LALT,           &kp LCTRL,          &kp LSHFT,          U_NA,                   &kp LEFT,               &kp DOWN,           &kp UP,             &kp RIGHT,          &kp CAPS,       \
U_NA,           U_NU,               U_NU,               U_NU,               U_NA,                   &kp INS,                &kp PG_DN,          &kp PG_UP,          &kp HOME,           &kp END,        \
U_NP,           U_NP,               U_NA,               U_NA,               U_NA,                   &kp BSPC,&kp RET,                           &kp DEL,            U_NP,               U_NP

#define MIRYOKU_LAYERMAPPING_SYM_LEFT MIRYOKU_MAPPING
#define MIRYOKU_LAYER_SYM_LEFT \
U_NU,           U_NU,               U_NU,               U_NU,               U_NA,                   &kp GRAVE,              &kp FSLH,           &kp BSLH,           &kp ASTRK,          U_NU,           \
&kp LGUI,       &kp LALT,           &kp LCTRL,          &kp LSHFT,          U_NA,                   &kp PIPE,               &kp COMMA,          &kp DOT,            &kp EQUAL,          &kp QMARK,      \
U_NA,           U_NU,               U_NU,               U_NU,               U_NA,                   &kp HASH,               &kp PLUS,           &kp LT,             &kp GT,             U_NU,           \
U_NP,           U_NP,               U_NA,               U_NA,               U_NA,                   &kp SQT,                &kp DQT,            &kp SEMI,           U_NP,               U_NP

#define MIRYOKU_LAYERMAPPING_MEDIA MIRYOKU_MAPPING
#define MIRYOKU_LAYER_MEDIA \
U_NU,           U_NU,               U_NU,               U_NU,               U_NA,                   U_NU,                   U_NU,               U_NU,               U_NU,               U_NU,           \
&kp LGUI,       &kp LALT,           &kp LCTRL,          &kp LSHFT,          U_NA,                   &kp C_PREV,             &kp C_VOL_UP,       &kp C_VOL_DN,       &kp C_NEXT,         U_NU,           \
U_NA,           U_NU,               U_NU,               U_NU,               U_NA,                   &u_bt_sel_0,            &u_bt_sel_1,        &u_bt_sel_2,        &u_bt_sel_3,        &u_bt_sel_4,    \
U_NP,           U_NP,               U_NA,               U_NA,               U_NA,                   &kp C_PP,               &kp C_NEXT,         &kp C_MUTE,         U_NP,               U_NP

#define MIRYOKU_LAYERMAPPING_NUM MIRYOKU_MAPPING
#define MIRYOKU_LAYER_NUM \
U_NU,           &kp N9,             &kp N8,             &kp N7,             U_NU,                   U_NA,                   U_NU,               U_NU,               U_NU,               U_NU,           \
U_NU,           &kp N6,             &kp N5,             &kp N4,             &kp MINUS,              U_NA,                   &kp LSHFT,          &kp LCTRL,          &kp LALT,           &kp LGUI,       \
U_NU,           &kp N3,             &kp N2,             &kp N1,             &kp UNDER,              U_NA,                   U_NU,               U_NU,               U_NU,               U_NA,           \
U_NP,           U_NP,               &kp DLLR,           &kp DOT,            &kp N0,                 U_NA,                   U_NA,               U_NA,               U_NP,               U_NP

#define MIRYOKU_LAYERMAPPING_SYM_RIGHT MIRYOKU_MAPPING
#define MIRYOKU_LAYER_SYM_RIGHT \
U_NU,           &kp TILDE,          &kp LBKT,           &kp RBKT,           &kp CARET,              U_NA,                   U_NU,               U_NU,               U_NU,               U_NU,           \
&kp EXCL,       &kp AT,             &kp LPAR,           &kp RPAR,           &kp AMPS,               U_NA,                   &kp LSHFT,          &kp LCTRL,          &kp LALT,           &kp LGUI,       \
U_NU,           &kp DLLR,           &kp LBRC,           &kp RBRC,           &kp PRCNT,              U_NA,                   U_NU,               U_NU,               U_NU,               U_NA,           \
U_NP,           U_NP,               &kp COLON,          &kp UNDER,          &kp MINUS,              U_NA,                   U_NA,               U_NA,               U_NP,               U_NP

#define MIRYOKU_LAYERMAPPING_FUN MIRYOKU_MAPPING
#define MIRYOKU_LAYER_FUN \
U_NU,           &kp F9,             &kp F8,             &kp F7,             &kp F12,                U_NA,                   U_NU,               U_NU,               U_NU,               U_NU,           \
U_NU,           &kp F6,             &kp F5,             &kp F4,             &kp F11,                U_NA,                   &kp LSHFT,          &kp LCTRL,          &kp LALT,           &kp LGUI,       \
U_NU,           &kp F3,             &kp F2,             &kp F1,             &kp F10,                U_NA,                   U_NU,               U_NU,               U_NU,               U_NA,           \
U_NP,           U_NP,               &kp ESC,            &kp TAB,            &kp SPACE,              U_NA,                   U_NA,               U_NA,               U_NP,               U_NP
