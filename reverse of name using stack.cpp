#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> name;
    
    name.push("M");
    name.push("A");
    name.push("D");
    name.push("H");
    name.push("A");
    name.push("V");
    
    cout<<"\nReverse of Name: ";
    
    while(!name.empty()) {
        cout<<name.top()<<" ";
        name.pop();
    }
    
    return 0;
}
