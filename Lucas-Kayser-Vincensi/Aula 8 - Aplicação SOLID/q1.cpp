#include <iostream>
#include <string>
#include <vector>

// Refatorado: Aplicação do SRP (Single Responsibility Principle)
// A classe Tabuleiro agora apenas armazena as posições e a lógica associada a elas
// A responsabilidade de exibição no console foi extraída para ExibidorDeTabuleiro

class Tabuleiro {
public:
    std::vector<std::string> posicoes;

    Tabuleiro() {
        for (int i = 0; i < 9; ++i) {
            this->posicoes.push_back(std::to_string(i));
        }
    }

    std::vector<std::string> primeiraLinha() {
        std::vector<std::string> linha;
        linha.push_back(this->posicoes.at(0));
        linha.push_back(this->posicoes.at(1));
        linha.push_back(this->posicoes.at(2));
        return linha;
    }

    std::vector<std::string> segundaLinha() {
        std::vector<std::string> linha;
        linha.push_back(this->posicoes.at(3));
        linha.push_back(this->posicoes.at(4));
        linha.push_back(this->posicoes.at(5));
        return linha;
    }

    std::vector<std::string> terceiraLinha() {
        std::vector<std::string> linha;
        linha.push_back(this->posicoes.at(6));
        linha.push_back(this->posicoes.at(7));
        linha.push_back(this->posicoes.at(8));
        return linha;
    }
};

class ExibidorDeTabuleiro {
public:
    void exibir(const Tabuleiro& tabuleiro) {
        std::string linhaFormatada = 
            tabuleiro.posicoes.at(0) + " | " + tabuleiro.posicoes.at(1) + " | " + tabuleiro.posicoes.at(2) + "\n" +
            tabuleiro.posicoes.at(3) + " | " + tabuleiro.posicoes.at(4) + " | " + tabuleiro.posicoes.at(5) + "\n" +
            tabuleiro.posicoes.at(6) + " | " + tabuleiro.posicoes.at(7) + " | " + tabuleiro.posicoes.at(8);
        
        std::cout << linhaFormatada << std::endl;
    }
};

int main() {
    Tabuleiro tabuleiro;
    ExibidorDeTabuleiro exibidor;
    exibidor.exibir(tabuleiro);
    
    std::cout << "\nPressione Enter para sair...";
    std::cin.get();
    return 0;
}