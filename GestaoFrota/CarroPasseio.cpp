#include "CarroPasseio.h"

CarroPasseio::CarroPasseio(std::string placa, int quilometragem)
    : Veiculo(placa, quilometragem, 0) {

}

float CarroPasseio::calcularManutencao() {

    return 0.0f;
}
