#include <iostream>
#include "Jogador.h"

/*4. Implemente um programa que use a classe jogador declarada.
a. Defina os valores para os atributos da classe por meio do construtor;
b. Mostre os valores dos atributos definidos
c. Atualize os valores dos atributos por meio dos métodos
d. Mostre os valores dos atributos definidos.*/

int main() {
    //a. Defina os valores para os atributos da classe por meio do construtor;
    Jogador jogador(100, 50);

    //b. Mostre os valores dos atributos definidos
    std::cout << "Valores iniciais:" << std::endl;
    std::cout << "Vida: " << jogador.getVida() << std::endl;
    std::cout << "Energia: " << jogador.getEnergia() << std::endl;

    //c. Atualize os valores dos atributos por meio dos métodos
    jogador.setVida(80);
    jogador.setEnergia(40);

    //d. Mostre os valores dos atributos definidos.
    std::cout << "Valores atualizados:" << std::endl;
    std::cout << "Vida: " << jogador.getVida() << std::endl;
    std::cout << "Energia: " << jogador.getEnergia() << std::endl;

    return 0;
}
