// ���� �˰��� ���͵� 8ȸ��
// ���� ��ȣ: 10026��
// ���� �̸�: ���ϻ���
// �˰���: DFS
// �ۼ���: 24.03.13

#include <iostream>
#include <string.h>

using namespace std;

int N = 100;	// �׸� ũ��
char picture[100][100];	// �׸�
bool visited_RGB[100][100] = { false };	// ������� �湮Ȯ��
bool visited_B[100][100] = { false };	// ���ϻ��� �湮Ȯ��

// ���⺤��	  �� ��  ��  ��
int dy[4] = { 1, -1,  0, 0 };
int dx[4] = { 0,  0, -1, 1 };

void Check_RGB(int y, int x);	// ������� �湮ó��
void Check_B(int y, int x);		// ���ϻ��� �湮ó��

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
			picture[i][j] = input[j];
		}
	}

	// �ڵ�
	memset(visited_RGB, false, sizeof(visited_RGB));
	memset(visited_B, false, sizeof(visited_B));

	int RGB = 0;	// ��������� ���� ������ �� ��� ����
	int B = 0;		// ���ϻ����� ���� ������ �� ��� ����

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited_B[i][j]) {
				Check_B(i, j);
				B++;
			}

			if (!visited_RGB[i][j]) {
				Check_RGB(i, j);
				RGB++;
			}
		}
	}

	cout << RGB << " " << B;

	return 0;
}

void Check_RGB(int y, int x) {
	if (visited_RGB[y][x]) {
		return;
	}

	visited_RGB[y][x] = true;

	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= N || nx >= N) {
			continue;
		}

		if (picture[ny][nx] == picture[y][x]) {
			Check_RGB(ny, nx);
		}
	}
}

void Check_B(int y, int x) {
	if (visited_B[y][x]) {
		return;
	}

	visited_B[y][x] = true;

	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= N || nx >= N) {
			continue;
		}

		if (picture[y][x] == 'R' || picture[y][x] == 'G') {
			if (picture[ny][nx] == 'R' || picture[ny][nx] == 'G') {
				Check_B(ny, nx);
			}
		}
		else if (picture[ny][nx] == picture[y][x]) {	 // �Ķ���
			Check_B(ny, nx);
		}
	}
}