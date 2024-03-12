// ���� �˰��� ���͵� 8ȸ��
// ���� ��ȣ: 14502��
// ���� �̸�: ������
// �˰���: BFS
// �ۼ���: 24.03.12

#include <iostream>
#include <queue>

using namespace std;

int N, M;	// ������ ����, ���� ũ��
int lab[8][8];	// ������
int map[8][8];	// ���� ��
int MAX_SAFETY = 0;	// �ִ� ��������

// ���⺤��	 ��  ��  ��  ��
int dy[4] = { 1, -1,  0, 0 };
int dx[4] = { 0,  0, -1, 1 };

void copy_lab();	// �� ����
void wall(int cnt);	// �� �����
void Virus();	// ���̷��� ��Ʈ����

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> lab[i][j];
		}
	}

	wall(0);

	cout << MAX_SAFETY;

	return 0;
}

void copy_lab() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			map[i][j] = lab[i][j];
		}
	}
}

void wall(int cnt) {
	if (cnt == 3) {
		copy_lab();
		Virus();
		return;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (lab[i][j] == 0) {
				lab[i][j] = 1;	// �� ����
				wall(cnt + 1);
				lab[i][j] = 0;	// �ʱ�ȭ
			}
		}
	}
}

void Virus() {
	queue<pair<int, int>> q;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] == 2) {
				q.push({ i, j });
			}
		}
	}

	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= N || nx >= M) {
				continue;
			}

			if (map[ny][nx] == 0) {
				map[ny][nx] = 2;
				q.push({ ny, nx });
			}
		}
	}

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] == 0) {
				cnt++;
			}
		}
	}

	if (MAX_SAFETY < cnt) {
		MAX_SAFETY = cnt;
	}
}