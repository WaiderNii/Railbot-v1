#include "Movements.h"


void pinModeMovements()
{
    pinMode(pin1, OUTPUT);
    pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
    pinMode(pin4, OUTPUT);
}

void stopped()
{
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, LOW);
}

void forward()
{
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, LOW);
}

void backward()
{
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, HIGH);
}

void right()
{
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, HIGH);
}

void left()
{
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, LOW);
}

void command(int received)
{
    switch(received)
    {
        case 1: //cima
            forward();
            debugPrint("Andando para FRENTE");
            break;
        case 2: //baixo
            backward();
            debugPrint("Andando para TRÁS");
            break;
        case 3: //direita
            right();
            debugPrint("Virando para DIREITA");
            break;
        case 4: //esquerda
            left();
            debugPrint("Virando para ESQUERDA");
            break;
        default:
            stopped();
            debugPrint("PARADO");
            break;
    }
}