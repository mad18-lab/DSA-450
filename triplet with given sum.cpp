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
    
    int sum = 25;
    int count, curr_sum = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                curr_sum = arr[i] + arr[j] + arr[k];
                if (curr_sum == sum) {
                    cout<<"\nTriplet is: ";
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                    count = 1;
                    break;
                }
            }
        }
    }
    
    if (count == 0) {
        cout<<"\nTriplet not found with the given sum";
    }
}
