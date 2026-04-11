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
    
    //Carro de Paceio

    Veiculo *miniVan = new CarroPasseio("XPG-12345", 10000);

    // Caminhaos

    Veiculo *caminhaoSorvete = new Caminhao("GHJ-4321", 50000);

    GerenciadoraVeiculos *patraoThiago = new GerenciadoraVeiculos();

    patraoThiago->adicionarVeiculo(miniVan);
    patraoThiago->adicionarVeiculo(caminhaoSorvete);
    patraoThiago->exibirRelatorioManutencao();

    cout << "Custo Total da Frota: " << patraoThiago->calcularCustoTotal() << endl;

    miniVan->~Veiculo();
    caminhaoSorvete->~Veiculo();
    patraoThiago->~GerenciadoraVeiculos();


    return 0;
}
