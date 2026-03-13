#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

/*7. Elabore um programa que:
a. Declare um vetor de inteiros de 10 posições
b. Preencha o vetor
c. Imprima os valores do vetor de maneira invertida, do último elemento pra
primeiro;
d. mostre o maior e o menor valor do vetor
e. faça a rotação à esquerda dos elementos do vetor, por exemplo, dado o vetor
[1,2,3,4,5] após uma rotação à esquerda o vetor ficará [2,3,4,5,1], após nova
rotação à esquerda o vetor ficará [3,4,5,1,2].*/

int main() {
    //a. Declare um vetor de inteiros de 10 posições
    vector<int> v(10);

    //b. Preencha o vetor de 1 a 100
    srand(time(0));
    for(int i = 0; i < 10; i++) {
        v[i] = rand() % 100 + 1;
    }

    cout << "Vetor original: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    //c. Imprima os valores do vetor de maneira invertida
    cout << "Vetor invertido: ";
    for(int i = 9; i >= 0; i--) {
        cout << v[i] << " ";
    }
    cout << endl;

    //d. mostre o maior e o menor valor do vetor
    int maxVal = *max_element(v.begin(), v.end());
    int minVal = *min_element(v.begin(), v.end());
    cout << "Maior valor: " << maxVal << endl;
    cout << "Menor valor: " << minVal << endl;

    //e. faça a rotação à esquerda dos elementos do vetor
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "Vetor rotacionado para esquerda: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    return 0;
}

