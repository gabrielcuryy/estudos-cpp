#include <iostream>
using namespace std;

int main() {
    int Cv, Ce, Cs, Fv, Fe, Fs;
    cout << "Digite o numero de vitorias do time C: \n";
    cin >> Cv;
    cout << "Digite o numero de empates do time C: \n";
    cin >> Ce;
    cout << "Digite o saldo de gols do time C: \n";
    cin >> Cs;
    cout << "Digite o numero de vitorias do time F: \n";
    cin >> Fv;
    cout << "Digite o numero de empates do time F: \n";
    cin >> Fe;
    cout << "Digite o saldo de gols do time F: \n";
    cin >> Fs;
    int PC = (Cv * 3) + (Ce * 1);
    int PF = (Fv * 3) + (Fe * 1);
    if (PC > PF) {
        cout << "C";
    } else if (PC < PF) {
        cout << "F";
    } else if (PC == PF) {
        if (Cs > Fs) {
            cout << "C";
        } else if (Cs < Fs) {
            cout << "F";
        } else {
            cout << "=";
        }
    }
    return 0;
}
