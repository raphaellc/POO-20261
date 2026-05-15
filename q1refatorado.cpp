#include <iostream>
#include <string>
#include <vector>

class Tabuleiro {
private:
    std::vector<std::string> posicoes;

public:
    Tabuleiro() {
        for (int i = 0; i < 9; ++i) {
            posicoes.push_back(std::to_string(i));
        }
    }

    const std::vector<std::string>& obterPosicoes() const {
        return posicoes;
    }
};

class ExibidorTabuleiro {
public:
    void exibir(const Tabuleiro& tabuleiro) {
        const auto& p = tabuleiro.obterPosicoes();

        std::cout
            << p[0] << " | " << p[1] << " | " << p[2] << "\n"
            << p[3] << " | " << p[4] << " | " << p[5] << "\n"
            << p[6] << " | " << p[7] << " | " << p[8] << std::endl;
    }
};

int main() {
    Tabuleiro tabuleiro;
    ExibidorTabuleiro exibidor;

    exibidor.exibir(tabuleiro);

    return 0;
}