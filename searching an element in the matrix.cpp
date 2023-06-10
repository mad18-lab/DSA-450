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
    
    int elm;
    cout<<"\nEnter element you want to search: ";
    cin>>elm;
    int count = 0;
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] == elm) {
                count = 1;
                break;
            }
        }
    }
    
    if (count == 0) {
        cout<<"\nElement not found in the matrix.";
    }
    else if (count == 1) {
        cout<<"\nElement found in the matrix.";
    }
}
