#include<iostream>
using namespace std;

int main() {
    int r, c;
    cout<<"\nEnter number of rows: ";
    cin>>r;
    cout<<"\nEnter number of columns: ";
    cin>>c;
    int arr[r][c];
    int row_sum = 0, col_sum = 0;
    
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
            row_sum = row_sum + arr[i][j];
        }
        cout<<"\nSum of row "<<i<<": "<<row_sum<<endl;
        row_sum = 0;
    }
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            col_sum = col_sum + arr[j][i];
        }
        cout<<"\nSum of column "<<i<<": "<<col_sum<<endl;
        col_sum = 0;
    }
}
