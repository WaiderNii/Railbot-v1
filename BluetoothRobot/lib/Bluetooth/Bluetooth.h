#ifndef BLUETOOTH_H
#define BLUETOOTH_H

#include <Arduino.h>
#include "../../include/Debug.h"
#include <BluetoothSerial.h> 

extern BluetoothSerial SerialBT;

void bluetoothStart();
void bluetoothConect();

#endif