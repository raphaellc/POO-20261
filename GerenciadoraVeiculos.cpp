#include "GerenciadoraVeiculos.h"
#include <iostream>

using namespace std;

GerenciadoraVeiculos::GerenciadoraVeiculos() {
}

GerenciadoraVeiculos::~GerenciadoraVeiculos() {
}

void GerenciadoraVeiculos::adicionarVeiculo(Veiculo* v) {
    frota.push_back(v);
}

void GerenciadoraVeiculos::exibirRelatorioManutencao() {
    for (Veiculo* v : frota) {
        cout << "Placa: " << v->getPlaca() << " | Custo de Manutencao: R$ " << v->calcularManutencao() << ".00" << endl;
    }
}

float GerenciadoraVeiculos::calcularCustoTotal() {
    float total = 0;

    for (Veiculo* v : frota) {
        total += v->calcularManutencao();
    }

    return total;
}