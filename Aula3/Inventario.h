#pragma once
#include <string>
#include "Item.h"
#include <vector>
using namespace std;

class Inventario {
    private:
        vector<Item *> * inv;
    public: 
        Inventario();
        ~Inventario();
        void adicionarItem(Item * i);
        Item * obterItem(int pos);
};
