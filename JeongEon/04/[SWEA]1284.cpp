// 제 12회 알고리즘 스터디
// SWEA D2
// 문제명: 수도 요금 경쟁
// 문제번호: 1284번

#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int P, Q, R, S, W;
		cin >> P >> Q >> R >> S >> W;

		int A = P * W;
		int B = Q;

		if (W > R) {
			W = W - R;
			B += S * W;
		}

		if (A <= B) {
			cout << "#" << i + 1 << " " << A << '\n';
		}
		else {
			cout << "#" << i + 1 << " " << B << '\n';
		}
	}

	return 0;
}