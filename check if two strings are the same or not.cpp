#include<bits/stdc++.h>
using namespace std;

int main() {
    char str1[100], str2[100];
    cout<<"\nEnter string 1: ";
    cin>>str1;
    cout<<"\nEnter string 2: ";
    cin>>str2;
    
    if (strcmp(str1, str2) == 0) {
        cout<<"\nBoth strings are the same.";
    }
    
    else {
        cout<<"\nBoth strings are not the same.";
    }
}
