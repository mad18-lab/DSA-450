#include <iostream>
#include <stack>
using namespace std;

int main() {

  // create a stack of strings
  stack<int> nums;

  // push elements into the stack
  nums.push(1);
  nums.push(2);
  nums.push(3);
  nums.push(4);
  nums.push(5);
  
  cout << "Stack: ";

  // print elements of stack
   while(!nums.empty()) {
    cout << nums.top() << ", ";
    nums.pop();
  }
 
  return 0;
}
