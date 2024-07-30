#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int num[5];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < 5; i++) {
		sum += pow(num[i],2);
	}

	cout << sum % 10;
}