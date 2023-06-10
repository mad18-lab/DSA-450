#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n1, n2;
    cout<<"\nEnter array 1 size: ";
    cin>>n1;
    cout<<"\nEnter array 2 size: ";
    cin>>n2;
    int a[n1], b[n2];
    
    cout<<"\nEnter array 1 elements: ";
    for (int i = 0; i < n1; i++) {
        cin>>a[i];
    }
    
    cout<<"\nEnter array 2 elements: ";
    for (int i = 0; i < n2; i++) {
        cin>>b[i];
    }
    
    cout<<"\nArray 1: ";
    for (int i = 0; i < n1; i++) {
        cout<<a[i]<<" ";
    }
    
    cout<<"\nArray 2: ";
    for (int i = 0; i < n2; i++) {
        cout<<b[i]<<" ";
    }
    
    int c[n1+n2];
    int k = 0;
    
    for (int i = 0; i < n1; i++) {
        c[k++] = a[i];
    }
    
    for (int i = 0; i < n2; i++) {
        c[k++] = b[i];
    }
    
    sort(c, c+n1+n2);
    
    k = 0;
    
    for (int i = 0; i < n1; i++) {
        a[i] = c[k++];
    }
    for (int i = 0; i < n2; i++) {
        b[i] = c[k++];
    }
    
    cout<<"\nAfter merge: ";
    
    for (int i = 0; i < n1; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n2; i++) {
        cout<<b[i]<<" ";
    }
}
