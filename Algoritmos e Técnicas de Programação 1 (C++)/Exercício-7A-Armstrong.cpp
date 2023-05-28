//Número de Armstrong é um número de n dígitos que é igual a soma de cada um dos seus dígitos elevado a n-ésima potência.
//Por exemplo, 153 (n = três dígitos) é igual a 13 + 53 + 33 = 1 + 125 + 27 = 153.
//Crie um algoritmo que determine se um número é número de Armstrong.

#include <iostream>
using namespace std;

int centenas (int n) {
	if (n >= 100) {
		n = n/100;
		n = n*n*n;
	}
	else n = 0;
	return n;
}
int dezenas (int n) {
	if (n >= 100) {
		n = n % 100;
		n = n - (n%10);
		n = n / 10;
		n = n*n*n;
	}
	else if (n >= 10 && n < 100) {
		n = n/10;
		n = n*n;
	}
	else n = 0;
	return n;
}
int unidades (int n) {
	if (n >= 100) {
		n = n % 100;
		n = n % 10;
		n = n * n * n;
	}
	else if (n >= 10 && n < 100) {
		n = n % 10;
		n = n * n;
	}
	return n;
}
bool armstrong (int n) {
	if (n == centenas(n) + dezenas(n) + unidades(n)) {
		return true;
	}
	else
		return false;
}

int main(){
	int valor;
	cout << "Escreva o numero:\n";
	cin >> valor;
	if (armstrong(valor)) {
		cout << "Numero de armstrong\n";
	}
	else cout << "Nao eh numero de armstrong\n";
}








