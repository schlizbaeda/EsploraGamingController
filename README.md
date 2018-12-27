# Arduino Esplora Gaming Controller

This Arduino sketch emulates a mouse and a keyboard subset to work as a
USB gaming controller for a PC using the [Arduino Esplora board](https://store.arduino.cc/arduino-esplora).

It was inspired by the original Arduino sketch [Esplora Joystick Mouse](https://www.arduino.cc/en/Tutorial/EsploraJoystickMouse)
and for the keyboard part by [Esplora Kart](https://www.arduino.cc/en/Tutorial/EsploraKart).

## Implemented Features
* smooth mouse movement with joystick using binary fixed-point numbers
* scroll wheel emulation by slider potentiometer
* right mouse click by light sensor
* free keyboard assignments to switches 1-4

## Planned Features
* connection of four switches at TinkerKit connectors as seen on [EsploraTinkerkit](https://github.com/circuit69/EsploraTinkerkit)
* store configuration in the EEPROM

## Manual
Use the `Arduino Web Editor` or the `Arduino Desktop IDE` as described
on the [Getting Started](https://www.arduino.cc/en/Guide/HomePage)
section of the official [Arduino web site](https://www.arduino.cc) to
program this sketch into the FLASH memory of the Arduino Esplora board.

An Arduino Esplora board flashed with this sketch emulates a USB mouse
and a USB keyboard. There are eight predefined modes with different key
mappings. The mode is indicated via the Esplora's muli colour LED:
* mode 0: "common 1" - dark white
* mode 1: "common 2" - red
* mode 2: "MinecraftPi" - green
* mode 3: "undefined 3" - yellow
* mode 4: "undefined 4" - blue
* mode 5: "undefined 5" - magenta
* mode 6: "undefined 6" - cyan
* mode 7: "undefined 7" - white

When pressing the four Arduino switches at the same time the sketch
will enter the config mode. Here the user can choose the key mapping
mode by pressing the switches 1 or 3. To select the chosen mode press
again the four switches at the same time. To avoid an unintended mode
change press switch 2 or 4 at first and then the other switches.

* mode 0: only keyboard emulation
* mode 1: the switches emulate the cursor keys and the joystick the mouse
* mode 2: Adjusted for MinecraftPi: the switches emulate "sawd" to move the player
* mode 3-7: not defined yet

## Adjusting the Code
The easiest way to adjust the mouse and keyboard emulation is to edit
the values of the two-dimensional array variable `gl_modeKeycodes` and
to re-flash the Arduino Esplora board.

For keyboard emulation use the ASCII codes or the
[extended keyboard modifiers](https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers).
The value 0 means mouse emulation.
The value 255 disables this input device completely.

When the value 0 for mouse emulation is given,
* joystick movement emulates mouse cursor movement
* joystick pressure emulates a left button mouse click
* the light sensor emulates a right button mouse click
* the slider potentiometer emulates the mouse wheel
* the switches emulate nothing!

The analogue input modules like joystick and slider potentiometer
return a 10bit value. This 10bit resolution is used to adjust the speed
of the emulated action. If the slider is moved towards the middle the
scroll wheel emulation is stopped immediately.
The light sensor is treated as a digital input button: Shadowing the
sensor means pressing a button and increasing light intensity means
releasing a button.

