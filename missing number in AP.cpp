#include<iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int a = arr[0];
    int l = arr[n-1];
    int s;
    int sum = 0;
    
    if ((a + l) % 2 == 0) {
        s = (a + l) / 2;
        s = s * (n + 1);
    }
    else {
        s = (n + 1) / 2;
        s = s * (a + l);
    }
    
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    
    int miss = s - sum;
    
    cout<<"\nMissing number: "<<miss;
}
