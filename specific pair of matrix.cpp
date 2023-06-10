#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"\nEnter no. of rows and columns of square matrix: ";
    cin>>n;
    int arr[n][n];
    cout<<"\nEnter matrix elements: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }
    
    cout<<"\nOriginal Matrix: ";
    for (int i = 0; i < n; i++) {
        cout<<endl;
        for (int j = 0; j < n; j++) {
            cout<<arr[i][j]<<" ";
        }
    }

    int max = 0;
    
    for (int a = 0; a < n - 1; a++)
    for (int b = 0; b < n - 1; b++)
        for (int c = a + 1; c < n; c++)
        for (int d = b + 1; d < n; d++)
            if ((arr[c][d] - arr[a][b]) > max) {
                max = arr[c][d] - arr[a][b];
            }
    
    cout<<"\nMaximum difference value is: "<<max;
}
