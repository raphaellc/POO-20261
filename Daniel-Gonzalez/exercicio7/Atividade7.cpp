#include <iostream>
using namespace std;

int main(){
    //Definicao de atributos
    int varA[10], numeroIndicado;
    int maiorNum, menorNum;
    int auxRotacoes = 0;   

    //Laco que insert os 10 valores
    for (int i = 0; i < 10;) {
        cout << "Informe um numero para a posicao " << i+1 << ": ";
        cin >> numeroIndicado;

        //Validacao de entrada inteira
        if(cin.fail()) {
            cin.clear(); 
            cin.ignore(1000, '\n'); 
            cout << "Entrada invalida! Somente numeros sao permitidos.\n" << endl;
            continue;
        }

        varA[i] = numeroIndicado;  
        i++;
    }

    // Atualiza maior e menor  
     maiorNum = varA[0];
     menorNum = varA[0];
    for(int i = 1; i < 10; i++){
        if(varA[i] > maiorNum){
            maiorNum = varA[i];
        }
        if(varA[i] < menorNum){
            menorNum = varA[i];
        }
    }
    cout << "\nMaior valor: " << maiorNum << endl;
    cout << "Menor valor: " << menorNum << endl;

    //Mostra vetor na ordem normal
    cout << "\nVetor original:\n";
    for(int i = 0; i < 10; i++){
        cout << varA[i] << " ";
    }

    //Mostra valores de forma inversa
    cout << "\n\nValores informados de forma inversa: " << endl;
    for (int i = 9; i >= 0; i--){
        cout << varA[i] << " " ;
    }

    //Informa numero de rotacoes
    cout << "\n\nQuantas Rotacoes deseja fazer? " << endl;
    cin >> auxRotacoes;

    //Realiza as rotacoes com variavel auxiuliar para guardar o primeiro numero
    for(int r = 0; r < auxRotacoes; r++){
        int auxPrimeiroNumero = varA[0];

        for(int i = 0; i < 9; i++){
            varA[i] = varA[i+1];
        }

        varA[9] = auxPrimeiroNumero;
    }

    //Mostra o resultado das rotacoes
    cout << "\nVetor apos " << auxRotacoes << " rotacao(oes) a esquerda\n";
    for(int i = 0; i < 10; i++){
        cout << varA[i] << " ";
    }
    
    return 0;
}