
#include "Veiculo.h"
#include <iostream>


using namespace std;

Veiculo::Veiculo(std::string placa, int quilometragem, int potenciaMotor) {
    this->placa = placa;
    this->quilometragem = quilometragem;
    this->motor = new Motor(potenciaMotor, "gasosa");
    
    
}


Veiculo::~Veiculo() {

    cout << "Veiculo: " << this->getPlaca() << " Removido Da Frota " << endl;
}


std::string Veiculo::getPlaca() {
    return this->placa;
}

int Veiculo::getQuilometragem() {

    return this->quilometragem;
}
