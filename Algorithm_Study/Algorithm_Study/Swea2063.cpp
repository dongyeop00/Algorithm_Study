#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	vector<int> v;
	int N = 0;

	cin >> T;

	int middle = T / 2;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N;
		v.push_back(N);
	}

	sort(v.begin(), v.end());

	cout << v[middle];

	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}