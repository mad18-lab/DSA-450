#include<iostream>
#include<algorithm>
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
    
    int mat[r * c];
    int index = 0;
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            mat[index] = arr[i][j];
            index++;
        }
    }
    
    int size = sizeof(mat) / sizeof(mat[0]);
    cout<<"\nRow and Column-Wise Sorted Matrix: ";
    sort(mat, mat + size);
    for (int i = 0; i < size; i++) {
        cout<<mat[i]<<" ";
    }
}
