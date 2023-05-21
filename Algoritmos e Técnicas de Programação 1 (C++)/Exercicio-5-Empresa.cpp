// Faça um programa em C++ que receba as informações de 5 funcionários:
// A) tempo de empresa, B) Cargo (V-Vendedor, C-Chefe, E-Estoque), C) Salário
// Pede-se:
// A) Mostrar a remuneração ( Vendedor -> +0.5% por ano), ( Chefe -> +2000 por ano), ( Estoque -> +10% por quinquênio)
// B) Maior tempo de empresa
// C) Média da remuneração dos vendedores
// D) Remuneração do funcionário de estoque há menos tempo na empresa
// E) Verificar se todos os chefes tem mais de 10 anos na empresa

#include <iostream>
using namespace std;
int main(){
	int tempo, i, y, maiortempo, menortempo;
	char cargo;
	bool flag;
	float salario, media, remuneracao, menorremuneracao;
	flag = true;
	i = 1;
	y = 0;
	media = 0;
	maiortempo = 0;
	menortempo = 10000;
	while (i <= 5) {
	cout << "Insira os seguintes dados respectivamente:\nTempo na empresa\nCargo (V-vendedor, C-chefe, E-estoque)\nSalario\n";
	cin >> tempo >> cargo >> salario;
		if (tempo >= maiortempo) {
			maiortempo = tempo;
		}
		if (cargo == 'V' || cargo == 'v'){
			remuneracao = salario + ((0.005 * salario) * tempo);
			cout << "Remuneracao:\n" << remuneracao << "\n";
			media = media + remuneracao;
			y++;
		}
		else if (cargo == 'C' || cargo == 'c'){
			remuneracao = salario + (2000 * tempo);
			cout << "Remuneracao:\n" << remuneracao << "\n";
			if (tempo < 10) {
				flag = false;
			}
		}
		else if (cargo == 'E' || cargo == 'e') {
			if (tempo >= 5) {
				tempo = tempo / 5;
				remuneracao = salario + (0.1 * salario * tempo);
				cout << "Remuneracao:\n" << remuneracao << "\n";
			}
			else {
				cout << "Remuneracao:\n" << remuneracao << "\n";
			}
			
			if (tempo <= menortempo) {
			menortempo = tempo;
			menorremuneracao = remuneracao;
			}
		}
		else {
			cout << "Letra invalida!\n";
		}
		i++;
}	
    cout << "Maior tempo na empresa:\n" << maiortempo << "\n";
    cout << "Média de remuneração dos vendedores:\n" << media / y << "\n";
    cout << "Menor remuneracao de um funcionario de estoque:\n" << menorremuneracao << "\n";
    
    if (flag == false){
    	cout << "Nao sao todos os chefes com mais de 10 anos na empresa.\n";
	}
	else {
		cout << "Todos os chefes tem mais de 10 anos na empresa.\n";
	}
}
