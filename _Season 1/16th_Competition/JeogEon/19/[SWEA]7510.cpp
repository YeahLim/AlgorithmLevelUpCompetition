// 코테 알고리즘 스터디 16회차
// SWEA D3
// 7510. 상원이의 연속 합

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// 테스트 케이스 개수 입력

	for (int t = 1; t <= TC; t++) {
		int N;
		cin >> N;

		int cnt = 1;
		for (int i = 1; i <= N; i++) {
			if (i > N) {
				break;
			}
			int tmp = N;
			for (int j = i; j <= N; j++) {
				if (tmp <= 0) {
					if (tmp == 0) {
						cnt++;
					}
					break;
				}
				tmp -= j;
			}
		}

		cout << "#" << t << " ";
		cout << cnt << '\n';
	}
}