#include <iostream>
#include <string>
#include <vector>

class Tabuleiro {
public:
    std::vector<std::string> posicoes;

    // Construtor
    Tabuleiro() {
        for (int i = 0; i < 9; ++i) {
            posicoes.push_back(std::to_string(i));
        }
    }

    std::vector<std::string> getLinha(int linha) const {
        int inicio = linha * 3;
        return { posicoes.at(inicio), posicoes.at(inicio + 1), posicoes.at(inicio + 2) };
    }
};

class ExibidorDeTabuleiro {
public:
    void exibir(const Tabuleiro& tabuleiro) const {
        for (int i = 0; i < 3; ++i) {
            auto linha = tabuleiro.getLinha(i);
            std::cout << linha[0] << " | " << linha[1] << " | " << linha[2] << "\n";
        }
    }
};

int main() {
    Tabuleiro tabuleiro;
    ExibidorDeTabuleiro exibidor;
    exibidor.exibir(tabuleiro);
    return 0;
}