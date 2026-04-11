#include "CarroPasseio.h"

CarroPasseio::CarroPasseio(std::string placa, int quilometragem)
    : Veiculo(placa, quilometragem, 0) {
        this->placa = getPlaca();
        this->quilometragem = getQuilometragem();

}

float CarroPasseio::calcularManutencao() {
    return getQuilometragem() * 0.50f;
}
