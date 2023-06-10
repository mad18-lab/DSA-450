#include<iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout<<"\nOriginal Array: ";
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    
    int max = arr[0];
    
    for (int j = 0; j < size; j++) {
        if (max < arr[j]) {
            max = arr[j];
        }
    }
    
    int min = arr[0];
    
    for (int k = 0; k < size; k++) {
        if (min > arr[k]) {
            min = arr[k];
        }
    }
    
    cout<<"\nMaximum Element: "<<max;
    cout<<"\nMinimum Element: "<<min;
}
