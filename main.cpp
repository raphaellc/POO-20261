// ============================================================
//  main.cpp  –  Funcao principal / Cenario de uso
//  *** PREENCHA OS BLOCOS MARCADOS COM TODO ***
// ============================================================
#include <iostream>
#include "GerenciadoraVeiculos.h"
#include "CarroPasseio.h"
#include "Caminhao.h"

using namespace std;

int main() {
   GerenciadoraVeiculos *g1 = new GerenciadoraVeiculos();
   Veiculo *carro = new CarroPasseio("ABC-1234", 10000);
   Veiculo *caminhao = new Caminhao("XYZ-9876", 50000);
   
   g1->adicionarVeiculo(carro);
   g1->adicionarVeiculo(caminhao);

    cout << "--- Relatorio de Manutencao ---" << endl;
    g1->exibirRelatorioManutencao();

    cout << "Custo Total da Frota: R$ " << g1->calcularCustoTotal() << ".00" << endl;

    delete g1;
    delete carro;
    delete caminhao;

    cout << "Gerenciadora: Memoria da frota liberada." << endl;

    return 0;
}

