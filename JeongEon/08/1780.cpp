// ���� �˰��� ���͵� 8ȸ��
// ���� ��ȣ: 1780��
// ���� �̸�: ������ ����
// �˰���: 
// �ۼ���: 24.03.13

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N;	// ũ��
int paper[2187][2187];	// 3^7 = 2187
vector<int> result;

void solve(int y, int x, int size);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> paper[i][j];
		}
	}

	// �ڵ�
	result.push_back(0);
	result.push_back(0);
	result.push_back(0);

	solve(0, 0, N);

	cout << result[0] << '\n';
	cout << result[1] << '\n';
	cout << result[2] << '\n';

	return 0;
}

void solve(int y, int x, int size) {
	bool same = true;
	for (int i = y; i < y + size; i++) {
		for (int j = x; j < x + size; j++) {
			if (paper[i][j] != paper[y][x]) {
				same = false;
				break;
			}
		}
		if (!same) {
			break;
		}
	}

	if (!same) {
		solve(y, x, size / 3); // 1��
		solve(y + size / 3, x, size / 3); // 2��
		solve(y + size / 3 + size / 3, x, size / 3); // 3��
		solve(y, x + size / 3, size / 3); // 4��
		solve(y + size / 3, x + size / 3, size / 3); // 5��
		solve(y + size / 3 + size / 3, x + size / 3, size / 3); // 6��
		solve(y, x + size / 3 + size / 3, size / 3); // 7��
		solve(y + size / 3, x + size / 3 + size / 3, size / 3); // 8��
		solve(y + size / 3 + size / 3, x + size / 3 + size / 3, size / 3); // 9��
	}
	else {
		if (paper[y][x] == -1) {
			result[0]++;
		}
		else if (paper[y][x] == 0) {
			result[1]++;
		}
		else {
			result[2]++;
		}
	}
}