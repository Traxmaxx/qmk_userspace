# Charybdis (6x4, 5x3 "Nano")

An ergonomic keyboard with integrated trackball.
Engineered to be a full mouse replacement solution with high-quality, custom-developed components.
There are 6x4 and 5x3 "Nano" versions.

-   Keyboard Maintainer: [Bastard Keyboards](https://github.com/Bastardkb)
-   Hardware Supported: elite-C V4
-   Hardware Availability: [Bastard Keyboards](https://bastardkb.com)

Make example for this keyboard (after setting up your build environment):

```
make bastardkb/charybdis/4x6:default
make bastardkb/charybdis/4x6:vial
make bastardkb/charybdis/4x6:traxmaxx
```

Flashing example for this keyboard:

```
make bastardkb/charybdis/4x6:default:flash
make bastardkb/charybdis/4x6:vial:flash
make bastardkb/charybdis/4x6:traxmaxx:flash
```

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the top left key of the left side of the keyboard while connecting the left side to the computer. Similarly, hold down the top right key of the right side of the keyboard while connecting the right side to the computer.
* **Physical reset button**: Briefly press the button on the back of the PCB
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
