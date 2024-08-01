#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	int cnt = 0;
	string temp;
	
	cin >> N >> M;

	map<string, bool> map1;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		map1.insert({ temp, true });
	}

	for (int i = 0; i < M; i++) {
		cin >> temp;
		if (map1[temp] == true) {
			cnt++;
		}
	}

	cout << cnt;;
}