// 코테 알고리즘 스터디 16회차
// SWEA D3
// 12221. 구구단2

#include <iostream>
#include <string.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// 테스트 케이스 개수 입력

	for (int t = 1; t <= TC; t++) {
		int A, B;
		cin >> A >> B;

		cout << "#" << t << " ";
		if (A < 10 && B < 10) {
			cout << A * B << '\n';
		}
		else {
			cout << -1 << '\n';
		}
	}
}