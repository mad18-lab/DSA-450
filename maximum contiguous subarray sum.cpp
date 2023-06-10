#include<iostream>
#include<climits>
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
    
    int max_sum = INT_MIN, max_sum_index = 0;
    int start, end, s = 0;
    
    for (int i = 0; i < n; i++) {
        max_sum_index = max_sum_index + arr[i];
        
        if (max_sum_index > max_sum) {
            max_sum = max_sum_index;
            start = s;
            end = i;
        }
        
        if (max_sum_index < 0) {
            max_sum_index = 0;
            s = i + 1;
        }
    }
    
    cout<<"\nMaximum contiguous sum: "<<max_sum;
    cout<<"\nMaximum contiguous sum array: ";
    for (int i = start; i <= end; i++) {
        cout<<arr[i]<<" ";
    }
}
