#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int h, w;
	char arr[101][101];
	int answer[101][101];
	string str;

	cin >> h >> w;

	memset(answer, -1, sizeof(answer));

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			if (arr[i][j] == 'c') {
				answer[i][j] = 0;
			}
			else if (answer[i][j-1] >= 0) {
				answer[i][j] = answer[i][j - 1] + 1;
			}
		}
	}

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			cout << answer[i][j] << " ";
		}
		cout << '\n';
	}

	return 0;
}