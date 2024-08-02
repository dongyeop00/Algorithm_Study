#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main() {
	init();

	int N, M, temp;

	cin >> N;

	vector<int> v1(N);

	for (int i = 0; i < N; i++) {
		cin >> v1[i];
	}

	sort(v1.begin(), v1.end());

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> temp;
		cout << binary_search(v1.begin(), v1.end(), temp) << "\n";
	}

	return 0;
}