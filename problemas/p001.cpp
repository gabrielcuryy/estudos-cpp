#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um n�mero inteiro: \n";
    cin >> num;
    if (num % 2 == 0) {
        cout << "Esse n�mero � par \n";
    } else {
        cout << "Esse n�mero � impar \n";
    }
    return 0;
}
