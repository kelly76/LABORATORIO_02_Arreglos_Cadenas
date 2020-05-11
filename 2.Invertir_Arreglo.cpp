
#include <iostream>

using namespace std;

void mostrarArr(int arr[], int tam) {
    for (int i = 0; i < tam; i++)
        cout <<" "<<arr[i];
    cout << endl;
}

void intercambiar(int& a, int& b) {                 
    int aux;
    aux = a;
    a = b;
    b = aux;
}

void invertirArrI(int arr[], int tam) {               //funcion iterativa
    tam--;
    for (int i = 0; i < tam/2; i++) 
        intercambiar(arr[i], arr[tam - i]);
}

void invertirArrR(int arr[], int tam) {               //funcion recursiva
    if (tam ==1) {}
    else{
        for (int i = 0; i < tam-1; i++)
            intercambiar(arr[i], arr[i+1]);
        invertirArrR(arr, --tam);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int tam = 5;

    mostrarArr(arr, tam);                //muestra el arreglo original
    
    invertirArrI(arr, tam);              //invertimos el arreglo, su resultado seria {5,4,3,2,1}
    cout << "Metoddo iterativo: ";
    mostrarArr(arr, tam);

    invertirArrR(arr, tam);              //invertimos una vez mas, el resultado seria {1,2,3,4,5}
    cout << "Metodo recursivo: ";
    mostrarArr(arr, tam);

    return 0;
}
