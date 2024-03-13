// ���� �˰��� ���͵� 8ȸ��
// ���� ��ȣ: 2573��
// ���� �̸�: ����
// �˰���: BFS, DFS
// �ۼ���: 24.03.12

#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

int N, M;	// �ϱ� ���� ���� ũ��
int map[300][300];	// �ϱ�
int ice = 1;	// ���� ����
bool visited[300][300] = { false };	// �湮Ȯ��

// ���⺤��   ��  ��  ��  ��
int dy[4] = { 1, -1,  0, 0 };
int dx[4] = { 0,  0, -1, 1 };

void Grobal_Warming();	// ���� �پ��
void Count(int y, int x);	// ���� ��� ���� ��

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}

	int year = 0;	// �ð� �帧
	while (1) {
		if (ice == 0) {
			cout << 0;
			break;
		}
		else if (ice == 1) {
			Grobal_Warming();
			memset(visited, false, sizeof(visited));
			ice = 0;
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					if (map[i][j] != 0) {
						if (!visited[i][j]) {
							visited[i][j] = true;
							Count(i, j);
							ice++;
						}
					}
				}
			}
		}
		else if (ice >= 2) {
			cout << year;
			break;
		}
		year++;
	}

	return 0;
}

void Grobal_Warming() {
	queue<pair<int, int>> q;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] != 0) {
				q.push({ i, j });
			}
		}
	}

	queue<pair<pair<int, int>, int>> melt;
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		int cnt = 0;
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= N || nx >= M) {
				continue;
			}

			if (map[ny][nx] == 0) {
				cnt++;
			}
		}
		melt.push({ {y,x}, cnt });
	}

	while (!melt.empty()) {
		int y = melt.front().first.first;
		int x = melt.front().first.second;
		int cnt = melt.front().second;
		melt.pop();

		while (cnt > 0) {
			if (map[y][x] == 0) {
				break;
			}
			map[y][x]--;
			cnt--;
		}
	}
}

void Count(int y, int x) {
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (map[ny][nx] != 0) {
			if (!visited[ny][nx]) {
				visited[ny][nx] = true;
				Count(ny, nx);
			}
		}
	}
}