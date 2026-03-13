#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int main() {
    // Definição de atributos
    int linhasN, colunasM;
    char letrasEscolhidas[5];

    // Entrada de valores (colunas, linhas e letras)
    cout << "Ola. Quantas linhas o tabuleiro deve conter?" << endl;
    cin >> linhasN;

    cout << "Quantas colunas o tabuleiro deve conter?" << endl;
    cin >> colunasM;

    cout << "Digite 5 letras para incluir no tabuleiro:" << endl;
    for(int i = 0; i < 5; i++){
        cin >> letrasEscolhidas[i];
    }

    //Iniciar o gerador de valores da biblioteca
    srand(time(0));

    //Geracao do tabuleiro
    char board[linhasN][colunasM];
    for(int i = 0; i < linhasN; i++) {
        for(int j = 0; j < colunasM; j++) {
            int iAleatorio = rand() % 5;
            board[i][j] = letrasEscolhidas[iAleatorio];
        }
    }

    // Exibe o tabuleiro
    cout << "\nTabuleiro gerado:\n";
    for(int i = 0; i < linhasN; i++) {
        for(int j = 0; j < colunasM; j++) {
            cout << "[" << board[i][j] << "] ";
        }
        cout << endl;
    }

    return 0;
}