/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

typedef struct systemConfig_s {
    uint8_t emf_avoidance;                   // change pll settings to avoid noise in the uhf band
    uint8_t i2c_highspeed;                   // Overclock i2c Bus for faster IMU readings
    uint32_t flashdev_id;
    uint16_t flashdev_nsect;
    uint16_t flashdev_pps;
} systemConfig_t;

PG_DECLARE(systemConfig_t, systemConfig);
