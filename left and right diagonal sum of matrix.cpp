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
    
    int left_sum = 0;
    int right_sum = 0;
    
    if (r == c) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (i == j) {
                    left_sum = left_sum + arr[i][j];
                }
                if ((i + j) == (c - 1)) {
                    right_sum = right_sum + arr[i][j];
                }
                else {
                    continue;
                }
            }
        }
        cout<<"\nLeft Diagonal Sum: "<<left_sum;
        cout<<"\nRight Diagonal Sum: "<<right_sum;
    }
    
    else {
        cout<<"\nSince the matrix is not of equal size, diagonal sum is not possible.";
    }
}
