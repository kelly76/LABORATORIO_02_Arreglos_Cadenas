
#include <iostream>

using namespace std;

int sumEnterosI(int arr[], int tam) {              //funcion iterativa
    int sum = 0;
    for (int i = 0; i < tam; i++)
        sum += arr[i];
    return sum;
}

int sumEnterosR(int arr[], int tam) {              //funcion recursiva
    if (tam == 1)
        return arr[--tam];
    else
        return arr[--tam]+sumEnterosR(arr, tam);
}

int main()
{
    int arr[] = { 1,2,3,4 };
    int tam = 4;

    cout << "Metodo iterativo: " << sumEnterosI(arr, tam) << endl;
    cout << "Metodo recursivo: " << sumEnterosR(arr, tam) << endl;

    return 0;
}

