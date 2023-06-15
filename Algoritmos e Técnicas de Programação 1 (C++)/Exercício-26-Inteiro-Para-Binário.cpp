/* Faça um programa que imprime um número inteiro na base binária.
O algoritmo sugerido consiste em fazer sucessivas divisões por 2, e observar os restos obtidos. O valor binário
consiste na sequência reversa dos restos assim obtidos. Para fazer a reversão, sugere-se registrar os restos em um
array, para percorrê-lo ao contrário no final.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    int valor = 0;
    cout<<"Digite o número que será convetido em binário: ";
    cin>>num;
    int n = num;
    while(n != 0){
        n = n/2;
        valor++;
    }
    int binario[valor-1];
    int i = 0;
    while(num != 0){
        binario[i] = num % 2;
        num = num/2;
        i++;
    }
    for(int i = valor-1; i >= 0; i--){
        cout << binario[i];
    }
    return 0;
}
