//Algoritmo da divis�o. Dados dois n�meros inteiros	positivos(o primeiro � o dividendo e o segundo,	o divisor),	
//subtraia o divisor do dividendo e repita a opera��o enquanto o resultado n�o for menor que o divisor.
//A	quantidade de repeti��es � o quociente,	e o	�ltimo valor obtido	na sucess�o	de subtra��es �	o resto.
#include <iostream> 
using namespace std;
int main() {
    int n1, n2;
    int operacao = 0;
    cout << "digite o dividendo\n";
    cin >> n1;
    cout << "digite o divisor\n";
    cin >> n2;
    while (n1 >= n2) {
        n1 = n1 - n2;
        operacao++;
    }
    cout << "quociente:\n" << operacao << endl;
    cout << "resto:\n" << n1 << endl;
}
