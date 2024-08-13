#include <iostream>

using namespace std;

int main() {
	int n, m;
	int cnt = 0;
	int map[101][101] = { 0, };
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = x1; i <= x2; i++) {
			for (int j = y1; j <= y2; j++) {
				map[i][j]++;
			}
		}
	}

	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (map[i][j] > m) {
				cnt++;
			}
		}
	}

	cout << cnt;
}