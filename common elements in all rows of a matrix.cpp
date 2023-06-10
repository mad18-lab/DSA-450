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
    
    cout<<endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            for (int k = i + 1; k < r; k++) {
                if (arr[i][j] == arr[k][j]) {
                    cout<<arr[i][j]<<" ";
                }
            }
        }
    }
}
