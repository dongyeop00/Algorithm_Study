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
		cnt = 0;

		for (int i = 0; i <= N; i++) {
			for (int j = 0; j <= N; j++) {
				if ((i * i) + (j * j) <= N * N) {
					cnt++;
				}
			}
		}

		//4*cnt : �� 1��и��� ��ǥ�� Ȯ�������� 4��и��� �ľ��ϱ� ���� 4�� �����ش�.
		//-3 : ������ ��� ��и��� ���� ���ߴ�. �̶�, (0,0) ������ 4�� �ߺ��Ǳ� ������ 3�� ���ش�.
		//-4*N : ���� ��� ���п� ��ġ�� ��ǥ�� �ߺ��ؼ� ��������. ���� N��ŭ�� ��ǥ�� ���� ��輱�� �����ϹǷ� �̵ �����ϱ� ���� 4*N�� ���ش�.
		cout << "#" << test_case << " " << 4 * cnt - 3 - 4 * N << endl;
	}
	return 0;
}