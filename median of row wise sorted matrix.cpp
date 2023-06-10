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
    
    int med[r * c];
    int index = 0;
    int median;
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            med[index] = arr[i][j];
            index++;
        }
    }
    
    int size = sizeof(med) / sizeof(med[0]);
    cout<<"\nRow-Wise Sorted Matrix: ";
    sort(med, med + size);
    for (int i = 0; i < size; i++) {
        cout<<med[i]<<" ";
    }
    
    if ((r * c) % 2 != 0) {
        median = med[((r * c) + 1) / 2];
        cout<<"\nMedian: "<<median;
    }
    else {
        median = (med[((r * c) / 2) - 1] + med[((r * c) / 2)]) / 2;
        cout<<"\nMedian: "<<median;
    }
}
