#include <iostream>
#include <cstring>

using namespace std;


int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int map[50][50];
bool visited[50][50];
int M, N, K;

void dfs(int x, int y) {
	visited[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < M && ny < N && ny >= 0 && ny >= 0) {
			if (map[nx][ny] == 1 && !visited[nx][ny]) {
				dfs(nx, ny);
			}
		}
	}
}


int main() {
	int testCase;
	int answer = 0;
	int x, y;
	cin >> testCase;

	for (int i = 0; i < testCase; i++) {
		cin >> M >> N >> K;

		answer = 0;
		memset(map, 0, sizeof(map));
		memset(visited, false, sizeof(visited));

		for (int a = 0; a < K; a++) {
			cin >> x >> y;
			map[x][y] = 1;
		}

		for (int q = 0; q < M; q++) {
			for (int w = 0; w < N; w++) {
				if (map[q][w] == 1 && !visited[q][w]) {
					dfs(q, w);
					answer++;
				}
			}
		}

		cout << answer << endl;
	}
}