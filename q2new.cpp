#include <iostream>
#include <string>
using namespace std;

class Ave {
public:
    virtual ~Ave() {} 
    virtual void trocarPenas() = 0; 
};

class Aguia : public Ave {
public:
    string localizacaoAtual;
    int numeroDePenas;

    Aguia(int contagemInicialPenas) {
        this->numeroDePenas = contagemInicialPenas;
    }

    void voar(){
        this->localizacaoAtual = "no ar";
        cout << "Águia está voando. Localização: " << this->localizacaoAtual << endl;
    }

    void trocarPenas() override {
        this->numeroDePenas -= 1;
        cout << "Águia trocando penas. Penas: " << this->numeroDePenas << endl;
    }
};

class Pinguim : public Ave {
public:
    string localizacaoAtual;
    int numeroDePenas;

    Pinguim(int contagemInicialPenas) {
        this->numeroDePenas = contagemInicialPenas;
    }

    void trocarPenas() override {
        this->numeroDePenas -= 1;
        std::cout << "Pinguim trocando penas. Penas: " << this->numeroDePenas << std::endl;
    }

    void nadar() {
        this->localizacaoAtual = "na água";
        std::cout << "Pinguim está nadando. Localização: " << this->localizacaoAtual << std::endl;
    }
};

int main() {
    Aguia aguia(100);
    aguia.voar();
    aguia.trocarPenas();

    cout << "---" << endl;

    Pinguim pinguim(50);
    pinguim.nadar();
    pinguim.trocarPenas();

    return 0;
}