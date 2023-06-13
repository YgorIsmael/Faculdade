//Faça um algoritmos que recebe dois números e gera a sequência crescente de números ímpares entre eles.
// O segundo número deve ser sempre maior que o primeiro.
#include <iostream>
using namespace std;

int main(){
	int num1, num2;
	cout << "Digite o primeiro número: " << endl;
	cin >> num1;
	cout << "Digite o segundo número: " << endl;
	cin >> num2;
	if (num1 % 2 == 0) {
		num1++;
	}
	while (num1 <= num2){
		cout << num1 << endl;
		num1 = num1 + 2;
	}
}
