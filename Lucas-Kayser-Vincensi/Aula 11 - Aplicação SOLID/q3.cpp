#include <iostream>
#include <string>
#include <memory>

// Refatorado: Aplicação do OCP (Open/Closed Principle)
// O uso da variável 'formalidade' causava múltiplos ifs
// Implementando o padrão de projeto Strategy (através de 'EstrategiaSaudacao')
// a classe Saudador está fechada para modificações mas aberta para adicionar novos tipos de saudação

class EstrategiaSaudacao {
public:
    virtual ~EstrategiaSaudacao() = default;
    virtual std::string saudar() const = 0;
};

class SaudacaoFormal : public EstrategiaSaudacao {
public:
    std::string saudar() const override { return "Boa noite, senhor."; }
};

class SaudacaoCasual : public EstrategiaSaudacao {
public:
    std::string saudar() const override { return "E aí, cara?"; }
};

class SaudacaoIntima : public EstrategiaSaudacao {
public:
    std::string saudar() const override { return "Olá, querido(a)!"; }
};

class SaudacaoPadrao : public EstrategiaSaudacao {
public:
    std::string saudar() const override { return "Olá."; }
};

class Saudador {
private:
    std::unique_ptr<EstrategiaSaudacao> estrategia;

public:
    std::string saudar() const {
        if (estrategia) return estrategia->saudar();
        return "Olá.";
    }

    void definirEstrategia(std::unique_ptr<EstrategiaSaudacao> novaEstrategia) {
        estrategia = std::move(novaEstrategia);
    }
};

int main() {
    Saudador saudador;

    saudador.definirEstrategia(std::make_unique<SaudacaoFormal>());
    std::cout << saudador.saudar() << std::endl;

    saudador.definirEstrategia(std::make_unique<SaudacaoCasual>());
    std::cout << saudador.saudar() << std::endl;

    saudador.definirEstrategia(std::make_unique<SaudacaoIntima>());
    std::cout << saudador.saudar() << std::endl;

    saudador.definirEstrategia(std::make_unique<SaudacaoPadrao>());
    std::cout << saudador.saudar() << std::endl;

    std::cout << "\nPressione Enter para sair...";
    std::cin.get();
    return 0;
}