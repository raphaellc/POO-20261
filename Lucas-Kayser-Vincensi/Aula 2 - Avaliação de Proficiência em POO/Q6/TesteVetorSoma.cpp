#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

/*6. Elabore um programa que:
a. declare um vetor de inteiros de 10 posições,
b. Preencha o mesmo com valores entre 20 e 50.
c. Imprima o resultado da soma de todos os 10 valores preenchidos.*/

int main() {
    //a. declare um vetor de inteiros de 10 posições,
    vector<int> v(10);

    //b. Preencha o mesmo com valores entre 20 e 50.
    srand(time(0));
    for(int i = 0; i < 10; i++) {
        v[i] = rand() % 31 + 20;
    }

    //c. Imprima o resultado da soma de todos os 10 valores preenchidos
    int sum = 0;
    for(int x : v) {
        sum += x;
    }
    cout << "Soma: " << sum << endl;

    return 0;
}
