/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../../inc/MarlinConfigPre.h"

#if HAS_GRAPHICAL_TFT

extern const uint8_t down_32x32x4[512] = {
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x77, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x77, 0x88, 0x88, 0x88,
  0x88, 0x87, 0x78, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x98, 0x88, 0x88, 0x88,
  0x88, 0x87, 0x8f, 0xb4, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0xfa, 0x48, 0x88, 0x88,
  0x88, 0x78, 0xff, 0xfa, 0x38, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8f, 0xff, 0x84, 0x88, 0x88,
  0x88, 0x7f, 0xff, 0xff, 0xa3, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0xff, 0xff, 0xfa, 0x47, 0x88,
  0x88, 0x7a, 0xff, 0xff, 0xfa, 0x38, 0x88, 0x88, 0x88, 0x77, 0x8f, 0xff, 0xff, 0xc5, 0x35, 0x88,
  0x88, 0x77, 0x9f, 0xff, 0xff, 0xa3, 0x88, 0x88, 0x87, 0x79, 0xff, 0xff, 0xfc, 0x43, 0x46, 0x88,
  0x88, 0x87, 0x79, 0xff, 0xff, 0xfa, 0x47, 0x88, 0x77, 0x9f, 0xff, 0xff, 0xc4, 0x34, 0x78, 0x88,
  0x88, 0x88, 0x77, 0x9f, 0xff, 0xff, 0xa4, 0x78, 0x79, 0xff, 0xff, 0xfc, 0x43, 0x47, 0x88, 0x88,
  0x88, 0x88, 0x87, 0x79, 0xff, 0xff, 0xf9, 0x47, 0x9f, 0xff, 0xff, 0xc3, 0x34, 0x78, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x77, 0x9f, 0xff, 0xff, 0x96, 0xff, 0xff, 0xfc, 0x33, 0x47, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x87, 0x79, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd3, 0x44, 0x78, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x77, 0x9f, 0xff, 0xff, 0xff, 0xfd, 0x34, 0x47, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x87, 0x79, 0xff, 0xff, 0xff, 0xc3, 0x44, 0x78, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x9f, 0xff, 0xfc, 0x33, 0x47, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x79, 0xff, 0xc3, 0x34, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0xac, 0x43, 0x47, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x86, 0x34, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x66, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88
};

#endif // HAS_GRAPHICAL_TFT