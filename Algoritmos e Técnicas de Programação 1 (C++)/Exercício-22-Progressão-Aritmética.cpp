/*Crie um aplicativo em C++ que peça um número inicial ao usuário, uma razão e calcule os termos de uma P.A (Progressão Aritmética),
armazenando esses valores em um vetor de tamanho 10.*/

#include <iostream>
using namespace std;

int main()
{
    float inicial;
    float razao;
    float vetor[10];
    printf("Digite o número inicial:\n");
    scanf("%f", &inicial);
    printf("Digite a razão:\n");
    scanf("%f", &razao);
    vetor[0] = inicial;
    for(int i = 1; i < 10; i++){
        vetor[i] = inicial + razao;
        inicial = inicial + razao;
    }
    for(int i = 0; i<10; i++){
        printf("%f\n", vetor[i]);
    }
    return 0;
}