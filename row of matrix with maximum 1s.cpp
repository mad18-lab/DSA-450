#include<iostream>
using namespace std;

int main() {
    int r, c;
    cout<<"\nEnter no. of rows: ";
    cin>>r;
    cout<<"\nEnter no. of columns: ";
    cin>>c;
    int arr[r][c];
    cout<<"\nEnter matrix elements: ";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin>>arr[i][j];
        }
    }
    
    cout<<"\nOriginal Matrix: ";
    for (int i = 0; i < r; i++) {
        cout<<endl;
        for (int j = 0; j < c; j++) {
            cout<<arr[i][j]<<" ";
        }
    }
    
    int row_index;
    int max = 0;
    
    for (int i = 0; i < r; i++) {
        int count = 0;
        for (int j = 0; j < c; j++) {
            if (arr[i][j] == 1) {
                count++;
            }
        }
        if (count > max) {
            max = count;
            row_index = i;
        }
    }
    
    cout<<"\nRow with maximum 1s: ";
    for (int j = 0; j < c; j++) {
        cout<<arr[row_index][j]<<" ";
    }
}
