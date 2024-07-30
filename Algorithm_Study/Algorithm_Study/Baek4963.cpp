#include <iostream>
#include <cstring>

using namespace std;

int dx[8] = { -1,-1,0,1,1,1,0,-1 };
int dy[8] = { 0,1,1,1,0,-1,-1,-1 };
int map[50][50];
bool visited[50][50];
int w, h;
int cnt = 0;
 
void dfs(int x, int y) {
	visited[x][y] = true;

	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (0 <= ny && 0 <= nx && ny < w && nx < h) {
			if (map[nx][ny]==1 && !visited[nx][ny]) {
				dfs(nx, ny);
			}
		}
	}
}



int main() {
	while (true) {
		cin >> w >> h;

		cnt = 0;

		if (w == 0 && h == 0) {
			break;
		}

		memset(map, 0, sizeof(map));
		memset(visited, false, sizeof(visited));

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> map[i][j];
			}
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (map[i][j] == 1 && !visited[i][j]) {
					dfs(i, j);
					cnt++;
				}
			}
		}

		cout << cnt << endl;

	}
	return 0;
}