#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int num[10];

		for (int i = 0; i < 10; i++) {
			cin >> num[i];
		}

		int max = num[0];

		for (int i = 1; i < 10; i++) {
			if (max < num[i]) {
				max = num[i];
			}
		}

		cout << "#" << test_case << " " << max << endl;
		

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}