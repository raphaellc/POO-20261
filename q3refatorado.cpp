#include <iostream>
#include <string>

class Saudacao {
public:
    virtual std::string saudar() = 0;
    virtual ~Saudacao() {}
};

class SaudacaoFormal : public Saudacao {
public:
    std::string saudar() override {
        return "Boa noite, senhor.";
    }
};

class SaudacaoCasual : public Saudacao {
public:
    std::string saudar() override {
        return "E aí, cara?";
    }
};

class SaudacaoIntima : public Saudacao {
public:
    std::string saudar() override {
        return "Olá, querido(a)!";
    }
};

class Saudador {
private:
    Saudacao* saudacao;

public:
    Saudador(Saudacao* saudacao) {
        this->saudacao = saudacao;
    }

    void exibirSaudacao() {
        std::cout << saudacao->saudar() << std::endl;
    }
};

int main() {
    SaudacaoFormal formal;
    Saudador saudador(&formal);

    saudador.exibirSaudacao();

    return 0;
}