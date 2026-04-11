#include "Jogador.h"

//contrutor com nome igual ao da classe e sem retorno
Jogador::Jogador(){
    vida = 0;
    energia = 0;
}
//Metodo para definir vida
void Jogador::definirVida(int v){
    vida = v;
}
//Método de retorno de vida
int Jogador::obterVida(){
    return vida;
}
//Metodo para definir energia
void Jogador::definirEnergia(int e){
    energia = e;
}
//Método de retorno de energia
int Jogador::obterEnergia(){
    return energia;
}