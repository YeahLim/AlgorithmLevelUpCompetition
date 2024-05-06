// 코테 스터디 15회차
// SWEA D3
// 1215. [S/W 문제해결 기본] 3일차 - 회문1

#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

int N;
char arr[8][8];

int Sero() {
	int result = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j <= 8 - N; j++) {
			stack<char> check_sero;
			bool palindrome_sero = true;
			for (int k = 0; k < floor(N / 2); k++) {
				check_sero.push(arr[j + k][i]);
			}

			for (int k = N - floor(N / 2); k < N; k++) {
				if (check_sero.top() != arr[j + k][i]) {
					palindrome_sero = false;
					break;
				}
				check_sero.pop();
			}

			if (palindrome_sero) {
				result++;
			}
		}
	}

	return result;
}

int Garo() {
	int result = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j <= 8 - N; j++) {
			stack<char> check_garo;
			bool palindrome_garo = true;
			for (int k = 0; k < floor(N / 2); k++) {
				check_garo.push(arr[i][j + k]);
			}

			for (int k = N - floor(N / 2); k < N; k++) {
				if (check_garo.top() != arr[i][j + k]) {
					palindrome_garo = false;
					break;
				}
				check_garo.pop();
			}

			if (palindrome_garo) {
				result++;
			}
		}
	}

	return result;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 10;
	// cin >> T;

	for (int t = 1; t <= T; t++) {
		cin >> N;

		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cin >> arr[i][j];
			}
		}

		int garo = Garo();
		int sero = Sero();

		int result = garo + sero;

		cout << "#" << t << " ";
		cout << result << '\n';
	}

	return 0;
}
