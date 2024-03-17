#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    x = y = z = 100;
    cout << x + y + z << endl;

    const int a = 2;
    int raio = 5;
    const double PI = 3.14;
    cout << a * PI * raio << endl;
    return 0;
}
