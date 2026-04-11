#pragma once
#include <string>

//Declaracao da classe Jogador
class Jogador{
    //Declaracao de atributos privados inteiros vida e energia.
    private:
        int vida;
        int energia;

    //Metodos existentes de construcao, obtecao e definicao dos atributos
    public:
        Jogador();
        void definirVida(int v);
        int obterVida();
        void definirEnergia(int e);
        int obterEnergia();
};