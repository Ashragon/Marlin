/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// Phillips Ender 3 Hotend Thermistor (Original: 100k Hisens 3950 Marlin-Code: 13)
const short temptable_666[][2] PROGMEM = {
  { OV(  36.56 ), 246 },
  { OV(  42.81 ), 240 },
  { OV(  50.19 ), 230 },
  { OV(  60.44 ), 220 },
  { OV(  71.81 ), 211 },
  { OV(  87.00 ), 200 },
  { OV( 102.00 ), 194 },
  { OV( 124.19 ), 184 },
  { OV( 151.00 ), 174 },
  { OV( 183.00 ), 164 },
  { OV( 220.00 ), 154 },
  { OV( 268.50 ), 143 },
  { OV( 317.00 ), 131 },
  { OV( 382.06 ), 120 },
  { OV( 447.13 ), 111 },
  { OV( 518.88 ), 102 },
  { OV( 590.69 ),  93 },
  { OV( 662.69 ),  84 },
  { OV( 737.00 ),  75 },
  { OV( 797.75 ),  67 },
  { OV( 857.81 ),  57 },
  { OV( 898.56 ),  49 },
  { OV( 939.13 ),  40 },
  { OV( 962.88 ),  32 },
  { OV(   1023 ),  20}
};
