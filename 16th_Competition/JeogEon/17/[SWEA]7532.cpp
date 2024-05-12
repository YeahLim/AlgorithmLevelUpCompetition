// 코테 알고리즘 스터디 16회차
// SWEA D3
// 7532. 세영이의 SEM력 연도

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// 테스트 케이스 개수 입력

	for (int t = 1; t <= TC; t++) {
		int S, E, M;
		cin >> S >> E >> M;

		int year = S;

		while (1) {
			if ((year - S) % 365 == 0 && (year - E) % 24 == 0 && (year - M) % 29 == 0) {
				break;
			}

			year += 365;
		}

		cout << "#" << t << " ";
		cout << year << '\n';
	}
}