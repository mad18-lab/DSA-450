#include<bits/stdc++.h>
using namespace std;

void reverseString(string &str) {
    stack<char> st;
    
    for (int i = 0; i < str.length(); i++) {
        st.push(str[i]);
    }
    
    for (int i = 0; i < str.length(); i++) {
        str[i] = st.top();
        st.pop();
    }
}

int main() {
    string str = "Music";
    reverseString(str);
    cout<<str;
    return 0;
}
