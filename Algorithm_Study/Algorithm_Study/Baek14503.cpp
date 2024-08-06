#include <iostream>

using namespace std;

#define max 50

int N, M;
int r, c, d;
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int map[max][max];
int cnt = 0;
bool visited[max][max] = { false, };

void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void input() {
	cin >> N >> M;
	cin >> r >> c >> d;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}

	visited[r][c] = true;
	cnt++;
}

void dfs() {
    while (true) {
        bool cleaned = false;
        for (int i = 0; i < 4; i++) {
            int next_d = (d + 3 - i) % 4; // 90µµ È¸Àü
            int next_r = r + dx[next_d];
            int next_c = c + dy[next_d];

            if (next_r < 0 || next_r >= N || next_c < 0 || next_c >= M || map[next_r][next_c] == 1) {
                continue;
            }

            if (map[next_r][next_c] == 0 && !visited[next_r][next_c]) {
                visited[next_r][next_c] = true;
                r = next_r;
                c = next_c;
                d = next_d;
                cnt++;
                cleaned = true;
                break;
            }
        }

        if (!cleaned) {
            int back_idx = (d + 2) % 4;
            int back_r = r + dx[back_idx];
            int back_c = c + dy[back_idx];

            if (back_r >= 0 && back_r < N && back_c >= 0 && back_c < M && map[back_r][back_c] == 0) {
                r = back_r;
                c = back_c;
            }
            else {
                cout << cnt << endl;
                return;
            }
        }
    }
}


int main() {
	init();
	input();
	dfs();
}