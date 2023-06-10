#include<iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout<<"\nOriginal Array: ";
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    
    cout<<"\nReversed Array: ";
    for (int j = size-1; j >= 0; j--) {
        cout<<arr[j]<<" ";
    }
}
