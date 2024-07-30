#include <iostream>

using namespace std;

int solution(int x, int y) {
	if (y == 1) {
		return 1;
	}
	else if (x == 0) {
		return y;
	}
	else {
		return solution(x - 1, y) + solution(x, y - 1);
	}
}


int main() {
	int testCase, k, n;
	cin >> testCase;

	for (int i = 0; i < testCase; i++) {
		cin >> k >> n;
		cout << solution(k, n) << endl;
	}
}