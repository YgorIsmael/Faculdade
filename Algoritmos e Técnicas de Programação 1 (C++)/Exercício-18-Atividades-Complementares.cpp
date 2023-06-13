// A Secretaria Geral processa as Atividades Complementares (AC) dos alunos com um programa que recebe as seguintes informações de cada aluno:
// i) Os 3 algarismos finais do RA (como ID)
// ii) O total de carga horária do aluno em atividades de extensão
// iii) O total de carga horária em atividades de pesquisa
// Pede-se:
// a) Imprimir os RA dos alunos que já completaram 180
// horas de AC;
// b) Calcular a média de AC em extensão;
// c) A quantidade de alunos que não fizeram atividades de
// extensão.
#include <iostream>
#include <string>
using namespace std;
int main() {
    int qtde;
    int i = 0;
    int valor = 0;
    float media;
    int RA, ext, pesq;
    cout << "Informe quantos itens pretende informar: " << endl;
    cin >> qtde;
    string alunos[qtde];
    while(i < qtde){
        cout << "Informe os dados do aluno " << i+1 << ": " << endl;
        cout << "RA: " << endl;
        cin >> RA;
        cout << "Informe a carga horária de extensão: " << endl;
        cin >> ext;
        cout << "Informe a carga horária de pesquisa: " << endl;
        cin >> pesq;
        if (ext + pesq >= 180){
            alunos[i] = to_string(RA);
        }
        if (ext == 0) {
            valor++;
        }
        media = media + ext;
        i++;
    }
    i = 0;
    cout << "Os alunos que já completaram 180 horas de AC são: " << endl;
    while (i < qtde){
        cout << alunos[i] << endl;
        i++;
    }
    cout << "A média de AC em extensão é: " << media/qtde << endl;
    cout << "A quantidade de alunos que não fizeram atividade de extensão é: " << valor << endl;

}