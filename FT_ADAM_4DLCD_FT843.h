/*****************************************************************************
* Copyright (c) Future Technology Devices International 2014
* propriety of Future Technology devices International.
*
* Software License Agreement
*
* This code is provided as an example only and is not guaranteed by FTDI. 
* FTDI accept no responsibility for any issues resulting from its use. 
* The developer of the final application incorporating any parts of this 
* sample project is responsible for ensuring its safe and correct operation 
* and for any consequences resulting from its use.
*****************************************************************************/
/**
* @file                           FT_ADAM_4DLCD_FT843.h
* @brief                          Contains arduino specific macros for FT_ADAM_4DLCD_FT843 platform.
								  Tested platform version: Arduino 1.0.4 and later
* @version                        0.1.0
* @date                           2014/02/05
*
*/

#ifndef _FT_ADAM_4DLCD_FT843_H_
#define _FT_ADAM_4DLCD_FT843_H_

/* This platform contains FT800 hardware, resistive touch, WQVGA display panel, sdcard via spi, uart connection from pc */

/* Platform specific includes */
#if defined(__AVR__)
	#if defined(ARDUINO) && ARDUINO >= 100
		#include "Arduino.h"
	#else
		#include "WProgram.h"
	#endif

#else
	//#include "WProgram.h"
#endif

/* Standard library includes */
#include "stdint.h"
#include "avr/pgmspace.h"
/* Driver related includes */
//#include "SPI.h"

//macros specific to platform

//macros specific to FT800 hardware
/* Macros used for CS, PDN, INT pins for SPI - default values */
/* Modify the below depending on Jumper settings of J1, J2, J3 and J4 */
#define FT_CS_PIN 				9 
#define FT_PDN_PIN				8
#define FT_INT_PIN 				7
#define FT_DISPENABLE_PIN		7
#define FT_AUDIOENABLE_PIN		1

//macros related to arduino plaform SPI
/* SPI clock frequency */
#define FT_SPI_CLK_FREQ_MIN		8*1000000
#define FT_SPI_CLK_FREQ_MAX		21*1000000

//macros specific to sdcard
#define FT_SD_CSPIN 			10


/* Hardware specific include files */
#include "hardware/FT800/FT800.h"
#include "libraries/FT_SD/FT_SD.h"
#include "libraries/FT_GC/FT_Transport_SPI/FT_Transport_SPI.h"
#include "libraries/FT_GC/FT_GC.h"
#include "libraries/FT_GC/FT800/FT800Impl.h"

/* Macros related to display dimensions */
#define FT_DISPLAYWIDTH		FT_DISPLAY_HSIZE_WQVGA
#define FT_DISPLAYHEIGHT	FT_DISPLAY_VSIZE_WQVGA
#define FT_DISPLAY_RESOLUTION	FT_DISPLAY_WQVGA_480x272

/* Type definitions for class implementations */
typedef FT800Impl<FT_Transport_SPI> FT800IMPL_SPI;

#endif /* _FT_ADAM_4DLCD_FT843_H_ */

