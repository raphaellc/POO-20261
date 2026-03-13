#include <iostream>
#include <string>
#include "Jogador.h"
using namespace std;

// Protótipo da função
void mostrarStatus(Jogador &j1);

int main(){
    //Definicao de atributos
    int vida, energia;
    
    //Definicao de Objetos e classe construtora
    Jogador j1;
    
    //Mostra os valores dos atributos definidos
    mostrarStatus(j1);

    //Atualize os valores dos atributos por meio dos métodos
    cout << "Qual o novo valor da Vida: " << endl;
    cin >> vida;
    j1.definirVida(vida);

    cout << "Qual o novo valor da Energia: " << endl;
    cin >> energia;
    j1.definirEnergia(energia);

    //Mostre os valores dos atributos definidos.
    mostrarStatus(j1);
    return 0;
}

void mostrarStatus(Jogador &j1){
    cout << "Status atual do Jogador\nVida: " << j1.obterVida() << "\nEnergia: " << j1.obterEnergia() << endl;
}