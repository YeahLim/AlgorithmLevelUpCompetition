// 알고리즘 코딩 스터디 14회차
// SWEA D2
// 1974. 스도쿠 검증

#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int check_garosero(vector<int> sudoku[9]) {
	for (int i = 0; i < 9; i++) {
		bool check_garo_num[10];
		memset(check_garo_num, false, sizeof(check_garo_num));

		bool check_sero_num[10];
		memset(check_sero_num, false, sizeof(check_sero_num));

		for (int j = 0; j < 9; j++) {
			if (check_garo_num[sudoku[i][j]]) {
				return 0;
			}
			check_garo_num[sudoku[i][j]] = true;

			if (check_sero_num[sudoku[j][i]]) {
				return 0;
			}
			check_sero_num[sudoku[j][i]] = true;
		}
	}

	return 1;
}

int check_box(vector<int> sudoku[9]) {
	for (int k = 0; k < 9; k += 3) {
		for (int l = 0; l < 9; l += 3) {
			bool check_num[10];
			memset(check_num, false, sizeof(check_num));
			for (int i = k; i < k + 3; i++) {
				for (int j = l; j < l + 3; j++) {
					if (check_num[sudoku[i][j]]) {
						return 0;
					}
					check_num[sudoku[i][j]] = true;
				}
			}
		}
	}

	return 1;
}

int check_sudoku(vector<int> sudoku[9]) {
	if (check_garosero(sudoku) == 0) {
		return 0;
	}

	if (check_box(sudoku) == 0) {
		return 0;
	}

	return 1;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		vector<int> sudoku[9];
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				int input;
				cin >> input;
				sudoku[i].push_back(input);
			}
		}

		int result = check_sudoku(sudoku);

		cout << "#" << t << " ";
		cout << result << '\n';
	}

	return 0;
}