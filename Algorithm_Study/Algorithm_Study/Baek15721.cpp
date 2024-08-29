#include <iostream>
#include <vector>

using namespace std;

int main() {
	int A, T;
	bool C;
	int n = 0, cnt = 0, res = 0;
	
	cin >> A >> T >> C;

	while (true) {
		n++;
		vector<int> answer = { 0,1,0,1 };
		for (int i = 1; i <= n + 1; i++) {
			answer.push_back(0);
		}
		for (int i = 1; i <= n + 1; i++) {
			answer.push_back(1);
		}
		for (int i = 0; i < answer.size(); i++) {
			if (answer[i] == C) {
				cnt++;
			}
			if (cnt == T) {
				cout << res;
				return 0;
			}
			res++;
			res %= A;
		}
		answer.clear();
	}

}