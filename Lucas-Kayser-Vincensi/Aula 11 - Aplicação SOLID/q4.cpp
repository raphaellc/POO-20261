#include <iostream>
#include <string>
#include <vector>
#include <memory>

// Refatorado: DIP (Dependency Inversion Principle) e OCP (Open/Closed Principle)
// 'MonitorDoClima' dependia de implementações concretas ('Telefone' e 'EnviadorDeEmail')
// Foi introduzida a interface 'IAlerta' no qual o Monitor passa a depender (DIP)
// Dessa forma, é possível escalar adicionando notificadores como no padrão Observer sem 'ifs' duros (OCP)

class IAlerta {
public:
    virtual ~IAlerta() = default;
    virtual void gerarAlerta(const std::string& condicoesClimaticas) = 0;
};

class EnviadorDeEmail : public IAlerta {
public:
    void gerarAlerta(const std::string& condicoesClimaticas) override {
        std::cout << "Email: O tempo está " << condicoesClimaticas << "\n";
    }
};

class Telefone : public IAlerta {
public:
    void gerarAlerta(const std::string& condicoesClimaticas) override {
        std::cout << "Telefone: O tempo está " << condicoesClimaticas << "\n";
    }
};

class MonitorDoClima {
private:
    std::string condicoesAtuais;
    std::vector<std::shared_ptr<IAlerta>> notificadores;

public:
    void adicionarNotificador(std::shared_ptr<IAlerta> notificador) {
        notificadores.push_back(notificador);
    }

    void definirCondicoesAtuais(const std::string& descricaoDoClima) {
        this->condicoesAtuais = descricaoDoClima;
        
        // Notifica todos os dispositivos injetados
        for (const auto& notificador : notificadores) {
            notificador->gerarAlerta(descricaoDoClima);
        }
    }
};

int main() {
    MonitorDoClima monitor;
    
    monitor.adicionarNotificador(std::make_shared<Telefone>());
    monitor.adicionarNotificador(std::make_shared<EnviadorDeEmail>());

    std::cout << "Definindo para chuvoso:\n";
    monitor.definirCondicoesAtuais("chuvoso");
    std::cout << std::endl;

    std::cout << "Definindo para ensolarado:\n";
    monitor.definirCondicoesAtuais("ensolarado");
    std::cout << std::endl;

    std::cout << "\nPressione Enter para sair...";
    std::cin.get();
    return 0;
}