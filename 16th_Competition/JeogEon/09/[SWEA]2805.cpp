// 코테 알고리즘 스터디 16회차
// SWEA D3
// 2805. 농작물 수확하기

#include <iostream>
#include <string>
#include <cmath>

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

		int** arr = new int* [N];
		for (int i = 0; i < N; i++) {
			arr[i] = new int[N];
			string input;
			cin >> input;
			for (int j = 0; j < N; j++) {
				arr[i][j] = input[j] - '0';
			}
		}

		int result = 0;
		int flag = floor(N / 2);
		for (int i = 0; i < floor(N / 2 + 0.5); i++) {
			for (int j = flag; j >= flag - i; j--) {
				result += arr[j][i];
				result += arr[j][N - i - 1];
			}

			for (int j = flag + 1; j <= flag + i; j++) {
				result += arr[j][i];
				result += arr[j][N - i - 1];
			}
		}

		for (int i = 0; i < N; i++) {
			result += arr[i][flag];
		}

		for (int i = 0; i < N; i++) {
			delete[] arr[i];
		}
		delete[] arr;

		cout << "#" << t << " ";
		cout << result << '\n';
	}
}