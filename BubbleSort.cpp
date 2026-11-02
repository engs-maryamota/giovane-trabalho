#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 1, 3}; 
    int n = 4;               


    for (int i = 0; i < n - 1; i++) {
        
        for (int j = 0; j < n - i - 1; j++) {
           
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
              
                arr[j] = arr[j + 1];
               
                arr[j + 1] = temp;
            }
        }
    }
    return 0; 
}