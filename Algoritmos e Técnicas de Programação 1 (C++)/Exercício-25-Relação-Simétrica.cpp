/* Receba um número n de pares de uma relação (x, y) e diga se essa relação é simétrica ou não*/

#include <iostream>
using namespace std;
int main () {
	int pares, i = 0, j = 0, z = 0, b = 0, n = 0, x, y;
	bool flag = false;
	cout << "Digite a quantidade de pares:\n";
	cin >> pares;
	int a[2*pares];
	while (i < 2 * pares) {
		cout << "Digite o valor de X\n";
		cin >> a[i];
		cout << "Digite o valor de Y\n";
		cin >> a[i+1];
		cout << "X: " << a[i] << " Y: " << a[i+1] << endl;
		i = i + 2;
	}
	i = i - 1;
	z = 2 * pares - 2;
	b = z;
	while (i >= 1) {	// x � par y � impar
		while (j < pares) {
			if (a[i] == a[z]) {
				if (a[z+1] == a[i-1]) {
					n++;
				}
			}
			z = z - 2;
			j++;;
		}
		j = 0;
		z = b;
		i = i - 2;
	}
	if (n != pares) {
		cout << "Nao eh simetrico\n";
	}
	else if (n == pares) {
		cout << "eh simetrico\n";
	}
}
