// 백준 알고리즘 스터디 7회차
// 문제 번호: 2206번
// 문제 이름: 벽 부수고 이동하기
// 알고리즘: BFS
// 작성일: 24.03.08

#include <iostream>
#include <string>
#include <queue>

using namespace std;

int N;	// 맵 세로
int M;	// 맵 가로
int map[1001][1001];	// 맵
int visited[1001][1001][2] = { 0 };	// 방문확인 + 최단 거리

// 방향벡터
int dx[4] = { -1, 0, 1,  0 };
int dy[4] = { 0, 1, 0, -1 };

int bfs();

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
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

			// 범위를 내라면!
			if (nx >= 1 && nx <= M && ny >= 1 && ny <= N) {
				// 벽이 없다면!
				if (map[ny][nx] == 0 && visited[ny][nx][wall] == 0) {
					visited[ny][nx][wall] = visited[y][x][wall] + 1;
					q.push({ { ny, nx }, wall });
				}

				// 벽이 있고 아직 안 부셨다면!
				if (map[ny][nx] == 1 && wall == 0) {
					visited[ny][nx][wall + 1] = visited[y][x][wall] + 1;
					q.push({ { ny, nx }, wall + 1 });
				}
			}
		}
	}

	return -1;
}