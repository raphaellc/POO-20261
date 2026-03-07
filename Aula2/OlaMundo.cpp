#include <iostream>
#include <string>
#include "Pessoa.cpp"

using namespace std;

int main(){
    cout << "Ola Mundo " << "Quem está me programando? "<< endl;
    Pessoa p1;
    Pessoa * p2 = &p1;
    //instanciando uma classe (ocorrem em tempo de execução)
    p2 = new Pessoa();
    string nome;
    int idade;

    cin >> nome;
    p1.definirNome(nome);
    p1.definirIdade(18);

    cout << "Olá " << p1.dizerSeuNome() << endl;
    cout << "Qual é a sua idade?" << endl;
    cin >> idade;
    p1.definirIdade(idade);
    cout << "A minha idade é " << p1.dizerIdade() << endl;
    //destruindo o objeto da classe Pessoa armazenado em p2; 
    delete p2;
    return 0;
}