//Ler uma matrix 2x3 e:
//-Imprimir a soma da 2� coluna, Imprimir quantos pares na 2� linha, imprimir se na regi�o entre as linhas 1 e 2 e as colunas 1 e 2 todos s�o valores positivos
//-Gerar um array com os elementos da 1� coluna
#include <iostream>
using namespace std;
int main() {
	int i = 0;
	int j = 0;
	bool flag = false;
	int a[2][3];
	int b[2];
	 while (i<2) {
	  while (j<3){
	  	cout << "Digite o valor do " << j+1 << "� n�mero da " << i+1 << "� linha\n";
	 	cin >> a[i][j];
	 	j++;
	  }
	  j = 0;
	  i++;
	 }
	 i = 0;
	 cout << "Soma da segunda coluna: " << a[0][1] + a[1][1] << endl;
	 while (i<2){
	 	while (j<2){
	 		if (a[i][j] <= 0) {
	 			flag = true;
			}
			j++;
		}
		j = 0;
		i++;
	 }	 
	 if (flag) {
	 	cout << "Na regi�o entre as linhas 1 e 2 e as colunas 1 e 2 nem todos os valores s�o positivos.\n";
	 }
	 b[0] = a[0][0];
	 b[1] = a[1][0];
	 cout << "Primeiro numero da primeira coluna: " << b[0] << " Segundo numero da primeira coluna: " << b[1] << endl;
}
