/*
                       Esplora Gaming Controller
                 Copyright (C) 2018-2019 schlizbaeda

   Esplora Gaming Controller is free software: you can redistribute it
   and/or modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation, either version 3 of 
   the License or any later version.

   Esplora Gaming Controller  is distributed in the hope that it will be
   useful, but WITHOUT ANY WARRANTY; without even the implied warranty
   of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Esplora Gaming Controller. 
   If not, see <http://www.gnu.org/licenses/>.   

   --------------------------------------------------------------------

   The sketch "Esplora Gaming Controller" emulates a mouse and a 
   keyboard to work as a gaming controller on a PC.

   It was inspired from the arduino sketch "Esplora Joystick Mouse"
   found at https://www.arduino.cc/en/Tutorial/EsploraJoystickMouse
   and for the keyboard part from "Esplora Kart"
   found at https://www.arduino.cc/en/Tutorial/EsploraKart

   WARNING: This sketch will take over your mouse movement. If you lose
   control of your mouse do the following:
   1) unplug the Esplora.
   2) open the EsploraBlink sketch
   3) hold the reset button down while plugging your Esplora back in
   4) while holding reset, click "Upload"
   5) when you see the message "Done compiling", release the reset
      button.

   This sketch "EsploraGamingController" implements:
   * smooth mouse movement with joystick using binary fixed-point numbers
   * scroll wheel emulation by slider potentiometer
   * right mouse click by light sensor
   * free keyboard assignments to switches 1-4
   planned features:
   * connection of four switches on TinkerKit connectors as seen on
     https://github.com/circuit69/EsploraTinkerkit
   * store configuration in the EEPROM
                        
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            

   History:
   --------
   Dec. 27th 2018: V1.0:
                   initial version by schlizbäda
                   mailto:schlizbaeda@gmx.de
*/

#include <Esplora.h>
#include <Keyboard.h>
#include <Mouse.h>

#define LOOP_DELAY 15
#define SERIAL_DEBUG -1

#define IDX_SWITCH1      0
#define IDX_SWITCH2      1
#define IDX_SWITCH3      2
#define IDX_SWITCH4      3
#define IDX_JOYLEFT      4
#define IDX_JOYRIGHT     5
#define IDX_JOYUP        6
#define IDX_JOYDOWN      7
#define IDX_JOYSWITCH    8 
#define IDX_SLIDERLEFT   9
#define IDX_SLIDERRIGHT 10
#define IDX_LIGHTSENSOR 11

#define FUNCT_DISABLED 255



bool gl_config = false;
byte gl_pressedbuttons = 0;

int gl_xCalib;
int gl_yCalib;

int gl_joyX;
int gl_joyY;
int gl_joyLastswitch;
int gl_sliderWheel;
int gl_sliderLastpos;
int gl_lightCalib;
int gl_lightLastIntensity;


byte gl_mode; // controller mode: 0..7
char* gl_modeNames[8] = {
  (char*)"common 1",
  (char*)"common 2",
  (char*)"MinecraftPi",
  (char*)"<<undefined 3>>",
  (char*)"<<undefined 4>>",
  (char*)"<<undefined 5>>",
  (char*)"<<undefined 6>>",
  (char*)"<<undefined 7>>"
};
char gl_modeKeycodes[8][12] = {
  { /* gl_mode == 0: "common 1" */
    (char)KEY_DOWN_ARROW, (char)KEY_LEFT_ARROW,  (char)KEY_UP_ARROW, (char)KEY_RIGHT_ARROW,                   /* buttons:      cursor keys        */
    (char)KEY_LEFT_ARROW, (char)KEY_RIGHT_ARROW, (char)KEY_UP_ARROW, (char)KEY_DOWN_ARROW,  (char)KEY_RETURN, /* joystick:     cursor keys        */
    (char)KEY_PAGE_UP,    (char)KEY_PAGE_DOWN,                                                                /* slider:       PGUP, PGDN         */
    ' '},                                                                                                     /* light sensor: SPACE              */
  { /* gl_mode == 1: "common 2" */
    (char)KEY_DOWN_ARROW, (char)KEY_LEFT_ARROW,  (char)KEY_UP_ARROW, (char)KEY_RIGHT_ARROW,                   /* buttons:      cursor keys        */
    0, 0, 0, 0, 0,                                                                                            /* joystick:     mouse movements    */
    0, 0,                                                                                                     /* slider:       mouse scroll wheel */
    (char)FUNCT_DISABLED},                                                                                    /* light sensor: right mouse click  */
  { /* gl_mode == 2: "MinecrasftPi" */ 
    's',                  'a',                   'w',                'd',                                     /* buttons:      "sawd"             */
    0, 0, 0, 0, 0,                                                                                            /* joystick:     mouse movements    */
    0, 0,                                                                                                     /* slider:       mouse scroll wheel */
    0},                                                                                                       /* light sensor: right mouse click  */
  { /* gl_mode == 3: "" */
    0, 0, 0, 0,            /* buttons:      ...                */
    0, 0, 0, 0, 0,         /* joystick:     ...                */
    0, 0,                  /* slider:       ...                */
    (char)FUNCT_DISABLED}, /* light sensor: ...                */
  { /* gl_mode == 4: "" */
    0, 0, 0, 0,            /* buttons:      ...                */
    0, 0, 0, 0, 0,         /* joystick:     ...                */
    0, 0,                  /* slider:       ...                */
    (char)FUNCT_DISABLED}, /* light sensor: ...                */
  { /* gl_mode == 5: "" */
    0, 0, 0, 0,            /* buttons:      ...                */
    0, 0, 0, 0, 0,         /* joystick:     ...                */
    0, 0,                  /* slider:       ...                */
    (char)FUNCT_DISABLED}, /* light sensor: ...                */
  { /* gl_mode == 6: "" */
    0, 0, 0, 0,            /* buttons:      ...                */
    0, 0, 0, 0, 0,         /* joystick:     ...                */
    0, 0,                  /* slider:       ...                */
    (char)FUNCT_DISABLED}, /* light sensor: ...                */
  { /* gl_mode == 7: "" */
    0, 0, 0, 0,            /* buttons:      ...                */
    0, 0, 0, 0, 0,         /* joystick:     ...                */
    0, 0,                  /* slider:       ...                */
    (char)FUNCT_DISABLED}  /* light sensor: ...                */
};

const byte gl_buttons[] = {
  SWITCH_DOWN,
  SWITCH_LEFT,
  SWITCH_UP,
  SWITCH_RIGHT
};
boolean gl_buttonLastStates[4];


/* function prototypes */
void setMode(byte mode);


void setup()
{
  int i;
  
  gl_joyX = 0;
  gl_joyY = 0;
  gl_joyLastswitch = 1023;
  gl_sliderWheel = 0;
  gl_sliderLastpos = 0;
  for (i = 0; i < 4; i++) {
    gl_buttonLastStates[i] = false;
  }


#if SERIAL_DEBUG
  Serial.begin(9600); // initialize serial communication with your computer
#endif
  Keyboard.begin();   // add some keyboard keys
  Mouse.begin();      // take control of the mouse

  // auto calibrate joystick:
  //gl_xCalib = 2;   // calibration value at my test device
  //gl_yCalib = -10; // calibration value at my test device
  gl_xCalib = 0;
  gl_yCalib = 0;
  for(i = 0; i < 16; i++) {
    delay(5);
    gl_xCalib += Esplora.readJoystickX();
    gl_yCalib += Esplora.readJoystickY();
  }
  gl_xCalib >>= 4;
  gl_yCalib >>= 4;
  

  // auto-adjust slider position to avoid starting with a fast mouse scroll wheel speed:
  gl_sliderLastpos = Esplora.readSlider() - 512;
  if (gl_sliderLastpos > 0) gl_sliderLastpos++; // simulate little movement from left side towards the middle to stop scrolling
  if (gl_sliderLastpos < 0) gl_sliderLastpos--; // simulate little movement from right side towards the middle to stop scrolling

  // auto calibrate light sensor:
  for(i = 0; i < 16; i++) {
    delay(5);
    gl_lightCalib += Esplora.readLightSensor();
  }
  gl_lightCalib >>= 4;
  gl_lightLastIntensity = gl_lightCalib;
  
#if SERIAL_DEBUG
  delay(800);
  Serial.println("schlizbaeda's Arduino Esplora Gaming Controller -- SETUP");

  Serial.print("Joystick auto-calibration: x=");
  Serial.print(gl_xCalib);
  Serial.print(", y=");
  Serial.println(gl_yCalib);

  Serial.print("Slider start position: ");
  Serial.println(gl_sliderLastpos);

  Serial.print("Light Sensor auto-calibration: ");
  Serial.println(gl_lightCalib);
  Serial.println();
#endif
  
  setMode(0);
}

void loop()
{
  #define IGNORE_LSB 1022
  #define MOUSE_FRACTIONAL_DIGITS 6
  #define MOUSE_FILTER_INTBITS 2 * 1024 - (2 << MOUSE_FRACTIONAL_DIGITS - 1)
  #define MOUSE_FILTER_FRACBITS (2 << MOUSE_FRACTIONAL_DIGITS - 1) - 1
  #define KEY_FRACTIONAL_DIGITS 9
  #define KEY_FILTER_INTBITS 2 * 1024 - (2 << KEY_FRACTIONAL_DIGITS - 1)
  #define KEY_FILTER_FRACBITS (2 << KEY_FRACTIONAL_DIGITS - 1) - 1
  #define SLIDER_ACTIONWINDOW 256
  #define LIGHTSENSOR_HYSTERESIS 64

  bool configure;
  int moveX;
  int moveY;
    int joySwitch = Esplora.readJoystickSwitch();            // read the joystick pushbutton
    int xValue = Esplora.readJoystickX() - gl_xCalib + 512;  // read the joystick's X position interpreted as binary fixed-point number to increase movement resolution
    int yValue = Esplora.readJoystickY() - gl_yCalib + 512;  // read the joystick's Y position interpreted as binary fixed-point number to increase movement resolution
    int sliderpos = Esplora.readSlider() - 512;              // read the slider to simulate the mouse wheel
    int lightIntensity = Esplora.readLightSensor();          // read the light sensor: if dark (covered by finger) simulate a right mouse click
    // keep relative joystick positions inside the resolution limits and ignore the lowest bit(s):
    if (xValue < 0) xValue = 0;
    if (xValue > 1023) xValue = 1023;
    xValue &= IGNORE_LSB;
    if (yValue < 0) yValue = 0;
    if (yValue > 1023) yValue = 1023;
    yValue &= IGNORE_LSB;    
  

  /**** cursor pad buttons ****/
  for (byte i = 0; i < 4; i++) {
    boolean lastState = gl_buttonLastStates[i];
    boolean newState = Esplora.readButton(gl_buttons[i]);
    if (lastState != newState) { // Something changed!
      /*
        The Keyboard library allows you to "press" and "release"
        the keys as two distinct actions. These actions can be
        linked to the buttons we're handling.
       */
      if (newState == PRESSED) {
        gl_pressedbuttons |= 1 << i; // set bit i
        if (gl_pressedbuttons == 15) {
          gl_config = not gl_config;
#if SERIAL_DEBUG
          Serial.print("cursor pad button bits ");
          Serial.print(gl_pressedbuttons);
          Serial.print(": ");
          Serial.print(gl_config ? "entered" : "leaved");
          Serial.print(" config mode\n");
#endif
          for (byte j = 0; j < 4; j++) {
            Keyboard.release(gl_modeKeycodes[gl_mode][j]);
          }
          gl_pressedbuttons = 0;
        }

        if (gl_config) {
          // config mode
//#if SERIAL_DEBUG
//          Serial.print("config bits: ");
//          Serial.println(gl_pressedbuttons);
//#endif
          if (gl_pressedbuttons == 4) {
            // switch 3 pressed: "UP"
            gl_mode--;
            if (gl_mode == 255) gl_mode = 7;
            setMode(gl_mode);
          }
          if (gl_pressedbuttons == 1) {
            // switch 1 pressed: "DOWN"
            gl_mode++;
            if (gl_mode > 7) gl_mode = 0;
            setMode(gl_mode);
          }
        }
        else {
          // normal key stroke
          Keyboard.press(gl_modeKeycodes[gl_mode][i]);
          //// debug extended keyboard codes from <Keyboard.h>:
          //if (i == 0) {
          //  // down
          //  Keyboard.write(GL_KEYCODE);
          //} else if (i == 1) {
          //  // left
          //  Serial.print("\n");          
          //  if ((byte)GL_KEYCODE > 0) GL_KEYCODE--;
          //  Serial.print((byte)GL_KEYCODE);
          //} else if (i == 2) {
          //  // up
          //  Keyboard.write(GL_KEYCODE);
          //  Serial.print("\n");                    
          //  if ((byte)GL_KEYCODE < 255) GL_KEYCODE++;
          //  Serial.print((byte)GL_KEYCODE);
          //} else if (i == 3) {
          //  // right
          //  Serial.print("\n");                    
          //  if ((byte)GL_KEYCODE < 255) GL_KEYCODE++;
          //  Serial.print((byte)GL_KEYCODE);
          //}
        }
      } else if (newState == RELEASED) {
        gl_pressedbuttons &= not (1 << i); // clear bit i
      
        if (gl_config) {
          // config mode
        }
        else {
          // normal key stroke
          Keyboard.release(gl_modeKeycodes[gl_mode][i]);
        }
      }
    }
    gl_buttonLastStates[i] = newState;
  }

  if (!gl_config) {
    /**** joystick movement ****/
    // The original calculation is a bit too trivial. It results in poor mouse movement accuracy:
    //int moveX = map(xValue, 0, 1023, 10, -10);  // map the X value to a range of movement for the mouse X
    //int moveY = map(yValue, 0, 1023, -10, 10);  // map the Y value to a range of movement for the mouse Y
  
    // advanced calculation by schlizbäda using binary fixed-point numbers:
    gl_joyX += xValue;
    gl_joyY += yValue;
  
    if (gl_modeKeycodes[gl_mode][IDX_JOYLEFT]
        + gl_modeKeycodes[gl_mode][IDX_JOYRIGHT]
        + gl_modeKeycodes[gl_mode][IDX_JOYUP]
        + gl_modeKeycodes[gl_mode][IDX_JOYDOWN]) {
      /* simulate keyboard entry */
      // calculate movement
      moveX = gl_joyX & KEY_FILTER_INTBITS;
      moveY = gl_joyY & KEY_FILTER_INTBITS;
      // calculate "integer" part of binary fixed-point number:
      moveX = (moveX >> KEY_FRACTIONAL_DIGITS) - (1024 >> KEY_FRACTIONAL_DIGITS + 1);
      moveY = (moveY >> KEY_FRACTIONAL_DIGITS) - (1024 >> KEY_FRACTIONAL_DIGITS + 1);
    
      // perform the keystrokes
      if (moveX < 0) Keyboard.write(gl_modeKeycodes[gl_mode][IDX_JOYRIGHT]);
      if (moveX > 0) Keyboard.write(gl_modeKeycodes[gl_mode][IDX_JOYLEFT]);
      if (moveY < 0) Keyboard.write(gl_modeKeycodes[gl_mode][IDX_JOYUP]);
      if (moveY > 0) Keyboard.write(gl_modeKeycodes[gl_mode][IDX_JOYDOWN]);
    
      // keep only fractional part of binary fixed-point number:  
      gl_joyX = gl_joyX & KEY_FILTER_FRACBITS;
      gl_joyY = gl_joyY & KEY_FILTER_FRACBITS;
    }
    else {
      /* no keystroke defined for any joystick direction:
         --> simulate mouse movement */
      // calculate movement
      moveX = gl_joyX & MOUSE_FILTER_INTBITS;
      moveY = gl_joyY & MOUSE_FILTER_INTBITS;
      // calculate "integer" part of binary fixed-point number:
      moveX = (moveX >> MOUSE_FRACTIONAL_DIGITS) - (1024 >> MOUSE_FRACTIONAL_DIGITS + 1);
      moveY = (moveY >> MOUSE_FRACTIONAL_DIGITS) - (1024 >> MOUSE_FRACTIONAL_DIGITS + 1);
    
      // mouse movement
      if (moveX != 0 || moveY != 0) Mouse.move(-moveX, moveY, 0); // move the mouse by the "integer" part 
    
      // keep only fractional part of binary fixed-point number:  
      gl_joyX = gl_joyX & MOUSE_FILTER_FRACBITS;
      gl_joyY = gl_joyY & MOUSE_FILTER_FRACBITS;
    }
    
    /**** joystick button ****/
    if (gl_joyLastswitch != joySwitch) {
      if (FUNCT_DISABLED == gl_modeKeycodes[gl_mode][IDX_JOYSWITCH]) {
        // functionality disabled: do nothing
      }
      else if (gl_modeKeycodes[gl_mode][IDX_JOYSWITCH]) {
        /* simulate keyboard entry */
        if (joySwitch == 0) { // if the joystick button is pressed (low-active)
          Keyboard.press(gl_modeKeycodes[gl_mode][IDX_JOYSWITCH]);
        } else {
          Keyboard.release(gl_modeKeycodes[gl_mode][IDX_JOYSWITCH]);
        }
      }
      else {
        /* no keystroke defined for any joystick direction:
           --> simulate left mouse button */
        if (joySwitch == 0) { // if the joystick button is pressed (low-active)
          Mouse.press();      // send a mouse left click
        } else {
          Mouse.release();    // if it's not pressed, release the mouse button
        }
      }
      gl_joyLastswitch = joySwitch;
    }
 
  
    /**** slider position ****/
//#if SERIAL_DEBUG
//    Serial.print("slider position ");
//    Serial.print(gl_sliderLastpos);
//    Serial.print("-->");
//    Serial.print(sliderpos);
//#endif
    if (sliderpos <= -SLIDER_ACTIONWINDOW) {
      // slider is at right side
      if (sliderpos > gl_sliderLastpos) {
        // little movement of slider towards middle position: stop scroll wheel immediately
        gl_sliderWheel = 0;
        gl_sliderLastpos = sliderpos - 1;
      } else {
        // interprete slider position as scroll wheel speed
        gl_sliderWheel += (sliderpos >> 5) + 8;
        gl_sliderLastpos = sliderpos;
      }
    }
    else if (sliderpos >= SLIDER_ACTIONWINDOW) {
      // slider is at left side
      if (sliderpos < gl_sliderLastpos) {
        // little movement of slider towards middle position: stop scroll wheel immediately
        gl_sliderWheel = 0;
        gl_sliderLastpos = sliderpos + 1;
      } else {
        // interprete slider position as scroll wheel speed
        gl_sliderWheel += (sliderpos >> 5) - 7;
        gl_sliderLastpos = sliderpos;
      }
    } else {
      // slider is near middle position: reset scroll speed completely!
      gl_sliderWheel = 0;
      gl_sliderLastpos = sliderpos;
    }
//#if SERIAL_DEBUG
//    Serial.print(": scroll value ");
//    Serial.print(gl_sliderWheel);
//#endif

  
    if (gl_sliderWheel > 64) {
      if (FUNCT_DISABLED == gl_modeKeycodes[gl_mode][IDX_SLIDERLEFT]) {
        // functionality disabled: do nothing  
      }
      else if (gl_modeKeycodes[gl_mode][IDX_SLIDERLEFT]) {
        // simulate keyboard
        Keyboard.write(gl_modeKeycodes[gl_mode][IDX_SLIDERLEFT]);
//#if SERIAL_DEBUG
//        Serial.print(": press keyboard ");
//        Serial.print(gl_modeKeycodes[gl_mode][IDX_SLIDERLEFT]);
//#endif
      }
      else {
        // simulate mouse wheel
        Mouse.move(0, 0, +1);
//#if SERIAL_DEBUG
//        Serial.print(": scroll mouse wheel UP");
//#endif
      }
      gl_sliderWheel = 0;
    }

    
    if (gl_sliderWheel < -64) {
      if (FUNCT_DISABLED == gl_modeKeycodes[gl_mode][IDX_SLIDERRIGHT]) {
        // functionality disabled: do nothing  
      }
      else if (gl_modeKeycodes[gl_mode][IDX_SLIDERRIGHT]) {
        // simulate keyboard
        Keyboard.write(gl_modeKeycodes[gl_mode][IDX_SLIDERRIGHT]);
//#if SERIAL_DEBUG
//        Serial.print(": press keyboard ");
//        Serial.print(gl_modeKeycodes[gl_mode][IDX_SLIDERRIGHT]);
//#endif
      }
      else {
        // simulate mouse
        Mouse.move(0, 0, -1);
//#if SERIAL_DEBUG
//        Serial.print(": scroll mouse wheel DN");
//#endif
      }
      gl_sliderWheel = 0;
    }
//#if SERIAL_DEBUG
//    Serial.print("\n");
//#endif

  
    /**** light sensor intensity ****/
    if (lightIntensity > gl_lightLastIntensity + LIGHTSENSOR_HYSTERESIS) {
      // intensity increased: finger removed from light sensor ("right click released")
      if (FUNCT_DISABLED == gl_modeKeycodes[gl_mode][IDX_LIGHTSENSOR]) {
        // functionality disabled: do nothing  
      }
      else if (gl_modeKeycodes[gl_mode][IDX_LIGHTSENSOR]) {
        Keyboard.release(gl_modeKeycodes[gl_mode][IDX_LIGHTSENSOR]);
      }
      else {
        Mouse.release(MOUSE_RIGHT);
      }
      gl_lightLastIntensity = lightIntensity;
    }
    else if (lightIntensity < gl_lightLastIntensity - LIGHTSENSOR_HYSTERESIS) {
      // intensity decreased: finger put on light sensor ("right click pressed")
      if (FUNCT_DISABLED == gl_modeKeycodes[gl_mode][IDX_LIGHTSENSOR]) {
        // funtionality disabled: do nothing  
      }
      else if (gl_modeKeycodes[gl_mode][IDX_LIGHTSENSOR]) {
        Keyboard.press(gl_modeKeycodes[gl_mode][IDX_LIGHTSENSOR]);
      }
      else {
        Mouse.press(MOUSE_RIGHT);
      }
      gl_lightLastIntensity = lightIntensity;
    }
  } /* !gl_config */

  delay(LOOP_DELAY); // a short delay before moving again
}




void setMode(byte mode)
{
  byte red, green, blue;

//  if (mode > 7) mode = 1;
//  if (mode < 1) mode = 7;
  gl_mode = mode;
  
  red =   mode & 1 ? 32 : 0;
  green = mode & 2 ? 32 : 0;
  blue =  mode & 4 ? 32 : 0;
  if (0 == red + green + blue) {
    red = 2;
    green = 2;
    blue = 2;
  }
  Esplora.writeRGB(red, green, blue);
#if SERIAL_DEBUG
    Serial.print("selected mode=");
    Serial.print(gl_mode);
    Serial.print(": ");
    Serial.println(gl_modeNames[gl_mode]);
#endif
}
