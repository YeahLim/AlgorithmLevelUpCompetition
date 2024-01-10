// 백준 7576번 <토마토>
// 알고리즘 : 그래프 탐색, 너비우선탐색
#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	int M, N;
	cin >> M >> N;

	int days = -1;

	// 토마토 밭
	int tomato[1001][1001];
	// 방문 처리 배열
	int visited[1001][1001] = { 0 };

	// 방향 벡터 상하좌우
	int dx[4] = { 0,0,-1,1 };
	int dy[4] = { 1,-1,0,0 };

	// 반복 큐
	queue<pair<int, int>> q;

	// 입력부
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
