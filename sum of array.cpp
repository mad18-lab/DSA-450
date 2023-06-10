#include<iostream>
using namespace std;
int main() {
    int arr[10];
    int size;
    
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
    
    int sum = 0;
    
    for (int j = 0; j < size; j++) {
        sum = sum + arr[j];
    }
    
    cout<<"\nSum of Array: "<<sum;
}
