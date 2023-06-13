// Euclides foi o autor da obra "Elementos", um marco hist�rico no emprego do m�todo dedutivo � geometria, e
// que, assim, passou a ser um modelo para toda a Matem�tica que viria a ser feita por s�culos.
// � atribu�do a Euclides um algoritmo para o c�lculo do M�ximo Divisor Comum. O algoritmo consiste em
// realizar a divis�o inteira entre os n�meros dados. Caso o resto seja diferente de
// zero, isto �, o dividendo n�o seja m�ltiplo do divisor, repete-se o processo, mas, dessa vez,
// usando como dividendo o que foi anteriormente o divisor, e usando como divisor o que foi anteriormente o resto.
// Quando o resto finalmente valer 0, o divisor � o M.D.C. Implemente-o.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1, num2;
    int i = 0;
    int resto = 0;
    int valor = 0;
    cout << "Digite o primeiro n�mero: " << endl;
    cin >> num1;
    cout << "Digite o segundo n�mero: " << endl;
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
