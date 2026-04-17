// ============================================================
//  main.cpp  –  Funcao principal / Cenario de uso
//  *** PREENCHA OS BLOCOS MARCADOS COM TODO ***
// ============================================================
#include <iostream>
#include "GerenciadoraVeiculos.h"
#include "CarroPasseio.h"
#include "Caminhao.h"

int main() {
    // 1. Preparacao da Frota
    GerenciadoraVeiculos gerenciadora;

    // 2. Registro de Dados
    Veiculo* carro    = new CarroPasseio("ABC-1234", 10000);
    Veiculo* caminhao = new Caminhao("XYZ-5678", 50000);

    gerenciadora.adicionarVeiculo(carro);
    gerenciadora.adicionarVeiculo(caminhao);

    // 3/4. Processamento e Exibicao
    gerenciadora.exibirRelatorioManutencao();

    // 5. Encerramento: destrutor de gerenciadora libera veiculos e seus motores automaticamente
    return 0;
}
