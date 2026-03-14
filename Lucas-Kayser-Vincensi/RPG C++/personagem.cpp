#include "personagem.h"

Personagem::Personagem(){

    this->vida = 100;
    this->nome = "";

}

Personagem::Personagem(){

    cout << "Personagem destruido" << endl;

}

Personagem::definirVida(int v){

    return this->vida;

}

Personagem::definirNome(){

    return this->nome;

}
