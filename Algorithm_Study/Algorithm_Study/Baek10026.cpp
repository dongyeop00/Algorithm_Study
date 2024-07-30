#include <iostream>
#include <cstring>

using namespace std;

int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
char map[100][100];
bool visited[100][100];
int N;
int cnt = 0;
int no_cnt = 0;
string str;

void dfs(int x, int y) {
	visited[x][y] = true;
	char color = map[x][y];

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < N && ny < N && nx >= 0 && ny >= 0) {
			if (map[nx][ny] == color && !visited[nx][ny]) {
				dfs(nx, ny);
			}
		}
	}

}

int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> str;
		for (int j = 0; j < N; j++) {
			map[i][j] = str[j];
		}
	}

	memset(visited, false, sizeof(visited));


	//정상 dfs
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j]) {
				dfs(i, j);
				no_cnt++;
			}
		}
	}

	//적록색약 dfs
	// G -> R로 바꾸기
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 'G') {
				map[i][j] = 'R';
			}
		}
	}

	memset(visited, false, sizeof(visited));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j]) {
				dfs(i, j);
				cnt++;
			}
		}
	}

	cout << no_cnt << " " << cnt;

}