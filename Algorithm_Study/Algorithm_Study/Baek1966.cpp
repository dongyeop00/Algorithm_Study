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
	int N; // ������ ����
	int M; // ���°�� �μ�Ǿ����� �ñ��� ������ ���� queue���� ���° ���� �ִ���
	int priority; // N���� �߿䵵
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