
#include <iostream>

using namespace std;

void concatenarCadenas(string a, string& b) {
    b = a + b;
}

int main()
{
    string a = "hola ";
    string b = "mundo";

    cout << b << endl;

    concatenarCadenas(a, b);

    cout << b << endl;
}
