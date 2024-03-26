#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um número inteiro: \n";
    cin >> num;
    if (num % 2 == 0) {
        cout << "Esse número é par \n";
    } else {
        cout << "Esse número é impar \n";
    }
    return 0;
}
