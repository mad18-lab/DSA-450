#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"\nEnter number: ";
    cin>>n;
    
    int arr[n];
    cout<<"\nEnter array elements: ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    
    int cal = n / num;
    
    for (int i = 0; i < n; i++) {
        int count = 1;
        
        while ((i+1) < n && arr[i] == arr[i+1]) {
            count++;
            i++;
        }
        
        if (count > cal) {
            cout<<arr[i]<<" ";
        }
        
        i++;
    }
}
