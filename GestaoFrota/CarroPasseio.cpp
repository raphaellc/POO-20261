#include "CarroPasseio.h"

CarroPasseio::CarroPasseio(std::string placa, int quilometragem)
    : Veiculo(placa, quilometragem, 100) {
}

// RN02: Carro de Passeio custa R$ 0,50 por km
float CarroPasseio::calcularManutencao() {
    return quilometragem * 0.50f;
}
