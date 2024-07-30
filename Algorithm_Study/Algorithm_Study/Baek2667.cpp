#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int map[25][25];
bool visited[25][25];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int N, house = 1;
vector<int> seq;

void dfs(int x, int y) {
	visited[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < N && ny < N && nx >= 0 && ny >= 0) {
			if (map[nx][ny] == 1 && !visited[nx][ny]) {
				dfs(nx, ny);
				house++;
			}
		}
	}
}


int main() {
	int count = 0;
	string str;
	cin >> N;

	memset(map, 0, sizeof(map));
	memset(visited, false, sizeof(visited));


	for (int i = 0; i < N; i++) {
		cin >> str;
		for (int j = 0; j < N; j++) {
			char a = str[j];
			map[i][j] = a - '0';
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 1 && !visited[i][j]) {
				dfs(i, j);
				count++;
				seq.push_back(house);
				house = 1;
			}
		}
	}

	sort(seq.begin(), seq.end());

	cout << count << endl;

	for (int i = 0; i < seq.size(); i++) {
		cout << seq[i] << endl;
	}
}