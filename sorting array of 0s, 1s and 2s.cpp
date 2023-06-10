#include<iostream>
using namespace std;
int main() {
    int arr[10];
    int size, temp;
    
    cout<<"\nEnter size of array: ";
    cin>>size;
    
    cout<<"\nEnter elements of array: ";
    for (int a = 0; a < size; a++) {
        cin>>arr[a];
    }
    
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
    
    for (int b = 0; b < size; b++) {
        cout<<arr[b]<<" ";
    }
}
