#pragma once
#define CONFIGURATION_H_VERSION 02000901
#define PRUSA_SKR_CONFIGURATION_VERSION 20210615

//===========================================================================
//====================== All-in-One Prusa SKR Firmware ======================
//===========================================================================

/**
 * If you find this project helpful, please consider donating:
 *
 * Chris Warkocki, SKR Bear Project:             https://patreon.com/chriswarkocki
 * Keith Bennett, Marlin tester/config builder:  https://github.com/sponsors/thisiskeithb
 * Grégoire Saunier, Prusa Bear Project:         https://patreon.com/gregsaun
 * Scott Lahteine, lead Marlin dev/maintainer:   https://patreon.com/thinkyhead
 *
 * Here are some standard links for getting your machine setup:
 *
 * Chris Warkocki's SKR Bear Github:  https://github.com/codiac2600/SKR-Bear-Marlin
 * Chris Warkocki's SKR Bear wiring guide: https://git.io/JTRGU
 * Chris Warkocki's SKR Bear videos:  https://youtube.com/c/ChrisWarkocki/search?query=skr+bear
 * The FDM Lounge Discord server:     https://discord.gg/bD9NpuY8
 * Prusa Bear Upgrade Facebook group: https://facebook.com/groups/prusabearupgrade/
 * Prusa Community Facebook group:    https://facebook.com/groups/675831176090951/
 *
 * Thank you and Happy Printing!
 */

//===========================================================================
//=========================== Custom Printer Name ===========================
//===========================================================================

// "SKR Bear" or "SKR Caribou" will be used by default. Uncomment to set a custom printer name.
//#define PRUSA_SKR_CUSTOM_NAME "3D Printer"

//===========================================================================
//=========================== Printer/Frame Type ============================
//===========================================================================

// Prusa Bear frame (210mm Z) is enabled by default.

/**
 * Options:  Bear Frames                Caribou Frames
 *           1: Bear       (210mm Z)    3: Caribou 220  (220mm Z)
 *           2: Tall Bear  (320mm Z)    4: Caribou 320  (320mm Z)
 *                                      5: Caribou 420  (420mm Z)
 */
#define PRUSA_SKR_FRAME 1

//===========================================================================
//=============================== Motherboard ===============================
//===========================================================================

// SKR 1.4 is enabled by default.

/**
 * Options:  1: BigTreeTech SKR 1.4        (LPC1768)
 *           2: BigTreeTech SKR 1.4 Turbo  (LPC1769)
 *           3: BigTreeTech BTT002 1.0     (STM32F407VGT6)
 *           4: BigTreeTech SKR 2.0 Rev. B (STM32F407VGT6)
 */
#define PRUSA_SKR_MOTHERBOARD 1

//===========================================================================
//============================= Stepper Motors ==============================
//===========================================================================

/**
 * Extruder Stepper Motor
 *
 * Stock 1.8° extruder stepper is enabled by default.
 *
 * Options:  1: Stock 1.8°
 *           2: Bondtech/Motech 1.8° pancake
 *           3: LDO 0.9° pancake
 *           4: LDO planetary
 */
#define PRUSA_SKR_E_STEPPER 1

/**
 * X/Y Stepper Motors
 *
 * Stock 1.8° X/Y steppers are enabled by default.
 *
 * Options:  1: Stock 1.8° X/Y
 *           2: LDO 0.9° X/Y
 *           3: Moons 0.9° X/Y
 */
#define PRUSA_SKR_XY_STEPPERS 1

// Invert the stepper direction. Change (or reverse the motor connector) if an axis goes the wrong way.
//#define PRUSA_SKR_INVERT_E_DIR
//#define PRUSA_SKR_INVERT_X_DIR
//#define PRUSA_SKR_INVERT_Y_DIR
//#define PRUSA_SKR_INVERT_Z_DIR

/**
 *  Sensorless Homing
 *
 * Customize sensorless (StallGuard) & homing-related settings below.
 */
// If needed, uncomment *_STALL_SENSITIVITY to customize StallGuard sensitivity.
// This can also be customized via LCD under Configuration -> Advanced Settings -> TMC Drivers -> Sensorless Homing
//#define PRUSA_SKR_X_STALL_SENSITIVITY  90
//#define PRUSA_SKR_Y_STALL_SENSITIVITY  100

// If needed, uncomment PRUSA_SKR_HOMING_FEEDRATE_MM_M to customize Homing speeds (mm/min)
//#define PRUSA_SKR_HOMING_FEEDRATE_MM_M { (50*60), (50*60), (4*60) }

//===========================================================================
//================================= Hotend ==================================
//===========================================================================

/**
 * Extruder
 *
 * Bear Extruder is enabled by default.
 *
 * Options:   1: Bear extruder w/ PINDA V2 or SuperPINDA
 *            2: Bear extruder w/ integrated BLTouch mount by Vertigo 235 https://www.prusaprinters.org/prints/6606
 *            3: Bondtech BMG extruder w/ PINDA V2 or SuperPINDA https://www.bondtech.se/en/product/prusa-i3-mk3s-extruder-upgrade/
 *            4: Bondtech BMG extruder w/ BLTouch mount by Vertigo 235 https://www.prusaprinters.org/prints/6623
 */
#define PRUSA_SKR_EXTRUDER 1

/**
 * Pinda Probe
 *
 * PINDA V2 is enabled by default. This setting is ignored if you are using a BLTouch.
 *
 * Options:  1: PINDA V2
 *           2: SuperPINDA
 */
#define PRUSA_SKR_PINDA_PROBE 1

/*
 * Custom Probe Offset
 *
 * Default probe offsets will be used based on the extruder selection above.
 *
 * If needed, uncomment to customize probe offset. This can also be customized via LCD
 * under Configuration -> Advanced Settings -> Probe Offsets
 */
//#define PRUSA_SKR_NOZZLE_TO_PROBE_OFFSET { 23, 5, 0 }

/**
 * Part Cooling Fan
 *
 * Mechatronics 24V B5015E24B-BSR 5015 fan is enabled by default.
 *
 * 5V options are for BigTreeTech BTT002 1.0 only.
 *
 * Options:  1: 24v Mechatronics B5015E24B-BSR  // https://www.digikey.com/en/products/detail/mechatronics-fan-group/B5015E24B-BSR/5209731
 *           2: 24V Delta BFB0524HH             // https://www.digikey.com/en/products/detail/delta-electronics/BFB0524HH/1014447
 *           3: 5V LDO DF5015H05S               // https://www.printedsolid.com/products/ldo-5015-5v-blower-fan-df5015h05s
 *           4: 5V Stock Prusa 5015             // https://shop.prusa3d.com/en/spare-parts/1020-print-fan-mk3s-mini.html
 */
#define PRUSA_SKR_PART_COOLING_FAN 1

//===========================================================================
//========================= Thermal & PID Settings ==========================
//===========================================================================

/**
 * Thermistor
 *
 * Stock E3D Semitec 104NT-4-R025H42G/104GT-2 thermistor is enabled by default.
 *
 * Options:  1: E3D Semitec 104NT-4-R025H42G/104GT-2
 *           2: Slice Engineering's 450°C High Temperature thermistor
 *              !WARNING! If you plan to print above 295°C, you will need to upgrade from the stock V6 aluminum block or it will soften and/or melt!
 */
#define PRUSA_SKR_THERMISTOR 1

/**
 * Custom PID Settings
 *
 * Stock E3D V6 hotend and Prusa MK52 bed PID settings are enabled by default.
 *
 * If needed, uncomment PRUSA_SKR_CUSTOM_HOTEND_PID or PRUSA_SKR_CUSTOM_BED_PID to customize PID settings.
 */
//#define PRUSA_SKR_CUSTOM_HOTEND_PID
#if ENABLED(PRUSA_SKR_CUSTOM_HOTEND_PID)
  #define PRUSA_SKR_DEFAULT_Kp  16.50
  #define PRUSA_SKR_DEFAULT_Ki   1.16
  #define PRUSA_SKR_DEFAULT_Kd  58.80
  // Find your own by running "M303 E0 C8 S210" via serial to run autotune on the hotend at 210 °C for 8 cycles.
#endif

//#define PRUSA_SKR_CUSTOM_BED_PID
#if ENABLED(PRUSA_SKR_CUSTOM_BED_PID)
  #define PRUSA_SKR_DEFAULT_bedKp  28.13
  #define PRUSA_SKR_DEFAULT_bedKi   2.09
  #define PRUSA_SKR_DEFAULT_bedKd 483.07
  // Find your own by running "M303 E-1 C8 S65" via serial to run autotune on the bed at 65 °C for 8 cycles.
#endif

//===========================================================================
//============================== Bed Leveling ===============================
//===========================================================================

// Bilinear is enabled by default.

/**
 * Options:  1: Bilinear
 *           2: Unified Bed Leveling
 */
#define PRUSA_SKR_BED_LEVELING 1

//===========================================================================
//================================= Display =================================
//===========================================================================

// Stock / OLED RepRapDiscount smart controller is enabled by default.

/**
 * Options:  1: Stock or OLED RepRapDiscount smart controller.     // OLED screen is only compatible with LPC-based boards.
 *           2: BigTreeTech Dual Mode TFT (TFT35/TFT50/TFT70,etc.)
 */
#define PRUSA_SKR_DISPLAY 1

/**
 * LCD Language
 *
 * English is enabled by default:
 *
 * Options:  1: English                  12: Finnish                 23: Portuguese
 *           2: Aragonese                13: French                  24: Portuguese (Brazilian)
 *           3: Basque-Euskera           14: Galician                25: Romanian
 *           4: Bulgarian                15: German                  26: Russian
 *           5: Catalan                  16: Greek                   27: Slovak
 *           6: Chinese (Simplified)     17: Greek (Greece)          28: Spanish
 *           7: Chinese (Traditional)    18: Hungarian               29: Swedish
 *           8: Croatian                 19: Italian                 30: Turkish
 *           9: Czech                    20: Japanese                31: Ukrainian
 *           10: Danish                  21: Korean (South Korea)    32: Vietnamese
 *           11: Dutch                   22: Polish
 */
#define PRUSA_SKR_LCD_LANGUAGE 1

//===========================================================================
//================================ NeoPixels ================================
//===========================================================================

// NeoPixels are disabled by default. Uncomment to enable.
//#define PRUSA_SKR_NEOPIXELS
#if ENABLED(PRUSA_SKR_NEOPIXELS)
  /**
   * NeoPixel Type
   *
   * Options:  1: Red, Green, Blue          (NEO_GRB)
   *           2: Red, Green, Blue, White   (NEO_GRBW)
   */
  #define PRUSA_SKR_NEOPIXEL_TYPE          1

  #define PRUSA_SKR_NEOPIXEL_PIXELS       17    // 17 NeoPixels fit in the top 2040 extrusion
  #define PRUSA_SKR_NEOPIXEL_BRIGHTNESS  255    // 255 is max brightness
#endif
