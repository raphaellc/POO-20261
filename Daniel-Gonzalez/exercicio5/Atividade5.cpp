#include <iostream>
using namespace std;

int main(){
    //Definicao de atributos
    int numero;
    bool aux = true;

    //
    while(aux){
        cout << "Digite um numero (0 para sair):" << endl;
        cin >> numero;

        //Validacao de entrada inteira
        if(cin.fail()) {
            cin.clear(); 
            cin.ignore(1000, '\n'); 
            cout << "Entrada invalida! Somente numeros sao permitidos.\n" << endl;
            continue;
        }

        // Verifica se é para sair do programa
        if(numero == 0) {
            aux = false;
            cout << "Saindo do programa.\n" << endl;
            break;
        }

        if(numero < 5 || numero > 15){
             cout << "Entrada invalida! Somente numeros positivos no intervalo de 5 a 15 podem ser inseridos.\n" 
             << endl;
        } else {
            cout << "Numero informado: " << numero << "\n" << endl;
        }
    }

    return 0;
}