#ifndef RETROID_INPUT_H
#define RETROID_INPUT_H

// The input device paths
#define RETROID_INPUT_GAMEPAD "/dev/ttyS0"
#define RETROID_INPUT_RUMBLE_MOTOR "/dev/input/event0"
#define RETROID_INPUT_TOUCHSCREEN "/dev/input/event1"
#define RETROID_INPUT_GPIO_KEYS "/dev/input/event2"
#define RETROID_INPUT_HEADPHONE_JACK "/dev/input/event3"
#define RETROID_INPUT_HEADPHONE_KEYBOARD "/dev/input/event4"
// Note: retroid_input does not have a gamepad_touchscreen event

// System buttons (gpio-keys)
#define RETROID_INPUT_SCANCODE_VOLUME_MINUS KEY_VOLUMEDOWN
#define RETROID_INPUT_SCANCODE_VOLUME_PLUS KEY_VOLUMEUP
#define RETROID_INPUT_SCANCODE_POWER KEY_POWER

// Retroid Pocket 2+ Serial Gamepad Scancodes
#define RETROID_INPUT_SCANCODE_HOME 102
#define RETROID_INPUT_SCANCODE_A 48
#define RETROID_INPUT_SCANCODE_B 49
#define RETROID_INPUT_SCANCODE_X 51
#define RETROID_INPUT_SCANCODE_Y 52
#define RETROID_INPUT_SCANCODE_L1 54
#define RETROID_INPUT_SCANCODE_R1 55
#define RETROID_INPUT_SCANCODE_L2 56
#define RETROID_INPUT_SCANCODE_R2 57
#define RETROID_INPUT_SCANCODE_SELECT 58
#define RETROID_INPUT_SCANCODE_START 59
#define RETROID_INPUT_SCANCODE_L3 61
#define RETROID_INPUT_SCANCODE_R3 62
#define RETROID_INPUT_SCANCODE_DPAD_UP 32
#define RETROID_INPUT_SCANCODE_DPAD_DOWN 33
#define RETROID_INPUT_SCANCODE_DPAD_LEFT 34
#define RETROID_INPUT_SCANCODE_DPAD_RIGHT 35

// XBOX360 gamepad axis (retrogame_joypad)
#define RETROID_INPUT_AXIS_LEFT_ANALOG_HORIZONTAL 0
#define RETROID_INPUT_AXIS_LEFT_ANALOG_VERTICAL 1
#define RETROID_INPUT_AXIS_RIGHT_ANALOG_HORIZONTAL 4
#define RETROID_INPUT_AXIS_RIGHT_ANALOG_VERTICAL 5

// Analog stick axis range, fuzz and flat values, unused
#define RETROID_INPUT_ANALOG_VALUE_MIN 800
#define RETROID_INPUT_ANALOG_VALUE_MAX 2902
#define RETROID_INPUT_ANALOG_VALUE_FUZZ 64
#define RETROID_INPUT_ANALOG_VALUE_FLAT 32

// Dpad axis range, fuzz and flat values (Retroid Serial Gamepad)
#define RETROID_INPUT_DPAD_VALUE_MIN -1
#define RETROID_INPUT_DPAD_VALUE_MAX 1
#define RETROID_INPUT_DPAD_VALUE_FUZZ 0
#define RETROID_INPUT_DPAD_VALUE_FLAT 0

void merge_retroid_input_inputs(int merged_gamepad);

void init_uart(int gamepad);

void enable_analog_sticks(int gamepad);

#endif