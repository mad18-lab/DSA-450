#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"\nEnter array size: ";
    cin>>n;
    
    int arr[n];
    cout<<"\nEnter array elements: ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    cout<<"\nArray: ";
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    
    int temp = arr[n - 1];
    for (int i = n-1; i >= 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    
    cout<<"\nCyclically Rotated Array: ";
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
