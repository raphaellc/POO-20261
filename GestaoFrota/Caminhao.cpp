#include "Caminhao.h"

Caminhao::Caminhao(std::string placa, int quilometragem)
    : Veiculo(placa, quilometragem, 450) {
        this->placa = getPlaca();
        this->quilometragem = getQuilometragem();
}

float Caminhao::calcularManutencao() {
    return getQuilometragem() * 1.50f;
}
