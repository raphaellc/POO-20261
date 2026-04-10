// ============================================================
//  Caminhao.h  –  Interface de Caminhao
//  *** NAO MODIFIQUE ESTE ARQUIVO ***
// ============================================================
#ifndef CAMINHAO_H
#define CAMINHAO_H

#include "Veiculo.h"

class Caminhao : public Veiculo {
public:
    Caminhao(std::string placa, int quilometragem);

    float calcularManutencao() override;
};

#endif
