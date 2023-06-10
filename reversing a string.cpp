#include<bits/stdc++.h>
using namespace std;

int main() {
    string str = "typing errors are very common";
    int length = str.length();
    
    cout<<"\nOriginal String: ";
    cout<<str;
    
    cout<<"\nPrinting String in Reverse: ";
    for (int i = length-1; i >= 0; i--) {
        cout<<str[i];
    }
    
    return 0;
}
