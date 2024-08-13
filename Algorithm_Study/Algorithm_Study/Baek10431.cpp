#include <iostream>

using namespace std;


int main() {
	int testCase;

	cin >> testCase;

	for (int i = 1; i <= testCase; i++) {
		int arr[20];
		int number;
		int cnt = 0;
		cin >> number;
		for (int j = 0; j < 20; j++) {
			cin >> arr[j];
		}
		int temp = arr[0];

		for (int a = 0; a < 20; a++) {
			for (int b = a; b < 20; b++) {
				if (arr[a] > arr[b]) {
					cnt++;
				}
			}
		}

		cout << number << " " << cnt << endl;
	}
}