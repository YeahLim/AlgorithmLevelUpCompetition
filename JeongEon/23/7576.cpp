// ���� 7576�� <�丶��>
// �˰��� : �׷��� Ž��, �ʺ�켱Ž��
#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	int M, N;
	cin >> M >> N;

	int days = -1;

	// �丶�� ��
	int tomato[1001][1001];
	// �湮 ó�� �迭
	int visited[1001][1001] = { 0 };

	// ���� ���� �����¿�
	int dx[4] = { 0,0,-1,1 };
	int dy[4] = { 1,-1,0,0 };

	// �ݺ� ť
	queue<pair<int, int>> q;

	// �Էº�
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> tomato[i][j];
			visited[i][j] = -1;

			if (tomato[i][j] == 1) {
				q.push({ i,j });
				visited[i][j]++;
			}
		}
	}

	// BFS
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && ny >= 0 && N > ny && M > nx && visited[ny][nx] == -1 && tomato[ny][nx] == 0) {
				q.push({ ny,nx });
				visited[ny][nx] = visited[y][x] + 1;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (days <= visited[i][j]) {
				days = visited[i][j];
			}
			if (tomato[i][j] == 0 && visited[i][j] == -1) {
				days = -1;
				cout << days << "\n";
				return 0;
			}
		}
	}

	cout << days << "\n";

	return 0;
}
