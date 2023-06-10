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
    
    int flag = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum = sum + arr[j];
            
            if (sum == 0) {
                flag = 1;
                cout<<"\nSubarray: "<<"arr["<<i<<"]"<<"..."<<"arr["<<j<<"]"<<endl;
            }
        }
    }
    
    if (flag == 0) {
        cout<<"\nThere is no subarray with 0 sum.";
    }
}
