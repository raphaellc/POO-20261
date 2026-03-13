#include <iostream>
#include <string>
#include "player.h"

int main() {
    player j1;
    int respostaVida;
    int respostaEnergia;
    j1.definirEnergia(10);
    j1.definirVida(20);

    std::cout << "\nVida: " << j1.obterVida() << "\nEnergia: " << j1.obterEnergia() << std::endl;
}