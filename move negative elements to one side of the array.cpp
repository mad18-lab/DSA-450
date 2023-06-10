#include<iostream>
using namespace std;
int main() {
    int arr[] = {10, -1, -2, -3, 10};
    int size = sizeof(arr) / sizeof (arr[0]);
    
    cout<<"\nOriginal Array: ";
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    
    int k = 0;
    for (int j = 0; j < size; j++) {
        if (arr[j] < 0) {
            if (j != k) {
                swap(arr[j], arr[k]);
                k++;
            }
        }
    }
    
    cout<<"\nRearranged Array: ";
    for (int a = 0; a < size; a++) {
        cout<<arr[a]<<" ";
    }
}
