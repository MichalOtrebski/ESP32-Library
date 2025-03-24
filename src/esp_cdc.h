#include <Arduino.h>
#include "USBCDC.h"

#define SERIAL_AT Serial1
#define GPIO_BOOT 9
#define GPIO_RST 4

extern "C" void cdcLoop();

extern USBCDC USBSerial;    