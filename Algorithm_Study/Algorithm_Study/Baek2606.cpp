#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> V[101];
bool visited[101];
int N, M;
int a, b;
int cnt = 0;

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
			cnt++;
		}
	}
}

int main() {
	init();

	memset(visited, false, sizeof(false));

	cin >> N;
	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		V[a].push_back(b);
		V[b].push_back(a);
	}

	dfs(1);

	cout << cnt;

	return 0;
}