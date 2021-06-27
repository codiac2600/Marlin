# All-in-One Prusa SKR Marlin Firmware (Beta)

![GitHub](https://img.shields.io/github/license/marlinfirmware/marlin.svg)
![GitHub contributors](https://img.shields.io/github/contributors/marlinfirmware/marlin.svg)
[![CI](https://github.com/codiac2600/SKR-Bear-Marlin/actions/workflows/test-all-in-one-builds.yml/badge.svg)](https://github.com/codiac2600/SKR-Bear-Marlin/actions/workflows/test-all-in-one-builds.yml)

<img align="right" width=175 src="buildroot/share/pixmaps/logo/prusa-bear-btt-logo.png" />

## About

Originally configured for a Prusa MK3S/+ Bear [upgraded with an SKR 1.4](https://github.com/codiac2600/SKR-MK3s-V1.4-Beta), this All-in-One firmware supports 210/320mm Bear and 220/320/420mm Caribou printers with common upgrades like:
- Motherboards
  - SKR 1.4 + Turbo
  - SKR 2.0 Rev. B with flash drive support
  - BTT002
  - *MKS/Makerbase SGen-L V2 (Coming soon!)*
  - *MKS/Makerbase Robin Nano V3 (Coming soon!)*
- Drivers
  - TMC2209s
  - *TMC5160s (Coming soon!)*
- Display
  - BigTreeTech dual mode TFT (TFT35/TFT50/TFT70/etc.)
  - WINSTAR OLED-based RepRapDiscount smart controller
- LDO/Moons Stepper Motors
  - Planetary extruder
  - 0.9° X/Y/E
- Bondtech BMG extruder
  - BMG upgrade kit from Bondtech
  - Self-printed BMG
- Slice Engineering 450°C High Temperature thermistor
- Probes
   - BLTouch
   - SuperPINDA
- NeoPixels

## Configuring & Building Prusa SKR Firmware

To configure this firmware, edit [`Prusa_SKR_Configuration.h`](Marlin/Prusa_SKR_Configuration.h)

To build this firmware, you'll need [PlatformIO](https://docs.platformio.org/en/latest/ide.html#platformio-ide). Detailed setup instructions can be found on the [Building Marlin with PlatformIO for ReArm](https://marlinfw.org/docs/basics/install_rearm.html) guide.

## Helpful links

 - Chris Warkocki's [SKR Bear Github](https://github.com/codiac2600/SKR-Bear-Marlin), [SKR Bear wiring guide](https://github.com/codiac2600/SKR-MK3s-V1.4-Beta/blob/master/SKR%20MK3s%20Wire%20Guide.pdf), and [SKR Bear videos](https://youtube.com/c/ChrisWarkocki/search?query=skr+bear)
 - **#🐻-skr-bear-firmware** on [The FDM Lounge Discord server](https://discord.gg/bD9NpuY8)
 - [Prusa Bear Upgrade Facebook group](https://facebook.com/groups/prusabearupgrade/)
 - [Prusa Community Facebook group](https://facebook.com/groups/675831176090951/)

## Credits

If you find this project helpful, please consider donating:

 - Chris Warkocki [[@codiac2600](https://github.com/codiac2600)], SKR Bear Project - [Patreon](https://patreon.com/chriswarkocki)
 - Keith Bennett [[@thisiskeithb](https://github.com/thisiskeithb)], Marlin tester/config builder - [Github Sponsors](https://github.com/sponsors/thisiskeithb)
 - Grégoire Saunier [[@gregsaun](https://github.com/gregsaun)], Prusa Bear Project - [Patreon](https://patreon.com/gregsaun)
 - Scott Lahteine [[@thinkyhead](https://github.com/thinkyhead)], Lead Marlin dev/maintainer - [Donate](https://www.thinkyhead.com/donate-to-marlin)

## License

Marlin and the Prusa SKR Firmware is published under the [GPL license](/LICENSE) because we believe in open development.