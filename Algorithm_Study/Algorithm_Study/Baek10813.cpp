#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int arr[101];
	int N, M;
	int a, b;

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		arr[i] = i;
	}

	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}

	for (int i = 1; i <= N; i++) {
		cout << arr[i] << " ";
	}
}