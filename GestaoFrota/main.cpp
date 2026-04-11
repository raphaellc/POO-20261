// ============================================================
//  main.cpp  –  Funcao principal / Cenario de uso
//  *** PREENCHA OS BLOCOS MARCADOS COM TODO ***
// ============================================================
#include <iostream>
#include "GerenciadoraVeiculos.h"
#include "CarroPasseio.h"
#include "Caminhao.h"

int main() {
    GerenciadoraVeiculos gerenciadora;

    Veiculo* carro = new CarroPasseio(" ABC-1234", 10000);
    gerenciadora.adicionarVeiculo(carro);

    
    Veiculo* caminhao = new Caminhao("XYZ-9876", 50000);
    gerenciadora.adicionarVeiculo(caminhao);

    
    gerenciadora.exibirRelatorioManutencao();
    
    return 0;
}
 