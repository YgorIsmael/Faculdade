// Faça um algoritmo que gera exatamente a sequência
// mostrada no exemplo abaixo. Use uma estrutura de repetição (laço). Deduza a lei de formação da sequência.
//Exemplo: 0 1 100.0 15 2 31 50.0 10 4 61 25.0 5 6 91 12.5 0 8 121 6.25 -5

#include <iostream>
using namespace std;

int main(){
	int n1 = 2;
	int n2 = 15;
	int n3 = 31;
	int seq;
	int i = 0;
	float n4 = 100;
	cout << "Quantos números a sequência deve ter? " << endl;
	cin >> seq;
	cout << 0 << endl << 1 << endl;
	while (i < seq/4){
		cout << n4 << endl;
		cout << n2 << endl;
		cout << n1 << endl;
		cout << n3 << endl;
		n1 = n1 + 2;
		n2 = n2 -5;
		n3 = n3 + 30;
		n4 = n4/2;
		i++;
	}
}




