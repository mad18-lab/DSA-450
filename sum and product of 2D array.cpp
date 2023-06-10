#include<iostream>
using namespace std;

int main() {
    int r, c;
    cout<<"\nEnter number of rows: ";
    cin>>r;
    cout<<"\nEnter number of columns: ";
    cin>>c;
    int arr[r][c];
    int sum = 0, prod = 1;
    
    cout<<"\nEnter elements of 2D array: ";
    for (int i=0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin>>arr[i][j];
        }
    }
    
    cout<<"\nOriginal Array: ";
    for (int i = 0; i < r; i++) {
        cout<<endl;
        for (int j = 0; j < c; j++) {
            cout<<arr[i][j]<<" ";
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum = sum + arr[i][j];
            prod = prod * arr[i][j];
        }
    }
    
    cout<<"\nSum of 2D Array: "<<sum;
    cout<<"\nProduct of 2D Array: "<<prod;
}
