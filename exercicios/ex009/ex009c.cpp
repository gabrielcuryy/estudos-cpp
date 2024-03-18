#include <iostream>
#include <string>
using namespace std;

int main() {
    string myString = "Hello";
    cout << myString[4] << "\n";
    myString[0] = 'J';
    cout << myString << "\n";
    return 0;
}
