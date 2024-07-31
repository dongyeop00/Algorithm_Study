#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {
		int N;
		cin >> N;

		vector<long long> v(N);

		for (int i = 0; i < N; i++) {
			cin >> v[i];
		}

		long long max = v[N - 1];
		long long sum = 0;

		for (int i = N - 2; i >= 0; i--) {
			if (max < v[i]) {
				max = v[i];
			}
			else {
				sum += max - v[i];
			}
		}

		cout << "#" << test_case << " " << sum << endl;



	}
	return 0;
}