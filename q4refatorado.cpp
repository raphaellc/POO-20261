#include <iostream>
#include <string>

class Notificador {
public:
    virtual void enviar(std::string mensagem) = 0;
    virtual ~Notificador() {}
};

class NotificadorEmail : public Notificador {
public:
    void enviar(std::string mensagem) override {
        std::cout << "[EMAIL] " << mensagem << std::endl;
    }
};

class NotificadorTelefone : public Notificador {
public:
    void enviar(std::string mensagem) override {
        std::cout << "[TELEFONE] " << mensagem << std::endl;
    }
};

class MonitorDoClima {
private:
    Notificador* notificador;

public:
    MonitorDoClima(Notificador* notificador) {
        this->notificador = notificador;
    }

    void definirCondicoes(std::string clima) {
        std::string alerta = "O tempo está " + clima;
        notificador->enviar(alerta);
    }
};

int main() {
    NotificadorTelefone telefone;
    MonitorDoClima monitor(&telefone);

    monitor.definirCondicoes("chuvoso");

    return 0;
}