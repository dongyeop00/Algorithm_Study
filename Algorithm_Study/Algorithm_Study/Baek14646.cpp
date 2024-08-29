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
		if (check[temp]) { //스티커가 붙어 있다면
			cnt--;
		}
		else { //스티커가 붙어있지 않다면
			check[temp] = 1;
			cnt++;
			mx = max(mx, cnt);
		}
	}

	cout << mx;
}