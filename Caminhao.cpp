#include "Caminhao.h"

Caminhao::Caminhao(std::string placa, int quilometragem)
    : Veiculo(placa, quilometragem, 450) {
}

float Caminhao::calcularManutencao() {
    return getQuilometragem() * 1.50f;
}
