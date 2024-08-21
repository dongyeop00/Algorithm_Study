#include <iostream>
#include <stack>

using namespace std;

stack<int> myStack;


int main() {
	int testCase;
	cin >> testCase;

	while (testCase--) {
		string cmd = "";
		cin >> cmd;

		if (cmd == "push") {
			int temp;
			cin >> temp;
			myStack.push(temp);
		}
		else if (cmd == "pop") {
			if (myStack.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << myStack.top() << '\n';
				myStack.pop();
			}
		}
		else if (cmd == "size") {
			cout << myStack.size() << '\n';
		}
		else if (cmd == "empty") {
			if (myStack.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else {
			if (myStack.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << myStack.top() << '\n';
			}
		}
	}

	return 0;
}