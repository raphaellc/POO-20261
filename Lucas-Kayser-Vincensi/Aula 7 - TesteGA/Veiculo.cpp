
#include "Veiculo.h"
#include <iostream>

Veiculo::Veiculo(std::string placa, int quilometragem, int potenciaMotor)
    : placa(placa), quilometragem(quilometragem)
{
    std::string tipoCombustivel = (potenciaMotor >= 400) ? "Diesel" : "Gasolina";
    motor = new Motor(potenciaMotor, tipoCombustivel);
}

Veiculo::~Veiculo()
{
    std::cout << "Veiculo " << placa << " removido da frota." << std::endl;
    delete motor;
}

std::string Veiculo::getPlaca()
{
    return placa;
}

int Veiculo::getQuilometragem()
{
    return quilometragem;
}
