// <����>
// ������ȣ: 2580��
// �����̸�: ������
// �˰���: ��Ʈ��ŷ
// ������ ������: 24.02.08

#include <iostream>
#include <vector>

using namespace std;

void sudoku(int pos);
bool check(int col, int row, int num);
void print();

int arr[9][9];	// ������
int zero;	// 0�� ���� ����
vector<pair<int, int>> v;	// 0�� ��ġ ����
bool out = false;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// �Էº�
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
		if (arr[col][i] == num) {	// ���� �࿡ num�� �����ϴ� �� Ȯ��
			return false;
		}
		if (arr[i][row] == num) {	// ���� ���� num�� �����ϴ� �� Ȯ��
			return false;
		}
	}

	// ���� �ڽ� ���� num�� �����ϴ� �� Ȯ��
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