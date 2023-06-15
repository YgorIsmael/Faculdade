/*1- Crie um programa em C++ que peça 10 números, armazene eles em um vetor.
2- Crie um programa em C++ que peça 10 números, armazene eles em um vetor e diga qual elemento é o maior, e seu valor.
3- Faca um programa que leia um vetor de 10 posicoes e verifique se existem valores iguaise os escreva na tela.
4- Faça um programa que preencha um vetor com 10 numeros reais, calcule e mostre a 
quantidade de numeros negativos e a soma dos numeros positivos desse vetor. */

#include <iostream>
using namespace std;

int main()
{
    int valorneg = 0;
    int maiornum = 0;
    int vetor[10];
    //preenche o vetor e determina maior num.
    for(int i = 0; i < 10; i++) {
        cout<<"Digite o valor: " << endl;
        cin >> vetor[i];
        if(vetor[i] >= maiornum){
            maiornum = vetor[i];
        }
        if(vetor[i]<0){
            valorneg++;
        }
        
    }
    int iguais[10];
    int j = 0;
    //cria um vetor com os valores que aparecem mais de 1x
    for(int i = 0; i < 10; i++){
        while(j < 10){
            if(i != j) {
               if(vetor[i] == vetor[j]){
                   iguais[i] = vetor[i];
                }
            }
            j++;
        }
        j = 0;
    }
    cout<<"O maior número é: " << maiornum << endl;
    cout<<"Os valores iguais são: " << endl;
    //imprime os valores iguais
    while(j<10){
        if (iguais[j]!=0){
            cout<<iguais[j]<<endl;
        }
        j++;
    }
    cout<<"Quantidade de negativos: "<<valorneg<<endl;
    return 0;
}