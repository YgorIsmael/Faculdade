// O Cadastro de Pessoas F�sicas da Receita Federal do Brasil � composto de 2 partes: 9 d�gitos que comp�em o n�mero propriamente e 2 d�gitos de
// valida��o, no final. (Uma curiosidade: o nono d�gito � determinado pelo estado ou regi�o do Pa�s; em SP, vale 8).
// Passo 1: multiplicar o primeiro n�mero por 10, o segundo por 9, o terceiro por 8, e assim sucessivamente at�
// o nono n�mero, que � multiplicado por 2. Os nove valores obtidos devem ser somados.
// Passo 2: Tomar a soma assim obtida e calcular o resto da sua divis�o por 11. Se o resto da divis�o assim obtido
// for menor que 2, ent�o o primeiro d�gito de valida��o do CPF � 0. Se o resto da divis�o por maior ou igual a 2, o
// primeiro d�gito de valida��o do CPF � obtido da subtra��o de 11 pelo resto.
// Passo 3: Repetir o passo 1, mas, desta vez, com 10 n�meros: os 9 d�gitos e o primeiro d�gito de valida��o. Os
// fatores come�am de 11 at� 2.
// Passo 4: Repetir o passo 2 com a soma obtida no passo 3.
// Fa�a um algoritmo que recebe os 11 d�gitos do CPF, um de cada vez, sem mensagens, e imprima:
//- A soma obtida no Passo 1 acima;
//- O primeiro d�gito de valida��o;
//- A soma obtida no Passo 3 acima;
//- O segundo d�gito de valida��o;
//- O caractere `'S'` se o CPF � v�lido, `'N'`, caso contr�rio.

#include <iostream>
using namespace std;
	// fun��o de valida��o
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
		cout << "Digite o CPF (somente n�meros): " << endl;
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
	cout << "O primeiro d�gito de valida��o eh: " << validacao(soma) << endl;
	cout << "A soma do passo 3 eh: " << soma3 << endl;
	cout << "O segundo d�gito de valida��o eh: " << validacao(soma3) << endl;
	if (pridigito == validacao(soma) && segdigito == validacao(soma3)) {
		cout << "O CPF � v�lido!\n";
	}
	else {
		cout << "O CPF n�o � v�lido!\n";
	}
}












