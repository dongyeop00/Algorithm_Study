#include <iostream>
#include <math.h>
#include <string>

using namespace std;


int main() {
	int N;
	bool check[100001] = { false };
	int cnt = 0;
	int mx = 0;
	cin >> N;

	N *= 2;

	while (N--) {
		int temp;
		cin >> temp;
		if (check[temp]) { //��ƼĿ�� �پ� �ִٸ�
			cnt--;
		}
		else { //��ƼĿ�� �پ����� �ʴٸ�
			check[temp] = 1;
			cnt++;
			mx = max(mx, cnt);
		}
	}

	cout << mx;
}