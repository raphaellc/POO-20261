// ============================================================
//  CarroPasseio.h  –  Interface de CarroPasseio
//  *** NAO MODIFIQUE ESTE ARQUIVO ***
// ============================================================
#ifndef CARROPASSEIO_H
#define CARROPASSEIO_H

#include "Veiculo.h"

// TODO (Cabecalho – leia para entender a estrutura):
// CarroPasseio HERDA de Veiculo (heranca publica).
// Ela DEVE implementar calcularManutencao() pois Veiculo e abstrata.
class CarroPasseio : public Veiculo {
public:
    CarroPasseio(std::string placa, int quilometragem);

    // override garante que estamos realmente sobrescrevendo o metodo virtual
    float calcularManutencao() override;
};

#endif
