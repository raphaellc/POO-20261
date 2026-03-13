#include <iostream>

int main(){
    int *ponteiro; 
    int variavelInteiro = 0;
    ponteiro = &variavelInteiro;
    *ponteiro = 10;

    
    std::cout << "Variavel inteira: " << variavelInteiro << "\nVariavel ponteiro: " << *ponteiro << std::endl;
    return 0;
}