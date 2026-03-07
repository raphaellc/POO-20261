#pragma once
#include <string>

class Pessoa{
    private:
        std::string nome;
        int idade;
    public:
        Pessoa();
        ~Pessoa();
        void definirNome(std::string n);
        std::string dizerSeuNome();
        void definirIdade(int id);
        int dizerIdade();
};