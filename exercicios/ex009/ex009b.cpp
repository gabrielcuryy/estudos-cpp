#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome = "Gabriel ";
    string sobrenome = "Cury";
    string nomeCompleto = nome + sobrenome;
    cout << nomeCompleto << "\n";
    string comprimento = "ABCDEFG";
    cout << "O comprimento da string é: " << comprimento.size() << "\n";
    return 0;
}
