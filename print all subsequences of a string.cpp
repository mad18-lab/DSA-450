#include <bits/stdc++.h>
using namespace std;

void printAllSubsequence(string input_str, string output_str) {
	if (input_str.empty()) {
		cout << output_str << endl;
		return;
	}
	printAllSubsequence(input_str.substr(1), output_str + input_str[0]);
	printAllSubsequence(input_str.substr(1), output_str);
}

int main() {
	string output_str = "";
	string input_str = "abcd";
	printAllSubsequence(input_str, output_str);
	return 0;
}
