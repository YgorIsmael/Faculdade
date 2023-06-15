// Faça um algoritmo que recebe uma sequência de números inteiros e
// decide se a sequência é sempre ascendente, isto é, cada número é menor que
// o número seguinte. Exemplos:
// 10, 15, 30 , 31, 40, 80, 87 é ascendente
// 2, 9, 12, 12, 17 não é ascendente, pois 12 não é menor que 12
// 100, 101, 110, 111, 131, 11, 1000 não é, pois 131 não é menor que 11
#include <iostream>
using namespace std;
int main(){
    int seq;
    int num1;
    int num2 = 0;
    bool flag = false;
    cout << "Digite o tamanho da sequência: " << endl;
    cin >> seq;
    for (int i = 0; i < seq; i++) {
        cout << "Informe o elemento: " << endl;
        cin >> num1;
        if (num1 <= num2){
            flag = true;
            cout << num1 << num2;
        }
        num2 = num1;
    }
    if (flag == true){
        cout << "A sequência nao eh ascendente." << endl;
    }
    else {
        cout << "A sequência eh ascendente." << endl;
    }
}