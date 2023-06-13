// Faça um algoritmo que recebe uma sequência de 8
// algarismos binários (isto é, 0 ou 1), e mostra o valor correspondente em base decimal.
// Lembrando que o primeiro digíto da sequência deve equivaler a 2^7 e o último a 2^0.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i = 7;
    int j = 0;
    int valor = 0;
    while (i >= 0){
        cout << "Digite o " << i + 1 << "° número da sequência binária: " << endl;
        cin >> j;
        if (j == 1) {
            valor = valor + pow(2, i);
        }
        i--;
        j = 0;
    }
    cout << valor;
}
