//Algoritmo da divisão. Dados dois números inteiros	positivos(o primeiro é o dividendo e o segundo,	o divisor),	
//subtraia o divisor do dividendo e repita a operação enquanto o resultado não for menor que o divisor.
//A	quantidade de repetições é o quociente,	e o	último valor obtido	na sucessão	de subtrações é	o resto.
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
