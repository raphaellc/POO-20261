#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Tabuleiro {
private:
    vector<string> posicoes;

public:
    Tabuleiro() {
        for (int i = 0; i < 9; ++i) {
            this->posicoes.push_back(to_string(i));
        }
    }

    string getPosicao(int indice){
        return posicoes.at(indice);
    }
};

class VisualizadorTabuleiro {
public:
    void exibir(Tabuleiro& tab) {
        string linhaFormatada = 
            tab.getPosicao(0) + " | " + tab.getPosicao(1) + " | " + tab.getPosicao(2) + "\n" +
            tab.getPosicao(3) + " | " + tab.getPosicao(4) + " | " + tab.getPosicao(5) + "\n" +
            tab.getPosicao(6) + " | " + tab.getPosicao(7) + " | " + tab.getPosicao(8);
        
        cout << linhaFormatada << endl;
    }
};

int main() {
    Tabuleiro meuTabuleiro; 
    
    VisualizadorTabuleiro visualizador; 
    
    visualizador.exibir(meuTabuleiro); 

    return 0;
}