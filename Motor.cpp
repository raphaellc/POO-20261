#include "Motor.h"
#include <iostream>

using namespace std;

Motor::Motor(int potencia, std::string tipo) {
    this->potencia = potencia;
    this->tipoCombustivel = tipo;
}

Motor::~Motor() {
    cout << "Motor Destruido" << endl;
}

int Motor::getPotencia() {
    return potencia;
}

std::string Motor::getTipoCombustivel() {
    return tipoCombustivel;
}