#include <iostream>

int main() {
    int vetor[10];
    int maiorValor, menorValor;
    for (int i = 0; i < 10; i++) {
        std::cout << "Digite um valor: ";
        std::cin >> vetor[i];
    }
    std::cout << "Vetor invertido: ";
    for (int i = 9; i >= 0; i--) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    maiorValor = vetor[0];
    menorValor = vetor[0];
    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maiorValor) {
            maiorValor = vetor[i];
        }
        if (vetor[i] < menorValor) {
            menorValor = vetor[i];
        }
    }
    std::cout << "Maior valor: " << maiorValor << std::endl;
    std::cout << "Menor valor: " << menorValor << std::endl;
    int primeiro = vetor[0];
    for (int i = 0; i < 9; i++) {
        vetor[i] = vetor[i + 1];
    }
    vetor[9] = primeiro;
    std::cout << "Vetor apos rotacao a esquerda: ";
    for (int i = 0; i < 10; i++) {
        std::cout << vetor[i] << " ";
    }
    return 0;
}