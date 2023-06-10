#include<iostream>
using namespace std;

int main() {
    int r, c;
    cout<<"\nEnter number of rows: ";
    cin>>r;
    cout<<"\nEnter number of columns: ";
    cin>>c;
    int arr[r][c];
    
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
    
    int mid_row = ((r + 1) / 2) - 1;
    int mid_col = ((c + 1) / 2) - 1;
    
    cout<<"\nMiddle Row: ";
    for (int j = 0; j < c; j++) {
        cout<<arr[mid_row][j]<<" ";
    }
    
    cout<<"\nMiddle Column: ";
    for (int i = 0; i < r; i++) {
        cout<<arr[i][mid_col]<<" ";
    }
}
