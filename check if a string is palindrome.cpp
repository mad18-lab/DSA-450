#include<bits/stdc++.h>
using namespace std;

int main() {
    string str = "tenet";
    int length = str.length();
    int flag = 0;
    
    for (int i = 0; i < length; i++) {
        if (str[i] != str[length-i-1]) {
            flag = 1;
        }
    }
    
    if (flag) {
        cout<<"\nString "<<str<<" is not a palindrome.";
    }
    
    else {
        cout<<"\nString "<<str<<" is a palindrome.";
    }
    
    return 0;
}
