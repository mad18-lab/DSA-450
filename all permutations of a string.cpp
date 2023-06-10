#include <bits/stdc++.h>
using namespace std;

void permute(string&a, int b, int c) {
    if (b == c) {
        cout<<a<<endl;
    }
    else {
        for (int i = b; i <= c; i++) {
            swap(a[b], a[i]);
            permute(a, b+1, c);
            swap(a[b], a[i]);
        }
    }
}

int main() {
	string str = "abc";
	int x = 0;
	int y = str.size();
	permute(str, x, y-1);
	return 0;
}
