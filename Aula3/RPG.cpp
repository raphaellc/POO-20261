#include "RPG.h"
#include <iostream>
using namespace std;
RPG::RPG(Personagem *p1, Personagem *p2){
    this->personagem1 = p1;
    this->personagem2 = p2;
}

void RPG::iniciarBatalha(){
    cout << "Iniciando batalha" << endl; 
    while(true){
        this->personagem1->mostrarStatus();
        this->personagem2->mostrarStatus();
        cout << "--------" << this->personagem1->obterNome() 
        << "-------- Ataca -------" << this->personagem2->obterNome() 
        << endl; 
        this->personagem1->atacar(this->personagem2);
        if(this->personagem2->obterVida() <=0)
            break;
        cout << "--------" << this->personagem2->obterNome() 
        << "--------Ataca -------" << this->personagem1->obterNome() 
        << endl; 
        this->personagem2->atacar(this->personagem1);
        if(this->personagem1->obterVida() <=0)
            break;

    }
    cout << "Fim da batalha" << endl;
    if(this->personagem1->obterVida() > 0)
        cout << this->personagem1->obterNome() << " venceu" << endl;
    else
        cout << this->personagem2->obterNome() << " venceu" << endl;
}
