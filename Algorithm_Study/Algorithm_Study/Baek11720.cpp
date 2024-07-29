#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(int N, string str) {

	vector<int> v;
	int answer = 0;

	for (int i = 0; i < N; i++) {
		v.push_back(str[i] - '0');
	}

	for (int i = 0; i < N; i++) {
		answer += v.at(i);
	}

	return answer;
}

int main() {
	int N;
	string str;

	cin >> N;
	cin >> str;

	cout << solution(N, str);

	return 0;
}