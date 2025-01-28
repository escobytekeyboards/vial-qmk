# escobytekeyboards/palette

![Palette](https://www.escobytekeyboards.com/wp-content/uploads/2025/01/escobytekeyboards-palette-macropad_hero_01_900x600.jpg)
Palette is a low-profile, fully-programmable macropad with 10-keys and dual encoder knobs.

Comes pre-flashed with default layout. Easily re-program using VIAL.

* Keyboard Maintainer: [Escobyte Keyboards](https://github.com/escobytekeyboards)
* Hardware Supported: RP2040 Zero
* Hardware Availability: www.escobytekeyboards.com


Features:

* hotswappable PCB
* compatible with Choc V1 low-profile switches
* (2) EC11 rotary encoders with push-button function. 15mm D-shafts.
* VIAL (preloaded) and QMK firmware compatible RP2040 MCU


Make example for this keyboard (after setting up your build environment):

    make escobytekeyboards/palette:default

Flashing example for this keyboard:

    make escobytekeyboards/palette:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
