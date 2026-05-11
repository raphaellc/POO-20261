#include <iostream>
#include <string>

class Saudacao {
public:
    virtual ~Saudacao() {}
    virtual std::string saudar() const = 0;
};


class SaudacaoFormal : public Saudacao {
public:
    std::string saudar() const override { return "Boa noite, senhor."; }
};

class SaudacaoCasual : public Saudacao {
public:
    std::string saudar() const override { return "E aí, cara?"; }
};

class SaudacaoIntima : public Saudacao {
public:
    std::string saudar() const override { return "Olá, querido(a)!"; }
};

class SaudacaoPadrao : public Saudacao {
public:
    std::string saudar() const override { return "Olá."; }
};


class Saudador {
private:
    std::unique_ptr<Saudacao> saudacao;

public:
    explicit Saudador(std::unique_ptr<Saudacao> s) : saudacao(std::move(s)) {}

    std::string saudar() const {
        return saudacao->saudar();
    }
};

int main() {
    Saudador saudadorFormal(std::make_unique<SaudacaoFormal>());
    std::cout << saudadorFormal.saudar() << std::endl;

    Saudador saudadorCasual(std::make_unique<SaudacaoCasual>());
    std::cout << saudadorCasual.saudar() << std::endl;

    Saudador saudadorIntimo(std::make_unique<SaudacaoIntima>());
    std::cout << saudadorIntimo.saudar() << std::endl;

    Saudador saudadorPadrao(std::make_unique<SaudacaoPadrao>());
    std::cout << saudadorPadrao.saudar() << std::endl;

    return 0;
}
