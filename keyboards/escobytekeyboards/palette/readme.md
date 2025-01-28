# escobytekeyboards/palette

![Palette](https://www.escobytekeyboards.com/wp-content/uploads/2025/01/escobytekeyboards-palette-macropad_hero_01_900x600.jpg)
Palette is a low-profile, fully-programmable macropad with 10-keys and dual encoder knobs.

Comes pre-flashed with default layout. Easily re-program using VIAL.

* Keyboard Maintainer: [Escobyte Keyboards](https://github.com/escobytekeyboards)
* Hardware Supported: RP2040 Zero
* Hardware Availability: [www.escobytekeyboards.com/product/palette](https://www.escobytekeyboards.com/product/palette)


Features:

* hotswappable PCB
* compatible with Choc V1 low-profile switches
* (2) EC11 rotary encoders with push-button function. 15mm D-shafts.
* VIAL (preloaded) and QMK firmware compatible RP2040 MCU


Make example for this keyboard (after setting up your build environment):

    make escobytekeyboards/palette:default

Flashing example for this keyboard:

    make escobytekeyboards/palette:default:flash

## Bootloader

Enter the bootloader 2 ways:

* **Physical reset button**: Hold the 'BOOT' button down while plugging in the device. Note: the switches and switchplate must first be removed to access the button on the RP2040 MCU.
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available. (Not mapped by default)
