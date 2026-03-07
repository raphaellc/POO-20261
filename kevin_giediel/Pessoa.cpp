#include <string>
#include "Pessoa.h"

using namespace std;

         Pessoa::Pessoa() {  
            nome = "";
            idade = 0;
        }
        Pessoa::~Pessoa(){}
        void Pessoa::definirNome(std::string n){
            nome = n;
        }
        string Pessoa::dizerSeuNome() {
            return nome;
        }
        void Pessoa::definirIdade(int i) {
            idade = i;
        }
        int Pessoa::dizerSuaIdade() {
            return idade;
        }
