/*
Example for IR_eclipse Click

    Date          : Oct 2018.
    Author        : Nenad Filipovic

Test configuration KINETIS :
    
    MCU              : MK64
    Dev. Board       : HEXIWEAR
    ARM Compiler ver : v6.0.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes GPIO and LOG, set INT pin as input.
- Application Initialization - Initialization driver enable's - GPIO and start write log.
- Application Task - (code snippet) This is a example which demonstrates the use of IR eclipse Click board.
     When the beam from the transmitter is eclipsed by placing
     an object in the gap ( like a piece of paper ), when the sensor is triggered, the counter is incremented by one.
     Results are being sent to the Usart Terminal where you can track their changes.
     Data logs on usb uart when the sensor is triggered.
     
Additional Functions :

- UART
- Conversions

*/

#include "Click_IR_eclipse_types.h"
#include "Click_IR_eclipse_config.h"


uint8_t ireclipseState = 0;
uint8_t ireclipseStateOld = 0;
uint16_t counter = 1;
char logText[50];

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );

    mikrobus_logInit( _MIKROBUS2, 9600 );

    Delay_100ms();
}

void applicationInit()
{
    ireclipse_gpioDriverInit( (T_IRECLIPSE_P)&_MIKROBUS1_GPIO );
     
    mikrobus_logWrite( "-------------------", _LOG_LINE );
    mikrobus_logWrite( "  Counting starts  ", _LOG_LINE );
    mikrobus_logWrite( "-------------------", _LOG_LINE );

    Delay_100ms();
}

void applicationTask()
{
    ireclipseState = ireclipse_intStatus();

    if ( ireclipseState == 1 && ireclipseStateOld == 0 )
    {
        ireclipseStateOld = 1;
        IntToStr( counter, logText );
        ltrim( logText );
        mikrobus_logWrite( "  Counter = ", _LOG_TEXT );
        mikrobus_logWrite( logText, _LOG_LINE );
        counter++;
    }

    if ( ireclipseState == 0 && ireclipseStateOld == 1 )
    {
        mikrobus_logWrite( "-------------------", _LOG_LINE );
        ireclipseStateOld = 0;
    }
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
            applicationTask();
    }
}