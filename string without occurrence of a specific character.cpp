#include<bits/stdc++.h>
using namespace std;

int main() {
    string str1; 
    char occ;
    cout<<"\nEnter string: ";
    cin>>str1;
    
    cout<<"\nYour string: "<<str1;
    cout<<"\nEnter character you want to remove occurence of: ";
    cin>>occ;
    
    int length = str1.length();
    
    for (int i = 0; i < length; i++) {
        if (str1[i] != occ) {
            cout<<str1[i];
        }
    }
}
