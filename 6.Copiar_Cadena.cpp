
#include <iostream>

using namespace std;

void copiarCadena(string a, string& b) {
    b = a;
}

int main()
{
    string a = "hola";
    string b = "mundo";

    cout << a << " " << b << endl;

    copiarCadena(a, b);

    cout << a << " " << b << endl;
}
