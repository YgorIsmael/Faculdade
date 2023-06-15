/*Considere o trecho de programa abaixo:

1 #include <iostream>
2 using namespace std;
3 int main(){
4 int n;
5 cout << "Informe o número de linhas: ";
6 cin >> n;
7 int x;
8 float y;
9 char z;
10 cout << "\nInforme 3 valores (um inteiro, um real e um caracter): ";
11 cin >> x >> y >> z;
12 if (z >= 'a' && z <= 'z')
13 z -= 32;
14 for (int i=0; i<n; i++) {
15 cout << x << " " << y << " " << z << "\n";
16 x += 32;
17 y *= 2;
18 z++;
19 }
20 }

Modifique as linhas 5, 6, 10, 11 e 15, trocando o sistema de entrada e saída do C++ (cin,
cout) pelo sistema do C (printf, scanf). Ao mesmo tempo, utilize os recursos do C para
formatar a saída de modo tabulado (alinhamento de colunas) para obter a saída abaixo:

Informe o número de linhas: 4
Informe 3 valores (um inteiro, um real e um caracter): 67 13.834955 g
68 13.83 G
100 27.67 H
132 55.34 I
164 110.68 J*/

#include <iostream>
using namespace std;
int main(){
    int n;
    printf("Informe o número de linhas:\n");
    scanf("%d", &n);
    int x;
    float y;
    char z;
    printf("Informe 3 valores, um inteiro, um real e um caracter:\n");
    scanf("%d\n%f\n%c", &x, &y, &z);
    if (z >= 'a' && z <= 'z')
        z -= 32;
    for (int i=0; i<n; i++) {
        printf("%3d\t%3.2f\t%c\n", x, y, z);
        x += 32;
        y *= 2;
        z++;
    }
}