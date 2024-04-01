// ���� �˰��� ���͵� 7ȸ��
// ���� ��ȣ: 2206��
// ���� �̸�: �� �μ��� �̵��ϱ�
// �˰���: BFS
// �ۼ���: 24.03.08

#include <iostream>
#include <string>
#include <queue>

using namespace std;

int N;	// �� ����
int M;	// �� ����
int map[1001][1001];	// ��
int visited[1001][1001][2] = { 0 };	// �湮Ȯ�� + �ִ� �Ÿ�

// ���⺤��
int dx[4] = { -1, 0, 1,  0 };
int dy[4] = { 0, 1, 0, -1 };

int bfs();

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	cin >> N >> M;

	string input;
	for (int i = 1; i <= N; i++) {
		cin >> input;
		for (int j = 1; j <= M; j++) {
			map[i][j] = input[j - 1] - '0';
		}
	}

	cout << bfs();

	return 0;
}

int bfs() {
	queue <pair<pair<int, int>, int>> q;
	q.push({ { 1, 1 }, 0 });
	visited[1][1][0] = 1;

	while (!q.empty()) {
		int y = q.front().first.first;
		int x = q.front().first.second;
		int wall = q.front().second;
		q.pop();

		if (y == N && x == M) {
			return visited[y][x][wall];
		}

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			// ������ �����!
			if (nx >= 1 && nx <= M && ny >= 1 && ny <= N) {
				// ���� ���ٸ�!
				if (map[ny][nx] == 0 && visited[ny][nx][wall] == 0) {
					visited[ny][nx][wall] = visited[y][x][wall] + 1;
					q.push({ { ny, nx }, wall });
				}

				// ���� �ְ� ���� �� �μ̴ٸ�!
				if (map[ny][nx] == 1 && wall == 0) {
					visited[ny][nx][wall + 1] = visited[y][x][wall] + 1;
					q.push({ { ny, nx }, wall + 1 });
				}
			}
		}
	}

	return -1;
}