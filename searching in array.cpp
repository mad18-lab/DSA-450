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
    
    int elm, index;
    cout<<"\nEnter element to be searched: ";
    cin>>elm;
    
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == elm) {
            count = 1;
            index = i;
            break;
        }
    }
    
    if (count == 0) {
        cout<<"\nElement not found in this array";
    }
    else if (count == 1) {
        cout<<"\nElement found at "<<index<<"th index";
    }
}
