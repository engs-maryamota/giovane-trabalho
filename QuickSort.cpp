#include <iostream>
using namespace std;

int particionar(int arr[], int inicio, int fim, int &comps, int &trocas) {
    int pivo = arr[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        comps++;
        if (arr[j] < pivo) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            trocas++;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[fim];
    arr[fim] = temp;
    trocas++;

    return i + 1;
}

void quickSort(int arr[], int inicio, int fim, int &comps, int &trocas) {
    if (inicio < fim) {
        int p = particionar(arr, inicio, fim, comps, trocas);
        quickSort(arr, inicio, p - 1, comps, trocas);
        quickSort(arr, p + 1, fim, comps, trocas);
    }
}

int main() {
    int arr[] = {4, 2, 1, 3};
    int comps = 0, trocas = 0;
    quickSort(arr, 0, 3, comps, trocas);
    return 0;
}