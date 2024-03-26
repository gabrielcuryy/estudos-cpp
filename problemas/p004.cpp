#include <iostream>
using namespace std;

int main() {
    // Pedir ao usuario dois numeros reais e a operacao desejada para efetuar a conta
    float numero1, numero2;
    char operacao;
    cout << "Digite o primeiro numero: \n";
    cin >> numero1;
    cout << "Digite o simbolo da operacao: \n";
    cin >> operacao;
    cout << "Digite o segundo numero: \n";
    cin >> numero2;
    // Avaliar cada caso com base na sua operacao
    switch (operacao) {
    case '+':
        cout << numero1 + numero2;
        break;
    case '-':
        cout << numero1 - numero2;
        break;
    case '*':
        cout << numero1 * numero2;
        break;
    case '/':
        cout << numero1 / numero2;
        break;
    default:
        cout << "Operador invalido! \n";
    }
    return 0;
}
