#include "CarroPasseio.h"

CarroPasseio::CarroPasseio(std::string placa, int quilometragem)
    : Veiculo(placa, quilometragem, 120)
{
}

float CarroPasseio::calcularManutencao()
{
    return getQuilometragem() * 0.50f;
}
