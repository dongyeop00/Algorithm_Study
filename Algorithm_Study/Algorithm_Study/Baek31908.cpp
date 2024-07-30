#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;

	map<string, vector<string>> ringMap;

	for (int i = 0; i < N; i++) {
		string name, feature;

		cin >> name >> feature;

		if (feature != "-") {
			ringMap[feature].push_back(name);
		}
	}

	vector<pair<string, string>> couples;

	for (const auto& entry : ringMap) {
		const vector<string>& names = entry.second;
		if (names.size() == 2) {
			couples.emplace_back(names[0], names[1]);
		}
	}

	cout << couples.size() << "\n";

	for (const auto& couple : couples) {
		cout << couple.first << " " << couple.second << endl;
	}

	return 0;
}