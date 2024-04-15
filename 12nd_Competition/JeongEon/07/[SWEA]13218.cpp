// 제 12회 알고리즘 스터디
// SWEA D3
// 문제명: 조별과제
// 문제번호: 13218번

#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;

		cout << "#" << i + 1 << " " << N / 3 << '\n';
	}

	return 0;
}