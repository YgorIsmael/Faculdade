//N�mero de Armstrong � um n�mero de n d�gitos que � igual a soma de cada um dos seus d�gitos elevado a n-�sima pot�ncia.
//Por exemplo, 153 (n = tr�s d�gitos) � igual a 13 + 53 + 33 = 1 + 125 + 27 = 153.
//Crie um algoritmo que determine os N primeiros n�meros de armstrong.

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
	cout << "Escreva um valor at� 999 para quantos numeros o algoritmo ira rodar\n";
	cin >> valor;
	int i = 0;
	while (i<valor){
		if(armstrong(i) == true){
			cout << i << endl;
		}
		i++;
	}
}








