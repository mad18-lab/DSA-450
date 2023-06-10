#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int s = 0;
    int n1;
    cout<<"\nEnter array 1 size: ";
    cin>>n1;
    int a[n1];
    cout<<"\nEnter array 1 elements: ";
    for (int i = 0; i < n1; i++) {
        cin>>a[i];
    }
    
    int n2;
    cout<<"\nEnter array 2 size: ";
    cin>>n2;
    int b[n2];
    cout<<"\nEnter array 2 elements: ";
    for (int j = 0; j < n2; j++) {
        cin>>b[j];
    }
    
    cout<<"\nArray 1: ";
    for (int i = 0; i < n1; i++) {
        cout<<a[i]<<" ";
    }
    
    cout<<"\nArray 2: ";
    for (int j = 0; j < n2; j++) {
        cout<<b[j]<<" ";
    }
    
    sort(a, a+n1);
    sort(b, b+n2);
    
    if (n1 == n2) {
        for (int i = 0; i < n1; i++) {
            s = s + abs(a[i] - b[i]);
        }
    }
    
    else {
        cout<<"\nARRAYS INVALID.";
    }
    
    cout<<"\nMinimum sum of absolute differences: "<<s;
}
