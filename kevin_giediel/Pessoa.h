#pragma once
#include <string> 

using namespace std;

class Pessoa {
    private:
    string nome;
    int idade;

    public:
    Pessoa();
    ~Pessoa();
    void definirNome(string n);
    string dizerSeuNome();
    void definirIdade(int i);
    int dizerSuaIdade();

};