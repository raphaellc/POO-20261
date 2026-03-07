#include "Pessoa.h"

//Construtor com nome igual ao da classe e sem retorno
Pessoa::Pessoa(){
    nome = "";
    idade = 0;
}
Pessoa::~Pessoa(){}
void Pessoa::definirNome(std::string n){
    nome = n;
}
std::string Pessoa::dizerSeuNome(){
    return nome;
}
void Pessoa::definirIdade(int id){
    idade = id;
}
int Pessoa::dizerIdade(){
    return idade;
}