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
    analogWrite(pin1, 0);
    analogWrite(pin2, 0);
    analogWrite(pin3, 0);
    analogWrite(pin4, 0);
}

void forward()
{
    analogWrite(pin1, vel);
    analogWrite(pin2, 0);
    analogWrite(pin3, vel);
    analogWrite(pin4, 0);
}

void backward()
{
    analogWrite(pin1, 0);
    analogWrite(pin2, vel);
    analogWrite(pin3, 0);
    analogWrite(pin4, vel);
}

void right()
{
    analogWrite(pin1, vel);
    analogWrite(pin2, 0);
    analogWrite(pin3, 0);
    analogWrite(pin4, vel);
}

void left()
{
    analogWrite(pin1, 0);
    analogWrite(pin2, vel);
    analogWrite(pin3, vel);
    analogWrite(pin4, 0);
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
            //right();
            debugPrint("Virando para DIREITA");
            break;
        case 4: //esquerda
            //left();
            debugPrint("Virando para ESQUERDA");
            break;
        default:
            stopped();
            debugPrint("PARADO");
            break;
    }
}