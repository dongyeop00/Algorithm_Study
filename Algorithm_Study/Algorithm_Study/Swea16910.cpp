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

		//4*cnt : 제 1사분면의 좌표만 확인했으니 4사분면을 파악하기 위해 4를 곱해준다.
		//-3 : 위에서 모든 사분면의 값을 더했다. 이때, (0,0) 원점이 4번 중복되기 때문에 3을 빼준다.
		//-4*N : 원의 경계 선분에 위치한 좌표는 중복해서 세어진다. 따라서 N만큼의 좌표가 원의 경계선에 존재하므로 이등를 조정하기 위해 4*N을 빼준다.
		cout << "#" << test_case << " " << 4 * cnt - 3 - 4 * N << endl;
	}
	return 0;
}