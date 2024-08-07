#include <iostream>
#include <queue>

using namespace std;



void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main() {
	init();

	int testCase;
	int N; // 문서의 개수
	int M; // 몇번째로 인쇄되었는지 궁금한 문서가 현재 queue에서 몇번째 놓여 있는지
	int priority; // N개의 중요도
	int cnt;

	cin >> testCase;

	for (int i = 0; i < testCase; i++) {
		cin >> N >> M;
		cnt = 0;

		queue<pair<int, int>> q;
		priority_queue<int> pq;

		for (int j = 0; j < N; j++) {
			cin >> priority;
			q.push({ j,priority });
			pq.push(priority);
		}

		while (!q.empty()) {
			int index = q.front().first;
			int value = q.front().second;
			q.pop();
			if (pq.top() == value) {
				pq.pop();
				cnt++;
				if (index == M) {
					cout << cnt << endl;
					break;
				}
			}
			else {
				q.push({ index,value });
			}
		}


	}
}