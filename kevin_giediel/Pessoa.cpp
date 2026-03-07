#include <string>

using namespace std;

class Pessoa {
    private:
        string nome;
        int idade;
        
        public:
        
        Pessoa() {  
            nome = "";
            idade = 0;
        }
        void definirNome(std::string n){
            nome = n;
        }
        string dizerSeuNome() {
            return nome;
        }
        void definirIdade(int i) {
            idade = i;
        }
        int dizerSuaIdade() {
            return idade;
        }
};