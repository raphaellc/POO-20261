
#include "GerenciadoraVeiculos.h"
#include <iostream>
#include <iomanip>

GerenciadoraVeiculos::GerenciadoraVeiculos()
{
}

GerenciadoraVeiculos::~GerenciadoraVeiculos()
{
    for (Veiculo* v : frota) 
    {
        delete v;
    }
    frota.clear();
    std::cout << "Gerenciadora: Memoria da frota liberada." << std::endl;
}

void GerenciadoraVeiculos::adicionarVeiculo(Veiculo* v)
{
    this->frota.push_back(v);
}

void GerenciadoraVeiculos::exibirRelatorioManutencao()
{
    std::cout << std::fixed << std::setprecision(2);
    for (Veiculo* v : frota) 
    {
        std::cout << "Veiculo Placa: " << v->getPlaca()
                  << " | Custo de Manutencao: R$ " << v->calcularManutencao() << std::endl;
    }
}

float GerenciadoraVeiculos::calcularCustoTotal()
{
    float total = 0.0f;
    for (Veiculo* v : frota) 
    {
        total += v->calcularManutencao();
    }
    return total;
}
