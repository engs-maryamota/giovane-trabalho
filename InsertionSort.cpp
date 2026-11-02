#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 1, 3};
    int n = 4;              

    
    for (int i = 1; i < n; i++) {
        int chave = arr[i];
        int j = i - 1;     

      
        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j = j - 1;           
        }
        arr[j + 1] = chave; 
    }
    return 0; 

}