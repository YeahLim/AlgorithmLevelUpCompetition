// 백준 알고리즘 스터디 5회차
// 문제 번호: 2178번
// 문제 이름: 미로 탐색
// 알고리즘: 너비 우선 탐색
// 작성일: ~24.02.20

#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

// 방향벡터
//			  오 왼 위 아래 
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };
int N, M;	// 미로 크기

void bfs(vector<int>* maze, vector<int>* visited, int y, int x);


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	cin >> N >> M;

	vector<int>* maze = new vector<int>[N];	// 미로
	vector<int>* visited = new vector<int>[N];	// 방문확인
	string input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		for (int j = 0; j < M; j++) {
			maze[i].push_back(input[j] - '0');
			visited[i].push_back(0);
		}
	}

	bfs(maze, visited, 0, 0);

	cout << visited[N - 1][M - 1];

	delete[] maze;
	delete[] visited;

	return 0;
}

void bfs(vector<int>* maze, vector<int>* visited, int y, int x) {
	queue<pair<int, int>> Q;
	Q.push({ y, x });
	visited[y][x] = 1;

	while (!Q.empty()) {
		int ny = Q.front().first;
		int nx = Q.front().second;
		Q.pop();

		for (int i = 0; i < 4; i++) {
			int nny = dy[i] + ny;
			int nnx = dx[i] + nx;

			if (nny < 0 || nnx < 0 || nny >= N || nnx >= M) {	// 미로 크기를 벗어다면
				continue;
			}

			if (maze[nny][nnx] == 0) {	// 이동할 수 없는 곳이라면
				continue;
			}

			if (maze[nny][nnx] == 1 && visited[nny][nnx] == 0) {
				Q.push({ nny, nnx });
				visited[nny][nnx] = visited[ny][nx] + 1;
			}
		}
	}
}