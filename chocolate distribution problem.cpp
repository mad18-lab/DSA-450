#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cout<<"\nEnter size of array: ";
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
    
    sort(arr, arr + n);
    
    int min = 5;
    int diff;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            diff = arr[j] - arr[i];
            if (diff < min) {
                min = diff;
            }
        }
    }
    
    cout<<"\nMinimum difference: "<<min;
}
