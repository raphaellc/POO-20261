#include <iostream>
#include <string>

int main() {
    int numero;

    std::cout << "Digite numeros: " << std::endl;
    do {
        std::cin >> numero;
        if (numero >= 5 && numero <= 15) {
            std::cout << "Numero: " << numero << std::endl;
        }
    } while (numero != 0);
    return 0;
}