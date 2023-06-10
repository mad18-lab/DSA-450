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
    
    cout<<"\nMirror Matrix: ";
    for (int i = 0; i < r; i++) {
        cout<<endl;
        for (int j = c-1; j >= 0; j--) {
            cout<<arr[i][j]<<" ";
        }
    }
}
