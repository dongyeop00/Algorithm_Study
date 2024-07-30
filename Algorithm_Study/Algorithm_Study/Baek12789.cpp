#include <iostream>
#include <stack>

using namespace std;

int N, T;
int cnt = 1;
stack<int> myStack;

int main() {

	cin >> N;

	while (N--) {
		cin >> T;

		if (cnt == T) {
			cnt++;
		}
		else {
			myStack.push(T);
		}

		while (!myStack.empty() && myStack.top() == cnt) {
			myStack.pop();
			cnt++;
		}
	}

	if (myStack.empty()) {
		cout << "Nice" << endl;
	}
	else {
		cout << "Sad" << endl;
	}



}
