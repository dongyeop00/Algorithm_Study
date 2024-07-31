#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	string S;
	string E;
	
	cin >> T;


	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> S;
		cin >> E;

		while(E.length() > S.length()) {
			if (E.back() == 'X') {
				E.pop_back();
			}
			else if (E.back() == 'Y') {
				E.pop_back();
				reverse(E.begin(), E.end());
			}
		}

		if (S == E) {
			cout << "#" << test_case << " " << "Yes" << endl;
		}
		else {
			cout << "#" << test_case << " " << "No" << endl;
		}


	}
	return 0;
}