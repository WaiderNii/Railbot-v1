#include "Bluetooth.h"

BluetoothSerial SerialBT;

void bluetoothStart()
{
    if (SerialBT.begin("ESP32 Mobile")) {
        debugPrint("Bluetooth iniciado com sucesso!");
    } else {
        debugPrint("Erro ao iniciar o Bluetooth!");
        while (true) { // Pare o código se o Bluetooth não iniciar
            delay(1000);
        }
    }
}

void bluetoothConect()
{
    while (SerialBT.hasClient()==false)
    {
        digitalWrite(LED_BUILTIN, HIGH);
        debugPrint("Aguardando conexão Bluetooth...");
        
        delay(1000);
    }
    digitalWrite(LED_BUILTIN, LOW);
    debugPrint("Conectado!!! \nFim do Setup");
}