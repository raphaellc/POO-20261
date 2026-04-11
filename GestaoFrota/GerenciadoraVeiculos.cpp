
#include "GerenciadoraVeiculos.h"
#include <iostream>
#include <iomanip>


GerenciadoraVeiculos::GerenciadoraVeiculos() {


}

GerenciadoraVeiculos::~GerenciadoraVeiculos() {
    for (Veiculo* v : this->frota) {
        delete v;
    }
    this->frota.clear();
    std::cout << "Gerenciadora: Memoria da frota liberada." << std::endl;
}

void GerenciadoraVeiculos::adicionarVeiculo(Veiculo* v) {
    this->frota.push_back(v);

}

void GerenciadoraVeiculos::exibirRelatorioManutencao() {
        std::cout << "--- Relatorio de Manutencao ---" << std::endl;
        for (Veiculo* v : this->frota) {        
            std::cout << "Veiculo Placa: " << v->getPlaca() << " | Custo de Manutencao: R$ " << std::fixed << std::setprecision(2) << v->calcularManutencao() << std::endl;
            
        }   
        std::cout << "Custo Total da Frota: R$ " << std::fixed << std::setprecision(2) << this->calcularCustoTotal() << std::endl;


}

float GerenciadoraVeiculos::calcularCustoTotal() {
    float total = 0.0f;
    for (Veiculo* v : this->frota) {
        total += v->calcularManutencao();
    }
    return total;
}
