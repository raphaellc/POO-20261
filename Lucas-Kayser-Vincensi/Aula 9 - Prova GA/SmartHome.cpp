#include "SmartHome.h"

// Implementação ComponenteRede
ComponenteRede::ComponenteRede(std::string i, int s) : ip(i), nivelSinal(s) {}

// Implementação DispositivoSmart
DispositivoSmart::DispositivoSmart(std::string i, int s, std::string n) 
    : ComponenteRede(i, s), nome(n) {}

// Implementação Luz
LuzInteligente::LuzInteligente(std::string i, int s, std::string n) 
    : DispositivoSmart(i, s, n) {}
void LuzInteligente::ligar() { 
    std::cout << "[Luz] " << nome << " (IP: " << ip << ") ligada com intensidade 100%." << std::endl; 
}

// Implementação Caixa de Som
CaixaDeSom::CaixaDeSom(std::string i, int s, std::string n) 
    : DispositivoSmart(i, s, n) {}
void CaixaDeSom::ligar() { 
    std::cout << "[Som] " << nome << " (IP: " << ip << "): ligado, iniciando playlist." << std::endl; 
}

// Implementação SmartTV
SmartTV::SmartTV(std::string i, int s, std::string n) 
    : DispositivoSmart(i, s, n) {}
void SmartTV::ligar() { 
    std::cout << "[TV] " << nome << " (IP: " << ip << ") Conectando aos servicos da TV." << std::endl; 
}
void SmartTV::exibirImagem() { 
    std::cout << "[TV] " << nome << " (IP: " << ip << ") Exibindo imagem." << std::endl; 
}

// Implementação Camera (Herança Protegida)
CameraSeguranca::CameraSeguranca(std::string i, int s, std::string loc) 
    : ComponenteRede(i, s), localizacao(loc) {}
void CameraSeguranca::monitorar() { 
    // Aqui podemos acessar 'ip' porque somos uma classe derivada, mas a main não pode.
    std::cout << "[Camera] Monitorando " << localizacao << ". IP Protegido: " << ip << std::endl; 
}

// Implementação Comodo (Agregação)
Comodo::Comodo(std::string n) : nomeComodo(n) {}
void Comodo::adicionarDispositivo(DispositivoSmart* disp) { 
    dispositivos.push_back(disp); 
}
void Comodo::ativarCena() {
    std::cout << "Iniciando cena no Comodo: " << nomeComodo << std::endl;
    for (auto disp : dispositivos) {
        disp->ligar(); // Chama as mensagens específicas abaixo
    }
    std::cout << "Cena ativada e ambiente pronto" << std::endl; // ESSENCIAL
}

// Implementação HubIA
HubIA::HubIA() { std::cout << "Hub de IA iniciado." << std::endl; }
HubIA::~HubIA() { std::cout << "Hub de IA encerrado." << std::endl; }
void HubIA::processarRotina() { std::cout << "IA analisando e ajustando..." << std::endl; }

// Implementação CasaInteligente (Composição)
CasaInteligente::CasaInteligente() {
    processadorCentral = new HubIA(); 
    std::cout << "Smart Home Iniciada." << std::endl;
}
CasaInteligente::~CasaInteligente() { 
    delete processadorCentral; 
    std::cout << "Smart Home Encerrada." << std::endl;
    std::cin.clear();
    std::cin.ignore(1000, '\n'); // Para nao fechar instantaneamente
    std::cin.get();
}

void CasaInteligente::gerenciarCasa() { 
    processadorCentral->processarRotina(); 
}

// Implementação Morador (Associação)
Morador::Morador(std::string n) : nome(n) {}
void Morador::usarDispositivo(DispositivoSmart* disp) {
    std::cout << "Morador " << nome << " ligou dispositivo." << std::endl;
    disp->ligar();
}