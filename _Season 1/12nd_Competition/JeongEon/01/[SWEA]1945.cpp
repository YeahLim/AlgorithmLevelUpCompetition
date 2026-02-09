// 제 12회 알고리즘 스터디
// SWEA
// 문제명: 간단한 소인수분해
// 문제번호: 1945번

#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;
		cout << "#" << i + 1 << " ";

		int a = 0, b = 0, c = 0, d = 0, e = 0;

		while (N % 11 == 0) {
			e++;
			N = N / 11;
		}

		while (N % 7 == 0) {
			d++;
			N = N / 7;
		}

		while (N % 5 == 0) {
			c++;
			N = N / 5;
		}

		while (N % 3 == 0) {
			b++;
			N = N / 3;
		}

		while (N % 2 == 0) {
			a++;
			N = N / 2;
		}

		cout << a << " " << b << " " << c << " " << d << " " << e << '\n';
	}
}