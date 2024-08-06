#include <iostream>

using namespace std;

int N, M;
int arr[101] = { 0, };

void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

void input() {
	cin >> N >> M;
}

void simulation() {
	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		for (int k = a; k <= b; k++) {
			arr[k] = c;
		}
	}
}

void display() {
	for (int i = 1; i <= N; i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	init();
	input();
	simulation();
	display();
}