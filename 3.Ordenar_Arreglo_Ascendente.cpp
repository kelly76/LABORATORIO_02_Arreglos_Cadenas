
#include <iostream>

using namespace std;

void mostrarArr(int arr[], int tam) {
    for (int i = 0; i < tam; i++)
        cout << " " << arr[i];
    cout << endl;
}

void intercambiar(int& a, int& b){
    int aux = a;
    a = b;
    b = aux;
}

void ordenarAscendente(int arr[], int tam) {
    for (int i = 0; i < tam - 1; i++)
        for (int j = i + 1; j < tam; j++)
            if (arr[i] > arr[j])
                intercambiar(arr[i], arr[j]);

}

int main()
{
    int arr[] = { 1,5,3,8,0 };
    int tam = 5;

    mostrarArr(arr, tam);

    ordenarAscendente(arr, tam);

    mostrarArr(arr, tam);

    return 0;

}
