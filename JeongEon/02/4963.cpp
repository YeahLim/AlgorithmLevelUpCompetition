// 백준 알고리즘 스터디 7회차
// 문제 번호: 4963번
// 문제 이름: 섬의 개수
// 알고리즘: BFS
// 작성일: 24.03.04

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// 방향벡터)	  좌상 상 우상 우 우하  하 좌하 좌 
int dx[8] = { -1,  0,  1,  1,  1,  0, -1, -1 };
int dy[8] = { 1,  1,  1,  0, -1, -1, -1,  0 };

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (1) {
		// 입력
		int w;	// 지도의 너비	(0 <= w, h <= 50)
		int h;	// 지도의 높이
		cin >> w >> h;

		if (w == 0 && h == 0) {	// 무한 반복문 탈출
			break;
		}

		int map[51][51] = { -1 };	// 0 = 바다, 1 = 땅
		bool visited[51][51] = { false };	// 방문확인

		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				cin >> map[i][j];
			}
		}

		// 코드) 가로, 세로, 대각선으로 만나는 땅이 하나의 섬
		queue<pair<int, int>> q;	// 땅의 좌표 x, y
		int cnt = 0;
		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				if (!visited[i][j] && map[i][j] == 1) {
					q.push({ i, j });
					visited[i][j] = true;
					// bfs
					while (!q.empty()) {
						int y = q.front().first;
						int x = q.front().second;
						q.pop();

						for (int i = 0; i < 8; i++) {
							int ny = y + dy[i];
							int nx = x + dx[i];

							if (ny <= 0 || nx <= 0 || ny > h || nx > w) {	// 지도 범위를 넘어가면
								continue;
							}

							if (map[ny][nx] == 1 && !visited[ny][nx]) {
								q.push({ ny, nx });
								visited[ny][nx] = true;
							}
						}
					}
					cnt++;
				}
			}
		}

		// 출력) 섬의 개수
		cout << cnt << '\n';
	}

	return 0;
}