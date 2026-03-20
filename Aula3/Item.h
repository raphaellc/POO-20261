#pragma once
#include <string>

using namespace std;
enum TIPO {Espada, Machado, Pocao, Escudo};
class Item{
    private: 
        int duracao;
        string nome;
        TIPO tipo_item;
    //Assinatura do método: TipoDeRetorno NomeMetodo(Argumentos de entrada);
    public: 
        Item(); //Construtor
        Item(int d, string n, TIPO ti); //Construtor
        ~Item(); //Destrutor
        void definirDuracao(int d);
        int obterDuracao();
        void definirNome(string n);
        string obterNome();
        void definirTipo(TIPO t);
        TIPO obterTipo();
        int usar();
};