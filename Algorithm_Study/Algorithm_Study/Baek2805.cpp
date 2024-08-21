#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<int> tree;

	int N, M;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		tree.push_back(temp);
	}

	int start = 0;
	int end = *max_element(tree.begin(), tree.end());
	int result = 0;

	while (start <= end) {
		long long int total = 0;
		int mid = (start + end) / 2;

		for (int i = 0; i < N; i++) {
			if (tree[i] > mid) {
				total += tree[i] - mid;
			}
		}
		if (total < M) {
			end = mid - 1;
		}
		else {
			result = mid;
			start = mid + 1;
		}
	}

	cout << result;
}