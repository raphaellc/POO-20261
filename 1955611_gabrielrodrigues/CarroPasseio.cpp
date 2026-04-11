#include "CarroPasseio.h"

CarroPasseio::CarroPasseio(std::string placa, int quilometragem)
    : Veiculo(placa, quilometragem, 0) {
        this->placa = placa;
        this->quilometragem = quilometragem;

}

float CarroPasseio::calcularManutencao() {
    return getQuilometragem() * 0.50f;
}
