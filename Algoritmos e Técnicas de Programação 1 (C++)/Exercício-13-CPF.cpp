// O Cadastro de Pessoas Físicas da Receita Federal do Brasil é composto de 2 partes: 9 dígitos que compõem o número propriamente e 2 dígitos de
// validação, no final. (Uma curiosidade: o nono dígito é determinado pelo estado ou região do País; em SP, vale 8).
// Passo 1: multiplicar o primeiro número por 10, o segundo por 9, o terceiro por 8, e assim sucessivamente até
// o nono número, que é multiplicado por 2. Os nove valores obtidos devem ser somados.
// Passo 2: Tomar a soma assim obtida e calcular o resto da sua divisão por 11. Se o resto da divisão assim obtido
// for menor que 2, então o primeiro dígito de validação do CPF é 0. Se o resto da divisão por maior ou igual a 2, o
// primeiro dígito de validação do CPF é obtido da subtração de 11 pelo resto.
// Passo 3: Repetir o passo 1, mas, desta vez, com 10 números: os 9 dígitos e o primeiro dígito de validação. Os
// fatores começam de 11 até 2.
// Passo 4: Repetir o passo 2 com a soma obtida no passo 3.
// Faça um algoritmo que recebe os 11 dígitos do CPF, um de cada vez, sem mensagens, e imprima:
//- A soma obtida no Passo 1 acima;
//- O primeiro dígito de validação;
//- A soma obtida no Passo 3 acima;
//- O segundo dígito de validação;
//- O caractere `'S'` se o CPF é válido, `'N'`, caso contrário.

#include <iostream>
using namespace std;
	// função de validação
	int validacao (int valor) {
		int digito;
		if (valor % 11 < 2) {
			digito = 0;
		}
		else if (valor % 11 >= 2) {
			digito = 11 - (valor % 11);
		}
		return digito;
	}	
	
int main() {
	int cpf;
	int i = 0;
	int j = 10;
	int x = 11;
	int soma = 0;
	int soma3 = 0;
	int pridigito, segdigito;
	while (i < 11) {
		cout << "Digite o CPF (somente números): " << endl;
		cin >> cpf;
		if (j >= 2) {
			soma = soma + (cpf * j);
			cout << soma << endl;
			soma3 = soma3 + (cpf * x);
			cout << soma3 << endl;
		}
		if (i == 9) {
			pridigito = cpf;
		}
		if (i == 10) {
			segdigito = cpf;
		}
		i++;
		j--;
		x--;
		}
	soma3 = soma3 + validacao(soma) * 2;
	cout << "A soma do passo 1 eh: " << soma << endl;
	cout << "O primeiro dígito de validação eh: " << validacao(soma) << endl;
	cout << "A soma do passo 3 eh: " << soma3 << endl;
	cout << "O segundo dígito de validação eh: " << validacao(soma3) << endl;
	if (pridigito == validacao(soma) && segdigito == validacao(soma3)) {
		cout << "O CPF é válido!\n";
	}
	else {
		cout << "O CPF não é válido!\n";
	}
}












