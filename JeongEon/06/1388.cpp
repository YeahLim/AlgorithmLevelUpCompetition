// ���� �˰��� ���͵� 7ȸ��
// ���� ��ȣ: 1388��
// ���� �̸�: �ٴ� ���
// �˰���: DFS
// �ۼ���: 24.03.07

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N;	// ���� ũ��
int M;	// ���� ũ��
char room[50][50];	// �� �ٴ�
bool visited[50][50] = { false };	// �湮Ȯ��
int cnt = 0;	// ���� ���� ����

// ���⺤��
int dy[2] = { 1, 0 };
int dx[2] = { 0, 1 };

void width(int i, int j);
void length(int i, int j);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> room[i][j];
		}
	}

	// �ڵ�
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (!visited[i][j]) {
				cnt++;
				if (room[i][j] == '-') {
					width(i, j);
				}

				if (room[i][j] == '|') {
					length(i, j);
				}
			}
		}
	}

	cout << cnt;

	return 0;
}

void width(int i, int j) {
	if (i < 0 || j < 0 || i >= N || j >= M) {
		return;
	}

	if (room[i][j] == '|') {
		return;
	}

	if (room[i][j] == '-') {
		visited[i][j] = true;
		width(i, j + 1);
	}
}

void length(int i, int j) {
	if (i < 0 || j < 0 || i >= N || j >= M) {
		return;
	}

	if (room[i][j] == '-') {
		return;
	}

	if (room[i][j] == '|') {
		visited[i][j] = true;
		length(i + 1, j);
	}
}