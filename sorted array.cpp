#include<iostream>
using namespace std;
int main() {
    int arr[] = {22, 15, 6, 12, 10};
    int temp;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout<<"\nOriginal Array: ";
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    
    for (int k = 0; k < size; k++) {
        for (int j = k+1; j < size; j++) {
            if (arr[k] > arr[j]) {
                temp = arr[k];
                arr[k] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout<<"\nSorted Array: ";
    for (int k = 0; k < size; k++) {
        cout<<arr[k]<<" ";
    }
}
