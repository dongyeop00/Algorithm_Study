#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> myStack;

	cout << myStack.empty() << endl;

	myStack.push(15);

	cout << myStack.empty() << endl;

	cout << myStack.top() << endl;

	myStack.pop();

	cout << myStack.empty() << endl;

	return 0;
}