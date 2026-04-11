
#include "Veiculo.h"
#include <iostream>


Veiculo::Veiculo(std::string placa, int quilometragem, int potenciaMotor) {
    this->placa = placa;
    this->quilometragem = quilometragem;
    this->motor = new Motor(potenciaMotor, "Gasolina"); 

}


Veiculo::~Veiculo() {
    std::cout << "Veiculo " << this->placa << " removido da frota." << std::endl;
    delete this->motor;
}


std::string Veiculo::getPlaca() {

    return this->placa;
}

int Veiculo::getQuilometragem() {

    return this->quilometragem;
}
