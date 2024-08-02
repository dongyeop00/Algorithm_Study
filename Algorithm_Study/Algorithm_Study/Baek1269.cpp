#include <iostream>
#include <map>

using namespace std;

map<int, bool> answer;
int A, B;
int sum = 0;

void init() {
	ios::sync_with_stdio;
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();

	cin >> A >> B;

	for (int i = 0; i < A + B; i++) {
		int temp;
		cin >> temp;

		if (answer[temp] == true) {
			answer.erase(temp);
		}
		else {
			answer[temp] = true;
		}
	}

	cout << answer.size();


}