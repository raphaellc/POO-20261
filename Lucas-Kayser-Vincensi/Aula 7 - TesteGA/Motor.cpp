
#include "Motor.h"
#include <iostream>

Motor::Motor(int potencia, std::string tipo)
    : potencia(potencia), tipoCombustivel(tipo)
{
}

Motor::~Motor()
{
    std::cout << "Motor destruido." << std::endl;
}

int Motor::getPotencia()
{
    return potencia;
}

std::string Motor::getTipoCombustivel()
{
    return tipoCombustivel;
}