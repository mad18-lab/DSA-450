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
    
    int buy = arr[0];
    int max_profit = 0;
    
    for (int i = 0; i < n; i++) {
        if (buy > arr[i]) {
            buy = arr[i];
        }
        else if (arr[i] - buy > max_profit) {
            max_profit = arr[i] - buy;
        }
    }
    
    cout<<"\nBest time to buy and sell stock: "<<max_profit;
}
