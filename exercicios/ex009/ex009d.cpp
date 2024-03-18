#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomeCompleto;
    cout << "Digite o seu nome Completo: " << endl;
    getline(cin, nomeCompleto);
    cout << "O seu nome completo e: " << nomeCompleto << endl;
    return 0;
}
