// Escreva um breve algoritmo que imprime todos os n�meros de 1 a 100, um por linha.
// Para todos os m�ltiplos de 3, imprima "Fizz" no lugar do n�mero.
// Para todos os m�ltiplos de 5, imprima "Buzz" no lugar do n�mero.
// Para os n�meros que s�o m�ltiplos, ao mesmo tempo, de 3 e 5, imprima "FizzBuzz" no lugar do n�mero.

#include <iostream>
using namespace std;

int main() {
	int i = 1;
	while (i <= 100) {
		if (i % 3 == 0 && i % 5 == 0) {
			cout << "FizzBuzz" << endl;
		}
		else if (i % 3 == 0) {
			cout << "Fizz" << endl;
		}
		else if (i % 5 == 0) {
			cout << "Buzz" << endl;;
		}
		else {
			cout << i << endl;
		}
		i++;
	}
	
}
