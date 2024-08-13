#include <iostream>

using namespace std;

int day[15];
int j_money, s_money;
int j_jusik, s_jusik;

// Buy And Pray
void junhyeon() {
	for (int i = 1; i < 15; i++) {
		// 최대한 많이 살 수 있는 만큼 주식을 매수
		if (j_money >= day[i]) {
			j_jusik += j_money / day[i];
			j_money %= day[i];
		}
	}
}

// Timing
void sungmin() {
	int up = 0, down = 0; // 변수 초기화

	for (int i = 2; i < 15; i++) {
		if (day[i - 1] < day[i]) {
			up++;
			down = 0;
		}
		else if (day[i - 1] > day[i]) {
			down++;
			up = 0;
		}
		else {
			up = 0;
			down = 0;
		}

		// 3일 연속 상승하면 매도
		if (up >= 3) {
			s_money += s_jusik * day[i];
			s_jusik = 0;
		}
		// 3일 연속 하락하면 매수
		else if (down >= 3 && s_money >= day[i]) {
			s_jusik += s_money / day[i];
			s_money %= day[i];
		}
	}
}

void cal() {
	int junhyeon_total = j_money + j_jusik * day[14];
	int sungmin_total = s_money + s_jusik * day[14];

	if (junhyeon_total > sungmin_total) {
		cout << "BNP";
	}
	else if (junhyeon_total < sungmin_total) {
		cout << "TIMING";
	}
	else {
		cout << "SAMESAME";
	}
}

int main() {
	int money;
	cin >> money;

	j_money = money;
	s_money = money;

	for (int i = 1; i < 15; i++) {
		cin >> day[i];
	}

	junhyeon();
	sungmin();
	cal();

	return 0;
}
