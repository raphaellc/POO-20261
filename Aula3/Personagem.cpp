#include "Personagem.h"

Personagem::Personagem(){
    this->vida = 100;
    this->nome = "";
}

Personagem::~Personagem(){
    cout << "Personagem destruido" << endl;
}

void Personagem::definirVida(int v){
    this->vida = v;
}

int Personagem::obterVida(){
    return this->vida;
}

void Personagem::definirNome(string n){
    this->nome = n;
}

string Personagem::obterNome(){
    return this->nome;
}

void Personagem::atacar(Personagem * p){
    cout << this->nome << "ataca" << p->obterNome() << endl;
    p->defender(10);
}

void Personagem::defender(int dano){
    this->vida -= dano;
    cout << this->nome << "defende" << dano << "de dano" << endl;
}
void Personagem::curar(int cura){
    if(this->vida < 100){
        if ((100 - this->vida) >= cura)
            this->vida += cura;
        else
            this->vida = 100;
    }
    cout << this->nome << "cura" << cura << "de vida" << endl;    
}

void Personagem::mostrarStatus(){
    cout << "Nome: " << this->nome << endl;
    cout << "Vida: " << this->vida << endl;
}