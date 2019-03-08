/*
    __ireclipse_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __ireclipse_driver.h
@brief    IR_eclipse Driver
@mainpage IR_eclipse Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   IRECLIPSE
@brief      IR_eclipse Click Driver
@{

| Global Library Prefix | **IRECLIPSE** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **Oct 2018.**      |
| Developer             | **Nenad Filipovic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _IRECLIPSE_H_
#define _IRECLIPSE_H_

/** 
 * @macro T_IRECLIPSE_P
 * @brief Driver Abstract type 
 */
#define T_IRECLIPSE_P    const uint8_t*

/** @defgroup IRECLIPSE_COMPILE Compilation Config */              /** @{ */

//  #define   __IRECLIPSE_DRV_SPI__                            /**<     @macro __IRECLIPSE_DRV_SPI__  @brief SPI driver selector */
//  #define   __IRECLIPSE_DRV_I2C__                            /**<     @macro __IRECLIPSE_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __IRECLIPSE_DRV_UART__                           /**<     @macro __IRECLIPSE_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup IRECLIPSE_VAR Variables */                           /** @{ */



                                                                       /** @} */
/** @defgroup IRECLIPSE_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup IRECLIPSE_INIT Driver Initialization */              /** @{ */

#ifdef   __IRECLIPSE_DRV_SPI__
void ireclipse_spiDriverInit(T_IRECLIPSE_P gpioObj, T_IRECLIPSE_P spiObj);
#endif
#ifdef   __IRECLIPSE_DRV_I2C__
void ireclipse_i2cDriverInit(T_IRECLIPSE_P gpioObj, T_IRECLIPSE_P i2cObj, uint8_t slave);
#endif
#ifdef   __IRECLIPSE_DRV_UART__
void ireclipse_uartDriverInit(T_IRECLIPSE_P gpioObj, T_IRECLIPSE_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void ireclipse_gpioDriverInit(T_IRECLIPSE_P gpioObj);
                                                                       /** @} */
/** @defgroup IRECLIPSE_FUNC Driver Functions */                   /** @{ */



/**
 * @brief Detecting states of IR beam from EE-SX198 photo interrupter sensor
 *
 * @return State of INT pin:
 * 0 - beam not eclipsed;
 * 1 - beam is eclipsed;
 *
 * Function states of IR beam from EE-SX198 photo interrupter sensor,
 * ( eclipsed or not eclipsed )
 * and returns the state of the INT pin.
 */
uint8_t ireclipse_intStatus();



                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_IR_eclipse_STM.c
    @example Click_IR_eclipse_TIVA.c
    @example Click_IR_eclipse_CEC.c
    @example Click_IR_eclipse_KINETIS.c
    @example Click_IR_eclipse_MSP.c
    @example Click_IR_eclipse_PIC.c
    @example Click_IR_eclipse_PIC32.c
    @example Click_IR_eclipse_DSPIC.c
    @example Click_IR_eclipse_AVR.c
    @example Click_IR_eclipse_FT90x.c
    @example Click_IR_eclipse_STM.mbas
    @example Click_IR_eclipse_TIVA.mbas
    @example Click_IR_eclipse_CEC.mbas
    @example Click_IR_eclipse_KINETIS.mbas
    @example Click_IR_eclipse_MSP.mbas
    @example Click_IR_eclipse_PIC.mbas
    @example Click_IR_eclipse_PIC32.mbas
    @example Click_IR_eclipse_DSPIC.mbas
    @example Click_IR_eclipse_AVR.mbas
    @example Click_IR_eclipse_FT90x.mbas
    @example Click_IR_eclipse_STM.mpas
    @example Click_IR_eclipse_TIVA.mpas
    @example Click_IR_eclipse_CEC.mpas
    @example Click_IR_eclipse_KINETIS.mpas
    @example Click_IR_eclipse_MSP.mpas
    @example Click_IR_eclipse_PIC.mpas
    @example Click_IR_eclipse_PIC32.mpas
    @example Click_IR_eclipse_DSPIC.mpas
    @example Click_IR_eclipse_AVR.mpas
    @example Click_IR_eclipse_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __ireclipse_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */