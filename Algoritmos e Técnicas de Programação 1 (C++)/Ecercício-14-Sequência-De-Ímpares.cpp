//Fa�a um algoritmos que recebe dois n�meros e gera a sequ�ncia crescente de n�meros �mpares entre eles.
// O segundo n�mero deve ser sempre maior que o primeiro.
#include <iostream>
using namespace std;

int main(){
	int num1, num2;
	cout << "Digite o primeiro n�mero: " << endl;
	cin >> num1;
	cout << "Digite o segundo n�mero: " << endl;
	cin >> num2;
	if (num1 % 2 == 0) {
		num1++;
	}
	while (num1 <= num2){
		cout << num1 << endl;
		num1 = num1 + 2;
	}
}
