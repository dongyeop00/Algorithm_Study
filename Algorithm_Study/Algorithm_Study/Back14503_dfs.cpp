#include <iostream>

using namespace std;

// ���� ��
// 0 : ��
// 1 : ��
// 2 : ��
// 3 : ��

// ���� ��
// 0 : û�ҵ��� ���� ĭ
// 1 : ��

int N, M;
int map[51][51];
bool visited[51][51] = { false, };
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int r, c, d;
int cnt = 0;

void dfs(int x, int y, int dir) {
    visited[x][y] = true;

    if (map[x][y] == 0) {
        cnt++;
        map[x][y] = 2;
    }

    for (int i = 0; i < 4; i++) {
        int nd = (dir + 3 - i) % 4;
        int nx = x + dx[nd];
        int ny = y + dy[nd];

        if (nx >= 0 && ny >= 0 && nx < N && ny < M) {
            if (map[nx][ny] == 0 && !visited[nx][ny]) {
                dfs(nx, ny, nd);
                return;
            }
        }
    }

    // û�� �ȵ��� ��
    int back = (dir + 2) % 4;
    int bx = x + dx[back];
    int by = y + dy[back];

    if (bx >= 0 && by >= 0 && bx < N && by < M && map[bx][by] != 1) {
        dfs(bx, by, dir);
    }
}

int main() {
    cin >> N >> M;
    cin >> r >> c >> d;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> map[i][j];
        }
    }

    dfs(r, c, d);
    cout << cnt << endl;

    return 0;
}
