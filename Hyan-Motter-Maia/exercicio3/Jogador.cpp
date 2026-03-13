#include <iostream>
#include <string>
#include "Jogador.h"

Jogador::Jogador() {
    vida = 0;
    energia = 0;
}
Jogador::~Jogador(){}
void Jogador::definirVida(int v) {
    vida = v;
}

int Jogador::obterVida() {
    return vida;
}

void Jogador::definirEnergia(int e) {
    energia = e;
}

int Jogador::obterEnergia() {
    return energia;
}