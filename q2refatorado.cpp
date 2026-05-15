#include <iostream>
#include <string>

class Ave {
public:
    virtual void trocarPenas() = 0;
    virtual ~Ave() {}
};

class AveVoadora {
public:
    virtual void voar() = 0;
    virtual ~AveVoadora() {}
};

class Aguia : public Ave, public AveVoadora {
public:
    void trocarPenas() override {
        std::cout << "Águia trocando penas." << std::endl;
    }

    void voar() override {
        std::cout << "Águia voando." << std::endl;
    }
};

class Pinguim : public Ave {
public:
    void trocarPenas() override {
        std::cout << "Pinguim trocando penas." << std::endl;
    }

    void nadar() {
        std::cout << "Pinguim nadando." << std::endl;
    }
};

int main() {
    Aguia aguia;
    aguia.voar();

    Pinguim pinguim;
    pinguim.nadar();

    return 0;
}