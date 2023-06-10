#include<iostream>
using namespace std;
int main() {
    int n, num;
    cout<<"\nEnter size of array: ";
    cin>>n;
    int arr[n];
    int sum = 0, prod = 1;
    
    cout<<"\nEnter element of array: ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    cout<<"\nOriginal Array: ";
    for (int j = 0; j < n; j++) {
        cout<<arr[j]<<" ";
    }
    
    cout<<"\nEnter number: ";
    cin>>num;
    
    if (num % 2 != 0) {
        for (int a = 0; a < n; a++) {
            sum = sum + arr[a];
        }
        cout<<sum<<endl;
    }
    
    else if (num % 2 == 0) {
        for (int b = 0; b < n; b++) {
            prod = prod * arr[b];
        }
        cout<<prod<<endl;
    }
}
