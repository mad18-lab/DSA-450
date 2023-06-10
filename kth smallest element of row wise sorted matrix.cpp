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
    
    int b[r * c];
    int index = 0;
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            b[index] = arr[i][j];
            index++;
        }
    }
    
    int size = sizeof(b) / sizeof(b[0]);
    
    sort(b, b + size);
    
    int k;
    cout<<"\nEnter K: ";
    cin>>k;
    
    cout<<endl<<k<<"th smallest element of the row-wise sorted matrix: "<<b[k-1];
}
