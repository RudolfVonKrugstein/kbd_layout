
#define LDEF 0
#define LSYM 1
#define LNAV 2
#define LNUM 3
#define LMSE 4
#define LBLE 5
// DEFAULT LAYOUT LEFT
//                       |-------------|------------|------------|------------|------------|
#define DEF_NUMROW_LEFT   &kp N1        &kp N2       &kp N3       &kp N4       &kp N5
//                       |-------------|------------|------------|------------|------------|
#define DEF_TOPROW_LEFT   &lt LBLE Q    &kp W        &kp E        &kp R        &kp T
//                       |-------------|------------|------------|------------|------------|
#define DEF_MIDROW_LEFT   &kp A         &lhm LWIN S  &lhm LALT D  &lhm LCTRL F &kp G      
//                       |-------------|------------|------------|------------|------------|
#define DEF_BOTROW_LEFT   &kp Z         &kp X        &kp C        &lt 1 V      &kp B
//                       |-------------|------------|------------|------------|------------|
#define DEF_THUMBS_LEFT   &sl LNUM      &sl LSYM     &sl LNAV

// DEFAULT LAYOUT RIGHT
//                       |-------------|------------|------------|------------|------------|
#define DEF_NUMROW_RIGHT  &kp N6        &kp N7       &kp N8       &kp N9       &kp N0  
//                       |-------------|------------|------------|------------|------------|
#define DEF_TOPROW_RIGHT  &lt LMSE Y    &kp U        &kp I        &kp O        &lt 4 P
//                       |-------------|------------|------------|------------|------------|
#define DEF_MIDROW_RIGHT  &kp H         &rhm RCTRL J &rhm LALT K  &rhm RWIN L  &kp BACKSPACE
//                       |-------------|------------|------------|------------|------------|
#define DEF_BOTROW_RIGHT  &kp N         &kp M        &kp COMMA    &kp DOT      &kp TAB
//                       |-------------|------------|------------|------------|------------|
#define DEF_THUMBS_RIGHT                             &sk RSHIFT   &kp SPACE    &sl LNUM

// ###############################################################################

// SYM LAYOUT LEFT
//                       |-------------|------------|------------|------------|------------|
#define SYM_NUMROW_LEFT   &kp N1        &kp N2       &kp N3       &kp N4       &kp N5
//                       |-------------|------------|------------|------------|------------|
#define SYM_TOPROW_LEFT   &kp PERCENT   &kp LPAR     &kp RPAR     &kp SEMICOLON &kp CARET
//                       |-------------|------------|------------|------------|------------|
#define SYM_MIDROW_LEFT   &kp QUESTION  &lhm LWIN LBKT &lhm LALT RBKT &lhm LCTRL COLON &kp SLASH 
//                       |-------------|------------|------------|------------|------------|
#define SYM_BOTROW_LEFT   &kp AT_SIGN   &kp  LBRC    &kp RBRC     &kp DOLLAR   &kp TILDE
//                       |-------------|------------|------------|------------|------------|
#define SYM_THUMBS_LEFT   &none         &none        &kp ENTER

// SYM LAYOUT RIGHT
//                       |-------------|------------|------------|------------|------------|
#define SYM_NUMROW_RIGHT  &kp N6        &kp N7       &kp N8       &kp N9       &kp N0  
//                       |-------------|------------|------------|------------|------------|
#define SYM_TOPROW_RIGHT  &kp AMPERSAND &kp DOUBLE_QUOTES &kp LESS_THAN  &kp GREATER_THAN &kp SINGLE_QUOTE
//                       |-------------|------------|------------|------------|------------|
#define SYM_MIDROW_RIGHT  &kp HASH      &rhm RCTRL EQUAL &rhm LALT PLUS &rhm LWIN STAR &kp EXCLAMATION
//                       |-------------|------------|------------|------------|------------|
#define SYM_BOTROW_RIGHT  &kp MINUS     &kp UNDERSCORE &kp GRAVE  &kp PIPE     &kp BACKSLASH
//                       |-------------|------------|------------|------------|------------|
#define SYM_THUMBS_RIGHT                             &caps_word   &kp ENTER    &none

// ###############################################################################

// NAV LAYOUT LEFT
//                       |-------------|------------|------------|------------|------------|
#define NAV_NUMROW_LEFT   &kp N1        &kp N2       &kp N3       &kp N4       &kp N5
//                       |-------------|------------|------------|------------|------------|
#define NAV_TOPROW_LEFT   &none         &kp RA(S)    &kp RA(Y)    &kp RA(P)    &kp RA(Q)
//                       |-------------|------------|------------|------------|------------|
#define NAV_MIDROW_LEFT   &none         &kp LWIN     &kp LALT     &kp LCTRL    &none         
//                       |-------------|------------|------------|------------|------------|
#define NAV_BOTROW_LEFT   &none         &none        &none        &none        &none         
//                       |-------------|------------|------------|------------|------------|
#define NAV_THUMBS_LEFT   &none         &none        &trans       

// NAV LAYOUT RIGHT
//                       |-------------|------------|------------|------------|------------|
#define NAV_NUMROW_RIGHT  &kp N6        &kp N7       &kp N8       &kp N9       &kp N0  
//                       |-------------|------------|------------|------------|------------|
#define NAV_TOPROW_RIGHT  &kp HOME      &kp PG_DN    &kp PG_UP    &kp END      &none
//                       |-------------|------------|------------|------------|------------|
#define NAV_MIDROW_RIGHT  &kp LEFT      &kp DOWN     &kp UP       &kp RIGHT    &trans
//                       |-------------|------------|------------|------------|------------|
#define NAV_BOTROW_RIGHT  &none         &kp ESCAPE   &none        &none        &trans
//                       |-------------|------------|------------|------------|------------|
#define NAV_THUMBS_RIGHT                             &caps_word   &none        &none

// ###############################################################################

// NUM LAYOUT LEFT
//                       |-------------|------------|------------|------------|------------|
#define NUM_NUMROW_LEFT   &kp N1        &kp N2       &kp N3       &kp N4       &kp N5
//                       |-------------|------------|------------|------------|------------|
#define NUM_TOPROW_LEFT   &kp F1        &kp F2       &kp F3       &kp F4       &kp   F5
//                       |-------------|------------|------------|------------|------------|
#define NUM_MIDROW_LEFT   &kp F6        &lhm LWIN F7 &lhm LALT F8 &lhm LCTRL F9 &lt 3 F10
//                       |-------------|------------|------------|------------|------------|
#define NUM_BOTROW_LEFT   &kp F11       &kp F12      &kp F13     &kp F14       &kp F15
//                       |-------------|------------|------------|------------|------------|
#define NUM_THUMBS_LEFT   &to 0         &none        &trans

// NUM LAYOUT RIGHT
//                       |-------------|------------|------------|------------|------------|
#define NUM_NUMROW_RIGHT  &kp N6        &kp N7       &kp N8       &kp N9       &kp N0  
//                       |-------------|------------|------------|------------|------------|
#define NUM_TOPROW_RIGHT  &none         &kp N7       &kp N8       &kp N9       &none
//                       |-------------|------------|------------|------------|------------|
#define NUM_MIDROW_RIGHT  &to 0         &rhm RCTRL N4 &rhm LALT N5 &rhm LWIN N6 &trans
//                       |-------------|------------|------------|------------|------------|
#define NUM_BOTROW_RIGHT  &kp N0        &kp N1       &kp N2       &kp N3       &trans
//                       |-------------|------------|------------|------------|------------|
#define NUM_THUMBS_RIGHT                             &trans       &none        &to 0

// ###############################################################################

// MSE LAYOUT LEFT
//                       |-------------|------------|------------|------------|------------|
#define MSE_NUMROW_LEFT   &kp N1        &kp N2       &kp N3       &kp N4       &kp N5
//                       |-------------|------------|------------|------------|------------|
#define MSE_TOPROW_LEFT   &none         &none        &mmv MOVE_UP &none        &msc MOVE_DOWN
//                       |-------------|------------|------------|------------|------------|
#define MSE_MIDROW_LEFT   &none         &mmv MOVE_LEFT &mmv MOVE_DOWN &mmv MOVE_RIGHT &msc MOVE_UP
//                       |-------------|------------|------------|------------|------------|
#define MSE_BOTROW_LEFT   &none         &none        &none        &none        &none         
//                       |-------------|------------|------------|------------|------------|
#define MSE_THUMBS_LEFT                              &none         &none        &trans       

// MSE LAYOUT RIGHT
//                       |-------------|------------|------------|------------|------------|
#define MSE_NUMROW_RIGHT  &kp N6        &kp N7       &kp N8       &kp N9       &kp N0  
//                       |-------------|------------|------------|------------|------------|
#define MSE_TOPROW_RIGHT  &none         &mkp LCLK    &mkp MCLK    &mkp RCLK    &none
//                       |-------------|------------|------------|------------|------------|
#define MSE_MIDROW_RIGHT  &none         &kp RCTRL    &kp LALT     &kp RWIN     &trans
//                       |-------------|------------|------------|------------|------------|
#define MSE_BOTROW_RIGHT  &none         &none        &none        &none        &trans
//                       |-------------|------------|------------|------------|------------|
#define MSE_THUMBS_RIGHT  &trans        &none        &none

// ###############################################################################

// BLT LAYOUT LEFT
//                       |-------------|------------|------------|------------|------------|
#define BLT_NUMROW_LEFT   &kp N1        &kp N2       &kp N3       &kp N4       &kp N5
//                       |-------------|------------|------------|------------|------------|
#define BLT_TOPROW_LEFT   &none         &sys_reset   &bootloader  &none         &none         
//                       |-------------|------------|------------|------------|------------|
#define BLT_MIDROW_LEFT   &none         &none        &none        &none        &none         
//                       |-------------|------------|------------|------------|------------|
#define BLT_BOTROW_LEFT   &none         &none        &none        &none        &none         
//                       |-------------|------------|------------|------------|------------|
#define BLT_THUMBS_LEFT                             &none         &none        &trans       

// BLT LAYOUT RIGHT
//                       |-------------|------------|------------|------------|------------|
#define BLT_NUMROW_RIGHT  &kp N6        &kp N7       &kp N8       &kp N9       &kp N0  
//                       |-------------|------------|------------|------------|------------|
#define BLT_TOPROW_RIGHT  &bt BT_CLR    &none        &bootloader  &sys_reset   &none
//                       |-------------|------------|------------|------------|------------|
#define BLT_MIDROW_RIGHT  &none         &none        &none        &none        &none
//                       |-------------|------------|------------|------------|------------|
#define BLT_BOTROW_RIGHT  &bt BT_SEL 0  &bt BT_SEL 1 &bt BT_SEL 2 &bt BT_SEL 3 &bt BT_SEL 4
//                       |-------------|------------|------------|------------|------------|
#define BLT_THUMBS_RIGHT  &trans        &none        &none
