/*
 * This file is part of the MSP430 SPI example.
 *
 * Copyright (C) 2012 Stefan Wendler <sw@kaltpost.de>
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
 */

/******************************************************************************
 * SPI example for MSP430.
 *
 * Stefan Wendler
 * sw@kaltpost.de
 * http://gpio.kaltpost.de
 *
 *****************************************************************************/

#ifndef __SPI_H
#define __SPI_H

/**
 * Initialize HW interface (SPI) to nRF24l01.
 */
void spi_init(void);

/**
 * Drive CS high.
 */
void spi_csh(void);

/**
 * Drive CS low.
 */
void spi_csl(void);

/**
 * Write-/Read one byte of data to/from the nRF through the SPI bus.
 *
 * @param[in]	data	byte to send
 * @return				byte received
 */
unsigned char spi_xfer_byte(unsigned char data);

#endif
