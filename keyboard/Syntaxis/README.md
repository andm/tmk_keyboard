Syntaxis keyboard firmware
======================
DIY keyboard, designed for ergonomic Emacs usage. Firmware is a remix of GH60.

# Building

The only keymap you want to build is 'keymap_syntaxis.c'
To build a hex file, use the following command:
    $ make KEYMAP=syntaxis
To flash to the Pro Micro, use:
    $ avrdude -v -v -v -v -p atmega32u4 -P /dev/ttyACM0 -c avr109 -U flash:w:gh60_lufa.hex:i -u -e 


#  Layout
## The layout is an altered version of Dvorak

## Layer 0

    #-----------------------------------------------#
    |Esc| ' | , | . | P | Y | F | G | C | R | L | - | 
    |-----------------------------------------------|
    |Fn4| A | O | E | U | I | D | H | T | N | S |Ent| 
    |-----------------------------------------------|
    | \ | Q | J | K | X | B | M | W | V | Z | / | ; |
    #-----------------------------------------------#
        | ` | [ | ] |Win|Ctr|Alt|Lft|Dwn|Up |Rgt|
        #---------------------------------------#
                    #---------------# 
                    |Fn6|Fn3|Bck|Fn0|
                    #---------------#

## Layer 1

    #-----------------------------------------------#
    | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | = |   | 
    |-----------------------------------------------|
    |F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12| 
    |-----------------------------------------------|
    |Fn1|VDn|VUp|VMt|Hme|End|PgU|MLC|MWD|MWU|MRC|   |
    #-----------------------------------------------#
        |Prv|Nxt|Pse|Win|Ctr|PgD|MLf|MDn|MUp|MRt|
        #---------------------------------------#
                    #---------------# 
                    |Shf|   |Del|Fn0|
                    #---------------#

## Layer 2

    #-----------------------------------------------#
    |Esc| 4 | 1 |Tab| Q | W | E | R | T | Y | U | I | 
    |-----------------------------------------------|
    |Fn2| 5 | 2 |CpL| A | S | D | F | G | H | J | K | 
    |-----------------------------------------------|
    |Fn1| 6 | 3 |Shf| Z | X | C | V | B | N | M |Ent|
    #-----------------------------------------------#
        |Bck|Del|Ctr|Alt|Spc|Spc|Lft|Dwn|Up |Rgt|
        #---------------------------------------#
                    #---------------#
                    |   |Spc|Spc|   |
                    #---------------#

Function keys:
FN0: Switch to layer 1
FN1: Toggle gaming layer
FN2: Gaming layer: change numbers to function keys
FN3: Tap for space, hold for control
FN4: Tap for tab, hold for alt
FN5: Oneshot shift 
FN6: Tap for FN5, hold for shift
