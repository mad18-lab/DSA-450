#include<iostream>
using namespace std;
int main() {
    int arr[10];
    int size, count = 0, num;
    
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
    
    cout<<"\nEnter element you want to count occurrences of: ";
    cin>>num;
    
    for (int k = 0; k < size; k++) {
        if (arr[k] == num) {
            count = count + 1;
        }
    }
    
    cout<<"\nOccurrences of element: "<<count;
}
