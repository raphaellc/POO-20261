#include "Humano.h"

Humano::Humano() : Personagem(), versatilidade(100){}
Humano::~Humano(){}
void Humano::setVersatiliade(int v){
    this->versatilidade = v;
}
int Humano::getVersatilidade(){
    return this->versatilidade;
}
void Humano::atacar(Personagem * p){
    cout << this->nome << "humano ataca" << p->obterNome() << endl;
    p->defender(10+this->versatilidade);
}

