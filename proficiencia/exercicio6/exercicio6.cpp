#include <iostream>
#include <string>

int main() {
    int vetor[10];
    int totalDaSoma = 0;

    for (int i = 0; i < 10; i++) {
        std::cout << "Digite um valor: ";
        std::cin >> vetor[i];
        if (vetor[i] < 20 || vetor[i] > 50) {
            std::cout << "Digite valores entre 20 e 50.\n";
            i--;
        }
    }
    for (int i = 0; i < 10; i++) {
        totalDaSoma += vetor[i];
    }
    std::cout << "A soma dos valores e: " << totalDaSoma << std::endl;
    return 0;
}