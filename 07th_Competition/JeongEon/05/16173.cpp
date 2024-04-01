// ���� �˰��� ���͵� 7ȸ��
// ���� ��ȣ: 16173��
// ���� �̸�: ������ �f��(Small) 
// �˰���: BFS
// �ۼ���: 24.03.06

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool bfs();

int N;		// ���� ������ ũ�� (2 <= N <= 3)
int map[3][3];	// �������� ����(��)
bool visited[3][3] = { false };

// ���⺤��	������, �Ʒ�
int dx[2] = { 1, 0 };
int dy[2] = { 0, 1 };


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
		}
	}

	bool result = bfs();

	if (result) {
		cout << "HaruHaru";
	}
	else {
		cout << "Hing";
	}

}

bool bfs() {
	queue<pair<int, int>> q;
	q.push({ 0 ,0 });
	visited[0][0] = true;

	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		if (map[y][x] == -1) {
			return true;
		}

		int move = map[y][x];

		for (int i = 0; i < 2; i++) {
			int ny = dy[i] * move + y;
			int nx = dx[i] * move + x;

			if (ny < 0 || nx < 0 || ny >= N || nx >= N) {
				continue;
			}

			if (!visited[ny][nx]) {
				q.push({ ny, nx });
				visited[ny][nx] = true;
			}
		}
	}

	return false;
}