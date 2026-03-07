#include <iostream>
#include <string>
#include "Pessoa.h"
using namespace std;


int main() {
    cout << "Ola, Mundo!" << "Quem esta me programando?" << endl;
    Pessoa p1;
    Pessoa * p2 = &p1;
    p2 = new Pessoa();
    string nome;
    int idade;
    cin >> nome;
    p1.definirNome(nome);

    cout << "Ola, " << p1.dizerSeuNome() << "!" << endl;
    cout << "Quantos anos voce  tem?" << endl;
    
    cin >> idade;
    p1.definirIdade(idade);
    cout << "Sua idade e: " << p1.dizerSuaIdade() << " anos." << endl;
    // destruindo o objeto Pessoa armazenado em p2
    delete p2;
    return 0;
}