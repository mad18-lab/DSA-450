#include<iostream>
using namespace std;

int main() {
    int n1, n2;
    cout<<"\nEnter array 1 size: ";
    cin>>n1;
    cout<<"\nEnter array 2 size: ";
    cin>>n2;
    
    int arr1[n1];
    cout<<"\nEnter array 1 elements: ";
    for (int i = 0; i < n1; i++) {
        cin>>arr1[i];
    }
    
    int arr2[n2];
    cout<<"\nEnter array 2 elements: ";
    for (int i = 0; i < n2; i++) {
        cin>>arr2[i];
    }
    
    cout<<"\nArray 1: ";
    for (int i = 0; i < n1; i++) {
        cout<<arr1[i]<<" ";
    }
    
    cout<<"\nArray 2: ";
    for (int i = 0; i < n2; i++) {
        cout<<arr2[i]<<" ";
    }
    
    int flag = 0;
    
    cout<<"\nUnion of the two arrays: ";
    for (int i = 0; i < n1; i++) {
        cout<<arr1[i]<<" ";
    }
    
    for (int j = 0; j < n2; j++) {
        for (int i = 0; i < n1; i++) {
            if (arr1[i] == arr2[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout<<arr2[j]<<" ";
        }
    }
    
    cout<<"\nIntersection of the two arrays: ";
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout<<arr1[i]<<" ";
            }
        }
    }
    
    return 0;
}
