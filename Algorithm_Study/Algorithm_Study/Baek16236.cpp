#include <iostream>
#include <cstring>


using namespace std;

int N;
int map[21][21];
bool visited[21][21];
int sharkSize = 1;


int main() {
	cin >> N;

	memset(map, 0, sizeof(map));
	memset(visited, false, sizeof(visited));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
		}
	}


}