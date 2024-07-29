#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int A, B, C;
	long long answer = 0; // �ΰ��� ���� ����� Ŭ �� �ִ�.

	cin >> A;

	vector<int> room(A);

	for (int i = 0; i < A; i++) {
		cin >> room[i];
	}

	cin >> B >> C;

	for (int i = 0; i < A; i++) {
		int num = room[i];

		num -= B;
		answer++;

		if (num > 0) {
			answer += ceil((double)num / C);
		}
	}

	cout << answer;

	return 0;
}