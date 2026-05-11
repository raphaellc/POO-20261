#include <iostream>
#include <string>
#include <stdexcept>

// Classe abstrata "Ave"
class Ave {
public:
    virtual ~Ave() {}
    virtual void trocarPenas() = 0;
};

class IAveVoadora {
public:
    virtual ~IAveVoadora() {}
    virtual void voar() = 0;
};

class Aguia : public Ave, public IAveVoadora {
public:
    std::string localizacaoAtual;
    int numeroDePenas;

    Aguia(int contagemInicialPenas) : numeroDePenas(contagemInicialPenas) {}

    void voar() override {
        localizacaoAtual = "no ar";
        std::cout << "Águia está voando. Localização: " << localizacaoAtual << std::endl;
    }

    void trocarPenas() override {
        numeroDePenas -= 1;
        std::cout << "Águia trocando penas. Penas: " << numeroDePenas << std::endl;
    }
};

class Pinguim : public Ave {
public:
    std::string localizacaoAtual;
    int numeroDePenas;

    Pinguim(int contagemInicialPenas) : numeroDePenas(contagemInicialPenas) {}

    void trocarPenas() override {
        numeroDePenas -= 1;
        std::cout << "Pinguim trocando penas. Penas: " << numeroDePenas << std::endl;
    }

    void nadar() {
        localizacaoAtual = "na água";
        std::cout << "Pinguim está nadando. Localização: " << localizacaoAtual << std::endl;
    }
};


void fazerAveVoar(IAveVoadora& ave) {
    ave.voar();
}

int main() {
    Aguia aguia(100);
    aguia.voar();
    aguia.trocarPenas();

    std::cout << "---" << std::endl;

    Pinguim pinguim(50);
    pinguim.nadar();
    pinguim.trocarPenas();

    fazerAveVoar(aguia); 
    return 0;
}
