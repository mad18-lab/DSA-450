#include<iostream>
#include<algorithm>
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
    
    sort(arr, arr+n);
    
    int k;
    cout<<"\nEnter value: ";
    cin>>k;
    
    int max = arr[n-1];
    int min = arr[0];
    int ans = max - min;
    
    for (int i = 1; i < n; i++) {
        min = std::min(arr[0] + k, arr[i] - k);
        max = std::max(arr[i-1] + k, arr[n-1] - k);
        ans = std::min(ans, max-min);
    }
    
    cout<<"\nMinimum difference is: "<<ans;
}
