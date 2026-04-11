#include "Veiculo.h"
#include <iostream>

using namespace std;

Veiculo::Veiculo(std::string placa, int quilometragem, int potenciaMotor) {
    this->placa = placa;
    this->quilometragem = quilometragem;
    this->motor = new Motor(potenciaMotor, "Gasolina");
}

Veiculo::~Veiculo() {
    delete motor;
    cout << "Veiculo " << placa << " removido da frota." << endl;
}

std::string Veiculo::getPlaca() {
    return placa;
}

int Veiculo::getQuilometragem() {
    return quilometragem;
}