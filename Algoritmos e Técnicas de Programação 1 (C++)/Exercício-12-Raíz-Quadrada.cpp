// Fa�a um algoritmo que calcula a aproxima��o para cima da raiz quadrada inteira de um n�mero inteiro,
// usando a propriedade de que todo quadrado inteiro perfeito � a uma soma de uma sequ�ncia de �mpares
// (n^2 = 1 + 3 + 5 + ? + (2k + 1)).

#include <iostream>
using namespace std;

int main() {
	int valor, num, num2, num3;
	cout << "informe o n�mero: " << endl;
	cin >> valor;
	num = 0;
	num2= 0;
	num3 = 1;
	while (num2 < valor) {
		num2 = num2 + num3;
		num3 = num3 + 2;
		num++;
	}
    cout << num << endl;
}
