#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
string str;
map<string, int> map1;
vector<string> v1;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;

	for (int i = 0; i < N+M; i++) {
		cin >> str;
		map1[str]++;
		if (map1[str] > 1) {
			v1.push_back(str);
		}
	}

	sort(v1.begin(), v1.end());

	cout << v1.size() << endl;
	for (auto o : v1) {
		cout << o << endl;
	}

}