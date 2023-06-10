#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main() {
    queue<string> name;
    
    name.push("M");
    name.push("A");
    name.push("D");
    name.push("H");
    name.push("A");
    name.push("V");
    
    cout<<"\nName: ";
    while(!name.empty()) {
        cout<<name.front()<<" ";
        name.pop();
    }
    
    stack<string> rev;
    rev.push("M");
    rev.push("A");
    rev.push("D");
    rev.push("H");
    rev.push("A");
    rev.push("V");
    
    cout<<"\nReverse of Name: ";
    while(!rev.empty()) {
        cout<<rev.top()<<" ";
        rev.pop();
    }
    
    return 0;
}
