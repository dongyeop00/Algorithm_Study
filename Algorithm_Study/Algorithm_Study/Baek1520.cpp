#include <iostream>
#include <cstring>

using namespace std;

int map[501][501];
int visited[501][501];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int N, M;

int dfs(int x, int y) {

    if (x == N - 1 && y == M - 1) {
        return 1;
    }

    if (visited[x][y] == -1) {
        visited[x][y] = 0;
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && ny >= 0 && nx < N && ny < M){
                if (map[x][y] > map[nx][ny]) {
                    visited[x][y] += dfs(nx, ny);
                }
            }
        }
    }

    return visited[x][y];
}

int main() {

    cin >> N >> M;

    memset(visited, -1, sizeof(visited));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> map[i][j];
        }
    }

    cout << dfs(0, 0) << endl;

    return 0;

}
