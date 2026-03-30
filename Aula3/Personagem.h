#pragma once
#include <string>
#include <iostream>
#include "Inventario.h"

using namespace std;
class Personagem {
    protected:
        int vida;
        string nome;
        Inventario * inv;

    public:
        Personagem();
        virtual ~Personagem();
        void definirVida(int v);
        int obterVida();
        void definirNome(string n);
        string obterNome();
        virtual void atacar(Personagem *p);
        void defender(int dano);
        void curar(int cura);
        void mostrarStatus();
        void pegarItem(Item * i);
        
};
