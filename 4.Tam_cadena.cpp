
#include <iostream>

using namespace std;

int tamCadenaR(string cadena,int i) {           //funcion recursiva
    if (cadena[i] == '\0')
        return 0;
    else 
        return (1 + tamCadenaR(cadena,++i));
}

int tamCadenaI(string cadena) {           //funcion iterativa
    int tam = 0;
    char i = cadena[tam];
    while (i != '\0')       
        i=cadena[++tam];             //recorre toda la cadena
    return tam;
}

int main()
{
    string cadena = "Hola mundo";

    cout << "metodo iterativo: " << tamCadenaI(cadena) << endl;

    cout << "metodo recursivo: " << tamCadenaR(cadena,0) << endl;

    return 0;
}
