#include "RPG.h"
#include <iostream>
using namespace std;
RPG::RPG(Personagem *p1, Personagem *p2){
    this->personagem1 = p1;
    this->personagem2 = p2;
}

void RPG::iniciarBatalha(){
    cout << "Iniciando batalha" << endl; 
}
