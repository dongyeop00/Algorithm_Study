#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool solution(const string& a) {

	stack<char> myStack;

	for (char ch : a) {
		if (ch == '(') {
			myStack.push(ch);
		}
		else {
			if (!myStack.empty()) {
				myStack.pop();
			}
			else {
				return false;
			}
		}
	}

	return myStack.empty();
}

int main() {
	int testCase;
	cin >> testCase;

	while (testCase--) {
		string str;
		cin >> str;
		if (solution(str)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
