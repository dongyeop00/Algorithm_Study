#include <iostream>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string str;
	string temp;
	set<string> set1;

	cin >> str;

	for (int i = 0; i < str.length(); ++i) {
		temp = "";
		for (int j = i; j < str.length(); ++i) {
			temp += str[i];
			set1.insert(temp);
		}
	}

	/*
	for(int i=0;i<str.length();i++) {
		for(int j=i;j<str.length();j++) {
			set.insert(str.substr(i,j-i+1)); // j-i+1�� �ϸ� ����(i)���� ��(l)������ ���̰� �ȴ�.
		}
	}
	*/

	cout << set1.size();

	return 0;
}