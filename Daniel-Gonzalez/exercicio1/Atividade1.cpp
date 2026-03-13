#include <iostream>
using namespace std;

int main(){
    //Definicao de variavel inteira e ponteiro. Inicializacao de valor 0.
    int varA = 0;
    int *ptnA = &varA;

    //Atribucao de valor 10 pelo ponteiro
    *ptnA = 10;

    //Display do valor da variavel inteiro e do ponteiro
    cout << "A variavle tem valor: " << varA << endl;
    cout << "Endereco de A: " << &varA << endl;
    cout << "Valor apontado pelo ponteiro: " << *ptnA << endl;

    return 0;
}