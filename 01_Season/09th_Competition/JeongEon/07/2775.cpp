// 백준 알고리즘 스터디 9회차
// 문제 번호: 2775번
// 문제 이름: 부녀회장이 될테야
// 알고리즘: DP
// 작성일: 24.03.21

#include <iostream>
#include <string.h>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int k, n;
		cin >> k >> n;

		int apt[15][15];	// 0으로 초기화
		memset(apt, 0, sizeof(apt));

		for (int j = 0; j <= k; j++) {
			for (int p = 1; p <= n; p++) {
				if (j == 0) {
					apt[j][p] = p;
					continue;
				}
				apt[j][p] = apt[j][p - 1] + apt[j - 1][p];
			}
		}

		cout << apt[k][n] << '\n';
	}

	return 0;
}