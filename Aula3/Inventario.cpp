#include "Inventario.h"
#include "Item.h"
#include <iostream>
using namespace std;

Inventario::Inventario(){
    this->inv = new vector<Item *>();
    cout << "Inventario criado" << endl;
}
Inventario::~Inventario(){
    this->inv->clear();
    delete this->inv;
    cout << "Inventario destruido" << endl;
}

void Inventario::adicionarItem(Item * i){
    this->inv->push_back(i);
}

Item * Inventario::obterItem(int pos){
    return this->inv->at(pos);
}
