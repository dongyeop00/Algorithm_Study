#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n, temp;
	int dasom;
	int cnt = 0;
	priority_queue<int> pq;

	cin >> n;
	cin >> dasom;

	for (int i = 0; i < n-1; i++) {
		cin >> temp;
		pq.push(temp);
	}


	while (!pq.empty()) {
		temp = pq.top();
		pq.pop();

		if (temp < dasom) {
			break;
		}
		else {
			pq.push(temp - 1);
			dasom++;
			cnt++;
		}
	}

	cout << cnt;
}