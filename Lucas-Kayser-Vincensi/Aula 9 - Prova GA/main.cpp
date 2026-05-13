#include "SmartHome.h"
#include <iostream>

using namespace std;

int main() {
    // 1. Composição (Casa e HubIA)
    CasaInteligente minhaCasa;
    minhaCasa.gerenciarCasa();
    
    // 2. Instanciando Dispositivos
    CaixaDeSom som("192.168.1.10", 90, "Som Ambiente");
    LuzInteligente luz("192.168.1.11", 85, "Luz Principal");
    SmartTV tv("192.168.1.12", 95, "Smart TV Sala");
    
    // 3. Herança Protegida
    CameraSeguranca cam("192.168.1.50", 100, "Portão Principal");
    cout << "\n[Herança Protegida] Acionando a câmera..." << endl;
    cam.monitorar(); 
    // cam.ip; // ERRO: Se descomentarmos, o compilador barra o acesso pois 'ip' está protegido.

    // 4. Herança Múltipla
    cout << "\n[Herança Múltipla]" << endl;
    tv.ligar();
    tv.exibirImagem(); 
    
    // 5. Agregação e Polimorfismo
    Comodo sala("Sala de Estar");
    sala.adicionarDispositivo(&som);
    sala.adicionarDispositivo(&luz);
    sala.adicionarDispositivo(&tv);
    
    sala.ativarCena(); // Dispara o método "ligar" de formas diferentes para cada classe
    
    // 6. Associação Simples
    Morador habitante("Raphael");
    habitante.usarDispositivo(&tv);
    
    return 0; // Os destrutores da Composição atuarão aqui
}