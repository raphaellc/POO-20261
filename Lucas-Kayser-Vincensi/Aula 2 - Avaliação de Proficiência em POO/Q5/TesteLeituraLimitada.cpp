#include <iostream>

using namespace std;

/*5. Implemente um programa que receba como entrada somente números inteiros
positivos e imprima apenas os que estejam no intervalo de 5 a 15. O Programa deve
terminar quando for digitado o valor 0.*/

int main() {
    int x;
    //solicita ao usuario para digitar numeros inteiros positivos e termina o programa quando o numero 0 for digitado
    cout << "Digite numeros inteiros positivos (0 termina o programa):" << endl;
    while (true) {
        cin >> x;
        if (x == 0) {
            break;
        }
        //verifica se o numero é positivo e se esta entre 5 e 15 e o imprime o numero se for valido
        if (x > 0 && x >= 5 && x <= 15) {
            cout << "numero valido: " << x << endl;
        }
    }
    return 0;
}
