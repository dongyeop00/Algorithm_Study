#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 'a' - 'A';
		}
		cout << str[i];
	}

	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}