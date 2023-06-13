// No algoritmo de multiplicação dos camponeses russos, que é uma variação do algoritmo egípcio, a ideia é
// realizar a multiplicação utilizando apenas soma e quociente da divisão por 2. Para multiplicar dois números
// inteiros positivos, calcule o quociente da divisão do primeiro número por 2, ao mesmo tempo em que soma o
// segundo número consigo mesmo, dobrando seu valor. Repita esse processo até o quociente obtido for 1. O valor
// da multiplicação é a soma dos valores derivados do segundo número (pela soma consigo mesmo) sempre que o
// respectivo valor de quociente for ímpar (os valores originais dos números também devem ser considerados na
// avaliação dessa condição). Implemente o algoritmo.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1, num2;
    int i = 0;
    int valor = 0;
    cout << "Digite o primeiro número: " << endl;
    cin >> num1;
    cout << "Digite o segundo número: " << endl;
    cin >> num2;
    if (num1 <= 0 || num2 <= 0) {
        return 0;
    }
    while (i != 1) {
    	if (num1 % 2 == 1) {
        	valor = valor + num2;
		}
        if (num1 / 2 == 1){
        	num2 = num2 * 2;
        	valor = valor + num2;
        	num1 = num1 / 2;
            i = 1;
        }
        num1 = num1 / 2;
        num2 = num2 * 2;
    }
    cout << "A multiplicacao eh: " << valor << endl;
}



