// 알고리즘 코딩 스터디 14회차
// SWEA D3
// 1209. [S/W 문제해결 기본] 2일차 - Sum

#include <iostream>
#include <vector>

using namespace std;

int calculate(vector<int> arr[100]) {
	int result = 0;
	int Degak_left = 0;
	int Degak_right = 0;
	for (int i = 0; i < 100; i++) {
		Degak_right += arr[i][i];
		Degak_left += arr[i][100 - i];
		int sum_garo = 0;
		int sum_sero = 0;
		for (int j = 0; j < 100; j++) {
			sum_garo += arr[i][j];
			sum_sero += arr[j][i];
		}
		if (result < sum_garo) {
			result = sum_garo;
		}

		if (result < sum_sero) {
			result = sum_sero;
		}
	}

	if (result < Degak_left) {
		result = Degak_left;
	}

	if (result < Degak_right) {
		result = Degak_right;
	}

	return result;
}

int main() {
	int T = 10;
	int num;

	for (int t = 1; t <= T; t++) {
		cin >> num;
		vector<int> arr[100];
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				int input;
				cin >> input;
				arr[i].push_back(input);
			}
		}

		int result = calculate(arr);

		cout << "#" << t << " ";
		cout << result << '\n';
	}

	return 0;
}