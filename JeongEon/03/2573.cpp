// 백준 알고리즘 스터디 8회차
// 문제 번호: 2573번
// 문제 이름: 빙산
// 알고리즘: BFS, DFS
// 작성일: 24.03.12

#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

int N, M;	// 북극 세로 가로 크기
int map[300][300];	// 북극
int ice = 1;	// 빙하 개수
bool visited[300][300] = { false };	// 방문확인

// 방향벡터   상  하  좌  우
int dy[4] = { 1, -1,  0, 0 };
int dx[4] = { 0,  0, -1, 1 };

void Grobal_Warming();	// 빙산 줄어듦
void Count(int y, int x);	// 빙하 덩어리 개수 셈

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}

	int year = 0;	// 시간 흐름
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