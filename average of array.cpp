#include<iostream>
using namespace std;
int main() {
    int arr[] = {10, 10, 10, 10, 10};
    int size = sizeof(arr) / sizeof (arr[0]);
    int sum = 0, avg;
    
    cout<<"\nOriginal Array: ";
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    
    for (int j = 0; j < size; j++) {
        sum = sum + arr[j];
    }
    
    avg = sum / size;
    
    cout<<"\nAverage of array elements: "<<avg;
}
