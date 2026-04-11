#include "GerenciadoraVeiculos.h"
#include <iostream>
#include <iomanip>

using namespace std;

GerenciadoraVeiculos::GerenciadoraVeiculos() {
   
}

GerenciadoraVeiculos::~GerenciadoraVeiculos() {
    cout << "Gerenciadora: Memoria da frota Liberada" << endl;
}

void GerenciadoraVeiculos::adicionarVeiculo(Veiculo* v) {
    this->frota.push_back(v);
}

void GerenciadoraVeiculos::exibirRelatorioManutencao() {
  cout << "--- Relatorio de Manutencao ---" << endl;
  for(int i = 0; frota.size() > i; i++){
    cout << "Veiculo Placa: " << this->frota[i]->getPlaca() << "Custo de Manutencao: R$ " << this->frota[i]->calcularManutencao() << endl;
  }

}

float GerenciadoraVeiculos::calcularCustoTotal() {
    float total;
    for(int i = 0; frota.size() > i; i++){
        total += this->frota[i]->calcularManutencao();
    }
    return total;
}


