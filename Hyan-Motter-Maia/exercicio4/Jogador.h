#pragma once
#include <string>

class Jogador {

private:
    int vida;
    int energia;

public:
    Jogador();
    ~Jogador();
    void definirVida(int v);
    int obterVida();
    void definirEnergia(int e);
    int obterEnergia();
};