#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int first, second;
		cin >> first >> second;

		if (first > second) {
			cout << "#" << test_case << " " << ">" << endl;
		}
		else if (first == second) {
			cout << "#" << test_case << " " << "=" << endl;
		}
		else {
			cout << "#" << test_case << " " << "<" << endl;
		}


	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}