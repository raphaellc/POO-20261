// ============================================================
//  Motor.h  –  Interface da classe Motor
//  *** NAO MODIFIQUE ESTE ARQUIVO ***
//  Fornecido pelo professor. Implemente apenas Motor.cpp
// ============================================================
#ifndef MOTOR_H
#define MOTOR_H

#include <string>

class Motor {
private:
    int potencia;
    std::string tipoCombustivel;

public:
    Motor(int potencia, std::string tipo);
    ~Motor();

    int getPotencia();
    std::string getTipoCombustivel();
};

#endif
