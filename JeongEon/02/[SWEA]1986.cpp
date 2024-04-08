// 제 12회 알고리즘 스터디
// SWEA D2
// 문제명: 지그재그 숫자
// 문제번호: 1986번

#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;

		int sum = 0;
		for (int j = 1; j <= N; j++) {
			if (j % 2 == 0) {
				sum -= j;
			}
			else {
				sum += j;
			}
		}

		cout << "#" << i + 1 << " " << sum << '\n';
	}

	return 0;
}