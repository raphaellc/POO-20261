#include <iostream>
#include <string>
using namespace std;

class Notificacao {
public:
    virtual string gerarAlerta(string condicao) = 0;
    virtual ~Notificacao() {}
};

class EnviadorDeEmail : public Notificacao {
public:
    string gerarAlerta(string condicao) override {
        return "Enviando E-MAIL: O tempo está " + condicao;
    }
};

class Telefone : public Notificacao {
public:
    string gerarAlerta(string condicao) override {
        return "Ligando via TELEFONE: O tempo está " + condicao;
    }
};

class MonitorDoClima {
private:
    Notificacao *notificacao;

public:
    MonitorDoClima(Notificacao *n) {
        this->notificacao = n;
    }

    void definirCondicoesAtuais(string descricaoDoClima) {
        string alerta = notificacao->gerarAlerta(descricaoDoClima);
        cout << alerta << endl;
    }
};

int main() {
    Telefone t1;
    EnviadorDeEmail e1;

    MonitorDoClima monitor1(&t1);
    monitor1.definirCondicoesAtuais("chuvoso");

    MonitorDoClima monitor2(&e1);
    monitor2.definirCondicoesAtuais("ensolarado");

    return 0;
}