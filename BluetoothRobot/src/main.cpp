#include <Arduino.h>
#include <BluetoothSerial.h> 
#include "Bluetooth.h"
#include "Debug.h" //acesse o arquivo para ativar/desativar o modo debug (está na pasta include)
#include "Movements.h" //a definição dos pinos para controle da ponte H estão nesse header

//String received;

void setup() {

    Serial.begin(115200);
    pinModeMovements(); //declara os pinos de controle do motor como saida
    pinMode(LED_BUILTIN, OUTPUT);


    // Configurações do Bluetooth
    bluetoothStart();
    bluetoothConect();
    
    delay(2000);

}

void loop() {

    if (SerialBT.available()) {
 
        int receivedInt = SerialBT.parseInt();
        debugPrint("Recebido via Bluetooth: " + String(receivedInt));

        command(receivedInt); 

    }

}