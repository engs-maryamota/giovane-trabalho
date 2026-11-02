#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 1, 3}; 
    int n = 4;                

    
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i; 

        for (int j = i + 1; j < n; j++) {
           
            if (arr[j] < arr[minIdx]) {
                minIdx = j; 
            }
        }

      
        if (minIdx != i) {
            int temp = arr[i];      
            arr[i] = arr[minIdx];   
            arr[minIdx] = temp;    
        }
    }
    return 0; 
}