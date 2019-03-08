![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# IR_eclipse Click

---

- **CIC Prefix**  : IRECLIPSE
- **Author**      : Nenad Filipovic
- **Verison**     : 1.0.0
- **Date**        : Oct 2018.

---

### Software Support

We provide a library for the IR_eclipse Click on our [LibStock](https://libstock.mikroe.com/projects/view/1146/ir-eclipse-click-example) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library covers all the necessary functions to control IR eclipse Click board.
IR eclipse click communicates with the target board through the INT line. 
This library detecting when the beam from the transmitter is eclipsed and returns the state of the INT pin.

Key functions :

- ``` uint8_t ireclipse_intStatus() ``` - Detecting states of IR beam from EE-SX198 photo interrupter sensor


**Examples Description**

The application is composed of three sections :

- System Initialization - Initializes GPIO and LOG, set INT pin as input.
- Application Initialization - Initialization driver enable's - GPIO and start write log.
- Application Task - (code snippet) This is a example which demonstrates the use of IR eclipse Click board.
     When the beam from the transmitter is eclipsed by placing
     an object in the gap ( like a piece of paper ), when the sensor is triggered, the counter is incremented by one.
     Results are being sent to the Usart Terminal where you can track their changes.
     Data logs on usb uart when the sensor is triggered.


```.c

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

```



The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/1146/ir-eclipse-click-example) page.

Other mikroE Libraries used in the example:

- UART
- Conversions

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
