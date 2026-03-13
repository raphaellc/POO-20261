#include <iostream>

/*1. Implemente um código que
a. Declare uma variável do tipo ponteiro para inteiro;
b. Declare uma variável do tipo inteiro;
c. Inicialize a variável do tipo inteiro com o valor 0;
d. Atribua o valor 10 a variável do tipo inteiro, por meio da variável do tipo
ponteiro.
e. Mostre na tela o valor da variável inteira utilizando ela própria e a variável
ponteiro.*/

int main() {
    //a. Declare uma variável do tipo ponteiro para inteiro;
    int* ponteiro;

    //b. Declare uma variável do tipo inteiro;
    int numero;

    //c. Inicialize a variável do tipo inteiro com o valor 0;
    numero = 0;

    //d. Atribua o valor 10 a variável do tipo inteiro, por meio da variável do tipo ponteiro.
    ponteiro = &numero;
    *ponteiro = 10;

    //e. Mostre na tela o valor da variável inteira utilizando ela própria e a variável ponteiro.
    std::cout << "Valor da variavel inteira (usando ela propria): " << numero << std::endl;
    std::cout << "Valor da variavel inteira (usando o ponteiro): " << *ponteiro << std::endl;

    return 0;
}