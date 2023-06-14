// Relações matemáticas de números inteiros com números inteiros (R ⊂ Z×Z) podem ser representados
// como conjuntos de pares ordenados na Matemática. Por exemplo, R = {(10,7), (−1,8), (4,3)}.
// Faça um algoritmo que recebe:
// • o número total de pares da relação,
// • seguido de todos os dados dos pares.
// O programa deve decidir (dizer sim ou não) se todos os pares são da forma:
// (n, sucessor(n))
// onde sucessor(n) = n + 1. Exemplos:
// • R = {(8,9), (5,6), (−3, −2), (0,1)} atende à definição
// • R = {(100,101), (30,7)} não atende à definição pois 7 ≠ 30 + 1
#include <iostream>
using namespace std;

int main(){
    int pares;
    int i = 0;
    int j = 0;
    bool flag = false;
    int num1, num2;
    cout << "Digite o total de pares: " << endl;
    cin >> pares;
    while (i < pares) {
            cout << "Informe o 1o componente do par: " << endl;
            cin >> num1;
            cout << "Informe o 2o componente do par: " << endl;
            cin >> num2;
            if (num2 != num1+1){
                flag = true;
            }
        i++;
    }
    if (flag == true) {
        cout << "Não" << endl;
    }
    else {
        cout << "Sim" << endl;
    }
}