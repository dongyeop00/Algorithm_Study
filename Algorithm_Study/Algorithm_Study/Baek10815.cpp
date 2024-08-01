#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M, temp;
	vector<int> v1;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		v1.push_back(temp);
	}

	sort(v1.begin(), v1.end());
	
	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> temp;
		cout << binary_search(v1.begin(), v1.end(), temp) << " ";
	}


	return 0;

}