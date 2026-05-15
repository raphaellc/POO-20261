#include <iostream>
#include <string>

using namespace std;

// Abstração
class Alerta {
public:
    virtual string gerarAlertaMeteorologico(
        string condicoesClimaticas) = 0;

    virtual ~Alerta() {}
};


class Telefone : public Alerta {
public:
    string gerarAlertaMeteorologico(
        string condicoesClimaticas) override {

        return "Telefone: O tempo está " + condicoesClimaticas;
    }
};


class EnviadorDeEmail : public Alerta {
public:
    string gerarAlertaMeteorologico(
        string condicoesClimaticas) override {

        return "Email: O tempo está " + condicoesClimaticas;
    }
};

class MonitorDoClima {
private:
    string condicoesAtuais;
    Alerta* alerta;

public:

    MonitorDoClima(Alerta* a) {
        alerta = a;
    }

    void definirCondicoesAtuais(string descricaoDoClima) {

        condicoesAtuais = descricaoDoClima;

        cout << alerta->gerarAlertaMeteorologico(
                    descricaoDoClima)
             << endl;
    }
};

int main() {

    Telefone telefone;
    EnviadorDeEmail email;

    MonitorDoClima monitor1(&telefone);
    MonitorDoClima monitor2(&email);

    monitor1.definirCondicoesAtuais("chuvoso");

    monitor2.definirCondicoesAtuais("ensolarado");

    return 0;
}