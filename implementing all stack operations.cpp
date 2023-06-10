#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> years;
    
    years.push("2018");
    years.push("2018");
    years.push("2020");
    years.push("2021");
    years.push("2022");
    
    cout<<"Size: "<<years.size();
    cout<<"\nLast Five Years: ";
    
    while(!years.empty()) {
        cout<<years.top()<<" ";
        years.pop();
    }
    
    return 0;
}
