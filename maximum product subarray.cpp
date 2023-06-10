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
    
    int res = arr[0];
    int mul;
    
    for (int i = 0; i < n; i++) {
        mul = arr[i];
        for (int j = i+1; j < n; j++) {
            res = max(res, mul);
            mul = mul * arr[j];
        }
        res = max(res, mul);
    }
    
    cout<<"\nMaximum subarray product: "<<res;
}
