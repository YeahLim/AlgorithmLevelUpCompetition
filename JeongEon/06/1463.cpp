// 백준 알고리즘 스터디 9회차
// 문제 번호: 1463번
// 문제 이름: 1로 만들기
// 알고리즘: DP
// 작성일: 24.03.21

#include <iostream>
#include <algorithm>

using namespace std;

int DP[1000000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 2; i <= N; i++) {
		// 1. 1을 뺀다.
		DP[i] = DP[i - 1] + 1;

		// 2. 2로 나누어지면
		if (i % 2 == 0) {
			DP[i] = min(DP[i], DP[i / 2] + 1);
		}

		// 3. 3으로 나누어지면
		if (i % 3 == 0) {
			DP[i] = min(DP[i], DP[i / 3] + 1);
		}
	}

	cout << DP[N];

	return 0;
}