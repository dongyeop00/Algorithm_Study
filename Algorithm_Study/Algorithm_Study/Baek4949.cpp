#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {

	while (true) {
		string str;
		getline(cin, str);

		if (str == ".") {
			break;
		}

		stack<char> myStack;
		bool flag = 0;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				myStack.push(str[i]);
			}else if(str[i] == ')') {
				if (!myStack.empty() && myStack.top() == '(') {
					myStack.pop();
				}
				else {
					flag = 1;
					break;
				}
			}
			else if (str[i] == ']') {
				if (!myStack.empty() && myStack.top() == '[') {
					myStack.pop();
				}
				else {
					flag = 1;
					break;
				}
			}
		}

		if (flag == 0 && myStack.empty()) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}

	}

}