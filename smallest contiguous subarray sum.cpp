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
    
    int min_sum = INT_MAX, min_sum_index = 0;
    int start, end, s = 0;
    
    for (int i = 0; i < n; i++) {
        min_sum_index = min_sum_index + arr[i];
        
        if (min_sum_index < min_sum) {
            min_sum = min_sum_index;
            start = s;
            end = i;
        }
        
        if (min_sum_index > 0) {
            min_sum_index = 0;
            s = i + 1;
        }
    }
    
    cout<<"\nSmallest contiguous sum: "<<min_sum;
    cout<<"\nSmallest contiguous sum array: ";
    for (int i = start; i <= end; i++) {
        cout<<arr[i]<<" ";
    }
}
