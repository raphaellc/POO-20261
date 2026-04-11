// ============================================================
//  Veiculo.h  –  Interface da classe base abstrata Veiculo
//  *** NAO MODIFIQUE ESTE ARQUIVO ***
// ============================================================
#ifndef VEICULO_H
#define VEICULO_H

#include <string>
#include "Motor.h"

class Veiculo {
protected:
    std::string placa;
    int quilometragem;
    Motor* motor;   // Composicao: Veiculo e responsavel pelo ciclo de vida do Motor

public:
    Veiculo(std::string placa, int quilometragem, int potenciaMotor);

    // Destrutor virtual e OBRIGATORIO para que o polimorfismo funcione
    // corretamente na destruicao de objetos derivados
    virtual ~Veiculo();

    // Metodo virtual puro: torna Veiculo uma classe abstrata (RN05)
    virtual float calcularManutencao() = 0;

    std::string getPlaca();
    int getQuilometragem();
};

#endif
