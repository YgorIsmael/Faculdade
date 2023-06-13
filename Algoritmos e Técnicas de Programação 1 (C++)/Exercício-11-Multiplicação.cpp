// No algoritmo de multiplica��o dos camponeses russos, que � uma varia��o do algoritmo eg�pcio, a ideia �
// realizar a multiplica��o utilizando apenas soma e quociente da divis�o por 2. Para multiplicar dois n�meros
// inteiros positivos, calcule o quociente da divis�o do primeiro n�mero por 2, ao mesmo tempo em que soma o
// segundo n�mero consigo mesmo, dobrando seu valor. Repita esse processo at� o quociente obtido for 1. O valor
// da multiplica��o � a soma dos valores derivados do segundo n�mero (pela soma consigo mesmo) sempre que o
// respectivo valor de quociente for �mpar (os valores originais dos n�meros tamb�m devem ser considerados na
// avalia��o dessa condi��o). Implemente o algoritmo.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1, num2;
    int i = 0;
    int valor = 0;
    cout << "Digite o primeiro n�mero: " << endl;
    cin >> num1;
    cout << "Digite o segundo n�mero: " << endl;
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



