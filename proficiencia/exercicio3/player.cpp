#include <iostream>
#include <string>
#include "player.h"

    player::player() {
    vida = 0;
    energia = 0;
}
player::~player(){}
void player::definirVida(int v) {
    vida = v;
}

int player::obterVida() {
    return vida;
}

void player::definirEnergia(int e) {
    energia = e;
}

int player::obterEnergia() {
    return energia;
}