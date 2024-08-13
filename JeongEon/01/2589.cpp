#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int N, M;
int map[50][50];
int visited[50][50];

// 방향벡터 상 하 좌 우
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0 };

int BFS(int i, int j) {
	int max = 0;
	queue<pair<pair<int, int>, int>> q;
	q.push({ { i, j }, 0 });

	while (!q.empty()) {
		int y = q.front().first.first;
		int x = q.front().first.second;
		int cnt = q.front().second;
		q.pop();

		for (int k = 0; k < 4; k++) {
			int ny = y + dy[k];
			int nx = x + dx[k];

			if (ny < 0 || nx < 0 || ny >= N || nx >= M || map[ny][nx] == 0) {
				continue;
			}

			if (visited[ny][nx] == -1) {
				visited[ny][nx] = cnt + 1;
				q.push({ {ny, nx}, cnt + 1 });
				if (max < cnt + 1) {
					max = cnt + 1;
				}
			}
		}
	}

	return max;
}

int main(void) {
	// 입력
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			char input;
			cin >> input;
			if (input == 'L') {
				map[i][j] = 1;
			}
			else {
				map[i][j] = 0;
			}
		}
	}

	int result = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			memset(visited, -1, sizeof(visited));
			// 육지라면
			if (map[i][j] == 1) {
				visited[i][j] = 0;
				int maxi = BFS(i, j);
				result = max(result, maxi);
			}
		}
	}

	cout << result << endl;

	return 0;
}
