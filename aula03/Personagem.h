#pragma once
#include <string>
#include <iostream>
using namespace std;
class Personagem {
    private:
        int vida;
        string nome;
    public:
        Personagem();
        ~Personagem();
        void definirVida(int v);
        int obterVida();
        void definirNome(string n);
        string obterNome();
        void atacar(Personagem *p);
        void defender(int dano);
        void curar(int cura);
        void mostrarStatus();
};
