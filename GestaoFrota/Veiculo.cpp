
#include "Veiculo.h"
#include <iostream>


// Composicao (RN03): o Veiculo cria e e dono do seu Motor
Veiculo::Veiculo(std::string placa, int quilometragem, int potenciaMotor)
    : placa(placa), quilometragem(quilometragem) {
    motor = new Motor(potenciaMotor, "Combustao");
}

// Destrutor virtual garante que subclasses sejam destruidas corretamente (RN03)
Veiculo::~Veiculo() {
    delete motor;   // Motor e destruido junto com o Veiculo
    std::cout << "Veiculo " << placa << " removido da frota." << std::endl;
}

std::string Veiculo::getPlaca() {
    return placa;
}

int Veiculo::getQuilometragem() {
    return quilometragem;
}
