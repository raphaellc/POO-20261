#include <iostream>
#include <string>
#include <vector>


class IAlertador {
public:
    virtual ~IAlertador() {}
    virtual void enviarAlerta(const std::string& condicoesClimaticas) = 0;
};


class AlertadorTelefone : public IAlertador {
public:
    void enviarAlerta(const std::string& condicoesClimaticas) override {
        std::cout << "[Telefone] O tempo está " << condicoesClimaticas << std::endl;
    }
};

class AlertadorEmail : public IAlertador {
public:
    void enviarAlerta(const std::string& condicoesClimaticas) override {
        std::cout << "[E-mail] O tempo está " << condicoesClimaticas << std::endl;
    }
};

class MonitorDoClima {
private:
    std::vector<IAlertador*> alertadores;
    std::string condicoesAtuais;

public:

    void adicionarAlertador(IAlertador* alertador) {
        alertadores.push_back(alertador);
    }

    void definirCondicoesAtuais(const std::string& descricaoDoClima) {
        condicoesAtuais = descricaoDoClima;
        for (IAlertador* alertador : alertadores) {
            alertador->enviarAlerta(condicoesAtuais);
        }
    }
};

int main() {
    AlertadorTelefone telefone;
    AlertadorEmail email;

    MonitorDoClima monitor;
    monitor.adicionarAlertador(&telefone);
    monitor.adicionarAlertador(&email);

    std::cout << "Definindo para chuvoso:" << std::endl;
    monitor.definirCondicoesAtuais("chuvoso");

    std::cout << "Definindo para ensolarado:" << std::endl;
    monitor.definirCondicoesAtuais("ensolarado");

    return 0;
}
