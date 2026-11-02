#include <iostream>
using namespace std;


void intercalar(int arr[], int inicio, int meio, int fim, int &comps, int &trocas) {
    int n1 = meio - inicio + 1; 
    int n2 = fim - meio;       

    int L[10], R[10];

    
    for (int i = 0; i < n1; i++) L[i] = arr[inicio + i];
    
    for (int j = 0; j < n2; j++) R[j] = arr[meio + 1 + j];

    int i = 0, j = 0, k = inicio; 

    
    while (i < n1 && j < n2) {
        comps++; 
        if (L[i] <= R[j]) {
            arr[k] = L[i]; 
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        trocas++; 
        k++;
    }

   
    while (i < n1) {
        arr[k] = L[i];
        i++; k++; trocas++;
    }
   
    while (j < n2) {
        arr[k] = R[j];
        j++; k++; trocas++;
    }
}


void mergeSort(int arr[], int inicio, int fim, int &comps, int &trocas) {
    if (inicio < fim) { 
        int meio = inicio + (fim - inicio) / 2; 
        mergeSort(arr, inicio, meio, comps, trocas); 
        mergeSort(arr, meio + 1, fim, comps, trocas); 
        intercalar(arr, inicio, meio, fim, comps, trocas); 
    }
}

int main() {
    int arr[] = {4, 2, 1, 3};
    int comps = 0, trocas = 0;
    mergeSort(arr, 0, 3, comps, trocas);
    return 0;
}