// Deodato é proprietário de um restaurante e tem três fornecedores em sua cidade: a "Horta Mágica", o
// "Momento de Colheita" e a "Natureza Ecológica". Ele resolveu comparar as compras semanais de três produtos:
// Abobrinha, Brócolis e Cenoura. Todos os fornecedores oferecem produtos orgânicos e não orgânicos (chamados aqui de "usuais").
// Faça um algoritmo em que Deodato poderá digitar a quantidade em gramas do produto, o preço por quilo,
// além das demais características. Após a inserção dos dados, o programa deve informar:
// a) O peso total de todos os produtos adquiridos;
// b) O preço do produto mais caro (maior preço por kg).(Em caso de empate, apenas um dos empatados deve ser mostrado, e pode ser qualquer um deles);
// c) A quantidade total de produtos orgânicos adquiridos;
// d) A média do preço por quilo da cenoura não orgânica;
// e) O produto usual de menor preço;
// f) O total gasto na "Horta Mágica".

#include <iostream>
using namespace std;
int main() {
    int i = 1;
    int valororg = 0;
    int valor = 0;
    float totalgasto = 0;
    float menorpreco = 0;
    float soma = 0;
    float peso, preco;
    float pesototal = 0;
    float precocaro = 0;
    char fornecedor, tipo, produto;
    while (i <= 3) {
        cout << "Informe o Item" << i << endl << "informe o fornecedor: [H para Horta Magica, M para Momento da Colheira, N para Natureza ecológica]: " << endl;
        cin >> fornecedor;
        cout << "Informe se é orgânico: [O para organico, U para usual]: " << endl;
        cin >> tipo;
        cout << "Informe o produto [A para abobrinha, B para brocolis, C para Cenoura]: " << endl;
        cin >> produto;
        cout << "Informe a quantidade adquirida (em gramas): " << endl;
        cin >> peso;
        cout << "Informe o preço por quilo: " << endl;
        cin >> preco;
        pesototal = pesototal + peso;
        if (preco >= precocaro) {
            precocaro = preco;
        }
        if (tipo == 'O') {
            valororg++;
        }
        if (tipo == 'U' && produto == 'C') {
            valor++;
            soma = soma + preco;
        }
        if (tipo == 'U' && preco <= menorpreco) {
            menorpreco = preco;
        }
        if (tipo == 'H') {
            totalgasto = totalgasto + peso * preco;
        }
        i++;
    }
    cout << "O peso total é: " << pesototal << endl;
    cout << "O preço mais caro é: " << precocaro << endl;
    cout << "A quantidade total de produtos orgânicos é: " << valororg << endl;
    cout << "A média do preço da cenoura não orgânica é: " << soma/valor << endl;
    cout << "O menor preço de produto usual é: " << menorpreco << endl;  

}