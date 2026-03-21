#include "Item.h"
#include <iostream>
using namespace std;

Item::Item(){  
    this->duracao = 100;
    this->nome = "";
    this->tipo_item = TIPO::Espada;
}
Item::Item(int d, string n, TIPO ti){
    this->duracao = d;
    this->nome = n;
    this->tipo_item = ti;
}
Item::~Item(){
    cout << "Item destruido" << endl;
}
void Item::definirDuracao(int d){
    this->duracao = d;
}
int Item::obterDuracao(){
    return this->duracao;
}
void Item::definirNome(string n){
    this->nome = n;
}
string Item::obterNome(){
    return this->nome;
}
void Item::definirTipo(TIPO t){
    this->tipo_item = t;
}
TIPO Item::obterTipo(){
    return this->tipo_item;
}
int Item::usar(){
    if(this->duracao > 0){
        this->duracao -= 20;
    }
    return 10;
}