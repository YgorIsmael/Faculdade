// Faça um programa que retorne os N primeiros números da sequência 1/3, 1/9, 1/27, ..., em decimais.
#include <iostream>
using namespace std;
int main() {
	int i, val;
	float n1, n2;
	i = 1;
    val = 10;
    n1 = 1;
	while (i <= val) {
		n2 = 1/(3*n1);
		n1 = 3*n1;
		cout << n2 << "\n";
		i++;
	}
}
