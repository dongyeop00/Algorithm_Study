#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> V[1000];
bool visited[1000];
int cnt = 0;
int N, M;
int a, b;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void dfs(int node) {
	visited[node] = true;

	for (int i = 0; i < V[node].size(); i++) {
		int k = V[node][i];
		if (!visited[k]) {
			dfs(k);
		}
	}
}

int main() {
	init();

	cin >> N >> M;

	memset(visited, false, sizeof(visited));

	for (int i = 1; i <= M; i++) {
		cin >> a >> b;
		V[a].push_back(b);
		V[b].push_back(a);
	}

	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			dfs(i);
			cnt++;
		}
	}

	cout << cnt;
}