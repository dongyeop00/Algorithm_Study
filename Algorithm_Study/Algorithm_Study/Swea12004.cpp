#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int N;
	int cnt = 0;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N;
		bool check = false;
		for (int i = 1; i < 10; i++) {
			if (N % i == 0 && N / i < 10 && N / i >= 1) {
				check = true;
			}
		}

		if (check) {
			cout << "#" << test_case << " " << "Yes\n";
		}
		else {
			cout << "#" << test_case << " " << "No\n";
		}
	}
	return 0;
}