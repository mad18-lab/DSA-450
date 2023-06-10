#include<bits/stdc++.h>
using namespace std;

int main() {
    string name;
    cout<<"\nEnter name: ";
    cin>>name;
    
    int size = name.length();
    char arr[size+1];
    
    strcpy(arr, name.c_str());
    
    cout<<"\nDuplicate Characters in the String: ";
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout<<arr[i]<<" ";
            }
        }
    }
}