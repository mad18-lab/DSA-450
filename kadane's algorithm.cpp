#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"\nArray Size: ";
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
    
    int max_sum, cur_sum = 0;
    
    for (int i = 0; i < n; i++) {
        cur_sum = cur_sum + arr[i];
        
        if (cur_sum > max_sum) {
            max_sum = cur_sum;
        }
        
        else if (cur_sum < 0) {
            cur_sum = 0;
        }
    }
    
    cout<<"\nLargest sum of the contiguous subarray: "<<max_sum;
}
