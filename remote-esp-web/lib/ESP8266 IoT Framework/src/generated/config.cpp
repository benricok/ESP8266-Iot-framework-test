#include <Arduino.h>
#include "config.h"

uint32_t configVersion = 3128599453; //generated identifier to compare config with EEPROM

const configData defaults PROGMEM =
{
	"Wifi Power Meter",
	"en",
