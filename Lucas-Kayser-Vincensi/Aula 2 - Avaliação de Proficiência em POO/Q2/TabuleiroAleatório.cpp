#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

/*2. Crie um tabuleiro com n linhas por m colunas. Esse tabuleiro deve ser preenchido com
cinco letras (informadas pelo usuário) distribuídas aleatoriamente.*/

int main() {
    //obter o numero de linhas e colunas para o tabuleiro
    int n, m;
    cout << "Numero de linhas n: ";
    cin >> n;
    cout << "Numero de colunas m: ";
    cin >> m;

    //obter as 5 letras para o tabuleiro
    vector<char> letras(5);
    for(int i = 0; i < 5; i++) {
        cout << "Digite a letra " << (i+1) << ": ";
        cin >> letras[i];
    }
    srand(time(0));

    //definir as 5 letras de maneira aleatoria no tabuleiro
    vector<vector<char>> tabuleiro(n, vector<char>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            tabuleiro[i][j] = letras[rand() % 5];
        }
    }
    
    //imprimir o tabuleiro
    cout << "Tabuleiro:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << tabuleiro[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
