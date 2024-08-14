#include <iostream>

using namespace std;

int main() {
	int testCase;

	cin >> testCase;

	for (int i = 0; i < testCase; i++) {
		long N;
		long temp = 0;
		int pig[6];
		int yesterday[6];
		int day = 1;

		cin >> N;
		for (int j = 0; j < 6; j++) {
			cin >> yesterday[j];
			temp += yesterday[j];
		}

		if (temp > N) {
			cout << day << endl;
			continue;
		}

		while (true) {
			temp = 0;
			day++;
			for (int k = 0; k < 6; k++) {
				pig[k] = yesterday[k] + yesterday[(k + 5) % 6] + yesterday[(k + 1) % 6] + yesterday[(k + 3) % 6];
				temp += pig[k];
			}

			if (temp > N) {
				cout << day << endl;
				break;
			}

			for (int k = 0; k < 6; k++) {
				yesterday[k] = pig[k];
			}


		}
	}

	return 0;
}