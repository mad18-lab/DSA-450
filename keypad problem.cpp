#include<bits/stdc++.h>
using namespace std;

void possibleCombs(vector<char> nums[], int input[], string res, int index, int n) {
    if (index == n) {
        cout<<endl<<res<<" ";
        return;
    }
    
    int d = input[index];
    int len = nums[d].size();
    
    for (int i = 0; i < len; i++) {
        possibleCombs(nums, input, res + nums[d][i], index + 1, n);
    }
}

int main() {
    vector<char> digits[] = { {}, {}, {'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}, {'j', 'k', 'l'}, 
                            {'m', 'n', 'o'}, {'p', 'q', 'r', 's'}, {'t', 'u', 'v'}, {'w', 'x', 'y', 'z'} };
    int input[] = {2, 3, 4};
    int input2[] = {2, 3};
    int n1 = sizeof(input) / sizeof(input[0]);
    int n2 = sizeof(input2) / sizeof(input2[0]);
    
    possibleCombs(digits, input, string(" "), 0, n1);
    possibleCombs(digits, input2, string(" "), 0, n2);
}