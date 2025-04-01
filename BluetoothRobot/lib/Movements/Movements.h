#ifndef MOVEMENTS_H
#define MOVEMENTS_H

#include <Arduino.h>
#include "../../include/Debug.h"

//Declaração dos pinos para controle da ponte H no esp32
constexpr int pin1 = 13;
constexpr int pin2 = 27;
constexpr int pin3 = 26;
constexpr int pin4 = 25;

//Definição de velocidades
constexpr int vel = 255;

//protótipo das funções
void pinModeMovements();
void forward();
void backward();
void left();
void right();
void stopped();
void command(int received);

#endif