// Faça um programa que retorne a soma dos N primeiros da sequência 1/3, 1/9, 1/27, ...


#include <iostream>
using namespace std;
int main(){
	int i, val;
	float n1, n2, soma;
	i = 1;
    val = 10;
    n1 = 1;
    soma = 0;
	while (i <= val) {
		n2 = 1/(3*n1);
		n1 = 3*n1;
		cout << n2 << "\n";
		soma = soma + n2;
		i++;
		cout << soma;
	}

}
