// Euclides foi o autor da obra "Elementos", um marco histórico no emprego do método dedutivo à geometria, e
// que, assim, passou a ser um modelo para toda a Matemática que viria a ser feita por séculos.
// É atribuído a Euclides um algoritmo para o cálculo do Máximo Divisor Comum. O algoritmo consiste em
// realizar a divisão inteira entre os números dados. Caso o resto seja diferente de
// zero, isto é, o dividendo não seja múltiplo do divisor, repete-se o processo, mas, dessa vez,
// usando como dividendo o que foi anteriormente o divisor, e usando como divisor o que foi anteriormente o resto.
// Quando o resto finalmente valer 0, o divisor é o M.D.C. Implemente-o.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1, num2;
    int i = 0;
    int resto = 0;
    int valor = 0;
    cout << "Digite o primeiro número: " << endl;
    cin >> num1;
    cout << "Digite o segundo número: " << endl;
    cin >> num2;
    if (num1 <= 0 || num2 <= 0) {
        return 0;
    }
    while (i != 1) {
        if (num1 % num2 == 0){
            valor = num2;
            i = 1;
        }
        resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    }
    cout << "O MMC eh: " << valor << endl;
}
