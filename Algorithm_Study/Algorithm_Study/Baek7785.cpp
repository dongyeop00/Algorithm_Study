#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	map<string, bool, greater<string>> map1;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string str1;
		string str2;

		cin >> str1 >> str2;
		if (str2 == "enter") {
			map1.insert({ str1, true });
		}
		else {
			map1.erase(str1);
		}
	}

	map<string, bool>::iterator iter;
	for (iter = map1.begin(); iter != map1.end(); iter++) {
		cout << iter->first << " ";
	}

}