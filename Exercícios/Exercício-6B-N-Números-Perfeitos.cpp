// Crie um programa que informe os N primeiros n�meros perfeitos.
// N�meros perfeitos s�o os n�meros em que a soma de todos os seus divisores inteiros positivos com exce��o de si mesmo � igual a ele.
// Por exemplo: o n�mero 6 � perfeito j� que 6 = 3+2+1.
#include <iostream>
using namespace std;

bool divisor (int m, int n) {
	return (n%m == 0) ? true : false;
}
bool perfeito (int n){
	int i = n - 1;
	int soma = 0;
	while (i >= 1) {
		if (divisor(i, n) == true) {
			soma = soma + i;
		}
		i--;
	}
	return soma == n ? true : false;
}

int main(){
	int n1;
	cout << "Informe o valor:\n";
	cin >> n1;
	int i = 1;
	while (i <= n1) {
		if (perfeito(i) == true) {
			cout << i << "\n";
		}
		i++;
	}
}
