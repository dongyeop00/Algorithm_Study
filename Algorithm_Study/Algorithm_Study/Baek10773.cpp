#include <iostream>
#include <stack>

using namespace std;

stack<int> myStack;

void solution(int n) {
	if (n != 0) {
		myStack.push(n);
	}
	else {
		if (!myStack.empty()) {
			myStack.pop();
		}
	}
}

int sum() {
	int answer = 0;

	while (!myStack.empty()) {
		answer += myStack.top();
		myStack.pop();
	}

	return answer;
}

int main() {
	int N;
	cin >> N;
	while (N--) {
		int order;
		cin >> order;
		solution(order);
	}
	cout << sum();

	return 0;
}