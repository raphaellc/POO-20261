
#include "GerenciadoraVeiculos.h"
#include <iostream>
#include <iomanip>


GerenciadoraVeiculos::GerenciadoraVeiculos() {}

// Politica de propriedade: a gerenciadora deleta todos os veiculos (e, por composicao, seus motores)
GerenciadoraVeiculos::~GerenciadoraVeiculos() {
    for (Veiculo* v : frota) {
        delete v;
    }
    std::cout << "Gerenciadora: Memoria da frota liberada." << std::endl;
}

void GerenciadoraVeiculos::adicionarVeiculo(Veiculo* v) {
    frota.push_back(v);
}

// Polimorfismo dinamico: calcularManutencao() despacha para CarroPasseio ou Caminhao em tempo de execucao
void GerenciadoraVeiculos::exibirRelatorioManutencao() {
    std::cout << "--- Relatorio de Manutencao ---" << std::endl;
    for (Veiculo* v : frota) {
        std::cout << "Veiculo Placa: " << v->getPlaca()
                  << " | Custo de Manutencao: R$ "
                  << std::fixed << std::setprecision(2)
                  << v->calcularManutencao()
                  << std::endl;
    }
    std::cout << "Custo Total da Frota: R$ "
              << std::fixed << std::setprecision(2)
              << calcularCustoTotal()
              << std::endl;
}

float GerenciadoraVeiculos::calcularCustoTotal() {
    float total = 0.0f;
    for (Veiculo* v : frota) {
        total += v->calcularManutencao();
    }
    return total;
}
