#include<iostream>
using namespace std;
int main() {
    int arr[] = {1, 3, 4, 5, 6, 2, 7, 9, 8, 11};
    int size = sizeof(arr) / sizeof (arr[0]);
    
    cout<<"\nOriginal Array: ";
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    
    int N = size + 1;
    int total = (N) * (N+1) / 2;
    
    for (int j = 0; j < size; j++) {
        total = total - arr[j];
    }
    
    cout<<"\nMissing Number: "<<total;
}
