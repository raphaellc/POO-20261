#include <iostream>
using namespace std;

int main(){
    //Definicao de atributos
    int varA[10], numeroIndicado, soma = 0;   

    //Laco que insert os 10 valores
    for (int i = 0; i < 10;) {
        cout << "Informe um numero entre 20 e 50 para a posicao " << i+1 << ": ";
        cin >> numeroIndicado;

        //Validacao de entrada inteira
        if(cin.fail()) {
            cin.clear(); 
            cin.ignore(1000, '\n'); 
            cout << "Entrada invalida! Somente numeros sao permitidos.\n" << endl;
            continue;
        }

        //Validacao de entrada entre 20 a 50    
        if (numeroIndicado < 20 || numeroIndicado > 50) {
            cout << "Somente valores no intervalo de 20 a 50 sao permitidos.\n" << endl;
        }else{
            varA[i] = numeroIndicado; 
            soma += varA[i];         
            i++;
        }
    }

    //Mostra a soma dos valores
    cout << "Soma de todos os valores informardos: " << soma << endl;

    return 0;
}