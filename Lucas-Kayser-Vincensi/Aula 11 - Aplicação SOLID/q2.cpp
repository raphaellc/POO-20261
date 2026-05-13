#include <iostream>
#include <string>

// Refatorado: Aplicação do LSP (Liskov Substitution Principle) e ISP (Interface Segregation Principle)
// O 'Pinguim' lançava uma exceção em 'voar()', o que quebrava o contrato da classe base (Ave)
// Segreguei os métodos criando as especializações 'AveVoadora' e 'AveNadadora'

class Ave {
public:
    virtual ~Ave() {} 
    virtual void trocarPenas() = 0; 
};

class AveVoadora : public Ave {
public:
    virtual void voar() = 0;
};

class AveNadadora : public Ave {
public:
    virtual void nadar() = 0;
};

class Aguia : public AveVoadora {
public:
    std::string localizacaoAtual;
    int numeroDePenas;

    Aguia(int contagemInicialPenas) {
        this->numeroDePenas = contagemInicialPenas;
    }

    void voar() override {
        this->localizacaoAtual = "no ar";
        std::cout << "Águia está voando. Localização: " << this->localizacaoAtual << std::endl;
    }

    void trocarPenas() override {
        this->numeroDePenas -= 1;
        std::cout << "Águia trocando penas. Penas: " << this->numeroDePenas << std::endl;
    }
};

class Pinguim : public AveNadadora {
public:
    std::string localizacaoAtual;
    int numeroDePenas;

    Pinguim(int contagemInicialPenas) {
        this->numeroDePenas = contagemInicialPenas;
    }

    void trocarPenas() override {
        this->numeroDePenas -= 1;
        std::cout << "Pinguim trocando penas. Penas: " << this->numeroDePenas << std::endl;
    }

    void nadar() override {
        this->localizacaoAtual = "na água";
        std::cout << "Pinguim está nadando. Localização: " << this->localizacaoAtual << std::endl;
    }
};

int main() {
    Aguia aguia(100);
    aguia.voar();
    aguia.trocarPenas();

    std::cout << "---" << std::endl;

    Pinguim pinguim(50);
    pinguim.nadar();
    pinguim.trocarPenas();

    std::cout << "\nPressione Enter para sair...";
    std::cin.get();
    return 0;
}