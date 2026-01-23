// <백준>
// 문제번호: 2580번
// 문제이름: 스도쿠
// 알고리즘: 백트레킹
// 마지막 수정일: 24.02.08

#include <iostream>
#include <vector>

using namespace std;

void sudoku(int pos);
bool check(int col, int row, int num);
void print();

int arr[9][9];	// 스도쿠
int zero;	// 0인 숫자 개수
vector<pair<int, int>> v;	// 0인 위치 저장
bool out = false;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 입력부
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 0) {
				v.push_back({ i, j });
			}
		}
	}

	zero = v.size();

	sudoku(0);

	return 0;
}

void sudoku(int pos) {
	if (out == true) {
		return;
	}

	if (pos == zero) {
		print();
		out = true;
	}
	else {
		for (int i = 1; i <= 9; i++) {
			if (check(v[pos].first, v[pos].second, i)) {
				arr[v[pos].first][v[pos].second] = i;
				sudoku(pos + 1);
				arr[v[pos].first][v[pos].second] = 0;
			}
		}

	}
}

bool check(int col, int row, int num) {
	for (int i = 0; i < 9; i++) {
		if (arr[col][i] == num) {	// 같은 행에 num이 존재하는 지 확인
			return false;
		}
		if (arr[i][row] == num) {	// 같은 열에 num이 존재하는 지 확인
			return false;
		}
	}

	// 같은 박스 내에 num이 존재하는 지 확인
	int box_x = (col / 3) * 3;
	int box_y = (row / 3) * 3;
	for (int i = box_x; i < box_x + 3; i++) {
		for (int j = box_y; j < box_y + 3; j++) {
			if (arr[i][j] == num) {
				return false;
			}
		}
	}

	return true;
}

void print() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 8; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << arr[i][8] << '\n';
	}
}