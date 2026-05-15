#pragma once
#include <string>

class player {

private:
    int vida;
    int energia;

public:
    player();
    ~player();
    void definirVida(int v);
    int obterVida();
    void definirEnergia(int e);
    int obterEnergia();
};