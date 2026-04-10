// ============================================================
//  GerenciadoraVeiculos.h  –  Interface da classe gerenciadora
//  *** NAO MODIFIQUE ESTE ARQUIVO ***
// ============================================================
#ifndef GERENCIADORAVEICULOS_H
#define GERENCIADORAVEICULOS_H

#include <vector>
#include "Veiculo.h"

// Agregacao: GerenciadoraVeiculos gerencia veiculos mas nao os cria.
// Porem, ela e responsavel por destrui-los (politica de propriedade).
class GerenciadoraVeiculos {
private:
    std::vector<Veiculo*> frota;

public:
    GerenciadoraVeiculos();
    ~GerenciadoraVeiculos();

    void adicionarVeiculo(Veiculo* v);
    void exibirRelatorioManutencao();
    float calcularCustoTotal();
};

#endif
