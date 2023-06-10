#include<iostream>
using namespace std;
int main() {
    int r, c;
    cout<<"\nEnter rows and columns: ";
    cin>>r>>c;
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
    
    cout<<"\nMatrix rotated by 90 degrees clockwise: ";
    for (int j = 0; j < c; j++) {
        cout<<endl;
        for (int i = r-1; i >= 0; i--) {
            cout<<arr[i][j]<<" ";
        }
    }
    
    cout<<"\nMatrix rotated by 90 degrees anti-clockwise: ";
    for (int j = c-1; j >= 0; j--) {
        cout<<endl;
        for (int i = 0; i < r; i++) {
            cout<<arr[i][j]<<" ";
        }
    }
}
