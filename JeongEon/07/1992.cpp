// ���� �˰��� ���͵� 8ȸ��
// ���� ��ȣ: 1992��
// ���� �̸�: ����Ʈ��
// �˰���: 
// �ۼ���: 24.03.13

#include <iostream>
#include <string>

using namespace std;

int N;	// ũ��
int video[64][64];

void solve(int y, int x, int size);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	cin >> N;

	string input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		for (int j = 0; j < N; j++) {
			video[i][j] = input[j] - '0';
		}
	}

	// �ڵ�
	solve(0, 0, N);

	return 0;
}

void solve(int y, int x, int size) {
	for (int i = y; i < y + size; i++) {
		for (int j = x; j < x + size; j++) {
			if (video[i][j] != video[y][x]) {
				cout << "(";
				solve(y, x, size / 2);
				solve(y, x + size / 2, size / 2);
				solve(y + size / 2, x, size / 2);
				solve(y + size / 2, x + size / 2, size / 2);
				cout << ")";
				return;
			}
		}
	}

	cout << video[y][x];
}