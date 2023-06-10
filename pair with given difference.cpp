#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"\nEnter array size: ";
    cin>>a;
    int arr[a];
    cout<<"\nEnter array elements: ";
    for (int i = 0; i < a; i++) {
        cin>>arr[i];
    }
    
    int diff;
    cout<<"\nEnter difference: ";
    cin>>diff;
    int flag = false;
    
    cout<<"\nPairs with the given difference: ";
    for (int i = 0; i < a; i++) {
        for (int j = i+1; j < a; j++) {
            if (arr[j] - arr[i] == diff) {
                cout<<endl;
                cout<<arr[i]<<" "<<arr[j];
                flag = true;
            }
        }
    }
    
    if (flag == false) {
        cout<<"\nNo such pair found.";
    }
}
