// ============================================================
//  main.cpp  –  Funcao principal / Cenario de uso
//  *** PREENCHA OS BLOCOS MARCADOS COM TODO ***
// ============================================================
#include <iostream>
#include <iomanip>
#include "GerenciadoraVeiculos.h"
#include "CarroPasseio.h"
#include "Caminhao.h"

int main()
{
    GerenciadoraVeiculos* gerenciadora = new GerenciadoraVeiculos();

    gerenciadora->adicionarVeiculo(new CarroPasseio("ABC-1234", 10000));
    gerenciadora->adicionarVeiculo(new Caminhao("XYZ-9876", 50000));

    std::cout << "--- Relatorio de Manutencao ---" << std::endl;
    gerenciadora->exibirRelatorioManutencao();

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Custo Total da Frota: R$ " << gerenciadora->calcularCustoTotal() << std::endl;

    delete gerenciadora;
    std::cin.get();

    return 0;
}
