#ifndef Q3JOGADOR_H
#define Q3JOGADOR_H

/*3. Declare a Classe Jogador
a. Declare dois atributos privados inteiros identificados como vida e energia.
b. Inicialize por meio do construtor ambos atributos.
c. Declare métodos para definir e obter o valor de cada atributo.*/

class Jogador {
private:
    int vida;
    int energia;

public:
    //construtor da vida e energia
    Jogador(int v, int e) : vida(v), energia(e) {}

    //metodo para obter os valores de vida e energia
    int getVida() {
        return vida;
    }

    int getEnergia() {
        return energia;
    }

    //metodo para definir os valores de vida e energia
    void setVida(int v) {
        vida = v;
    }

    void setEnergia(int e) {
        energia = e;
    }
};

#endif