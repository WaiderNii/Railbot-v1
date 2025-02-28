#ifndef DEBUG_H
#define DEBUG_H

// Ativar ou desativar o modo debug
//#define DEBUG // comente essa linha para desativar o debug

#ifdef DEBUG
    #define debugPrint(x) Serial.println(x)
#else
    #define debugPrint(x) //Nada
#endif

#endif // DEBUG_H