#include <iostream>
#include <map>

using namespace std;

map<int, int> map1;
int N, M;
int temp;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		map1[temp]++;
	}

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> temp;
		cout << map1[temp] << " ";
	}

	return 0;
}