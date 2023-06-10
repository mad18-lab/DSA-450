#include<iostream>
using namespace std;
int main() {
    int arr[] = {12, 13, 5, 7, 8, 9, 10, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 25, current_sum = 0;
    
    cout<<"\nOriginal Array: ";
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    
    for (int k = 0; k < size; k++) {
        current_sum = arr[k];
        for (int j = k+1; j < size; j++) {
            current_sum = current_sum + arr[j];
            if (current_sum == sum) {
                cout<<"\nSum found at indexes "<<k<<" through "<<j;
            }
        }
    }
}
