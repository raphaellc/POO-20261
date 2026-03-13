#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>

int main(){
    int linhas;
    int colunas;
    char letras[5];
    std::cout << "Numero de linhas: ";
    std::cin >> linhas;
    std::cout << "Numero de colunas: ";
    std::cin >> colunas;
    char tabuleiro[linhas][colunas];

    std::cout << "Primeira letra: " << std::endl;
    std::cin >> letras[0];
    std::cout << "Segunda letra: " << std::endl;
    std::cin >> letras[1];
    std::cout << "Terceira letra: " << std::endl;
    std::cin >> letras[2];
    std::cout << "Quarta letra: " << std::endl;
    std::cin >> letras[3];
    std::cout << "Quinta letra: " << std::endl;
    std::cin >> letras[4];

    srand(time(0));

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            int random = rand() % 5;
            tabuleiro[i][j] = letras[random];
        }
    }
    std::cout << "\nTabuleiro:\n";

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            std::cout << tabuleiro[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
