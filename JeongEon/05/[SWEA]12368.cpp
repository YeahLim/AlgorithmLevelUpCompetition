// 제 12회 알고리즘 스터디
// SWEA D3
// 문제명: 24시간
// 문제번호: 12368번

#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int A, B;
		cin >> A >> B;

		int time = A + B;

		if (time >= 24) {
			time = time - 24;
		}

		cout << "#" << i + 1 << " " << time << '\n';
	}

	return 0;
}