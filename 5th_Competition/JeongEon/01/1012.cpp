// 백준 알고리즘 스터디 5회차
// 문제 번호: 1012번
// 문제 이름: 유기농 배추
// 알고리즘: 깊이 우선 탐색
// 작성일: ~24.02.19

#include <iostream>
#include <vector>

using namespace std;

// 방향벡터
//			  오 왼 위 아래 
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int cnt = 0;	// 배추흰지렁이 개수
int M;	// 배추밭의 가로 길이
int N;	// 배추밭의 세로 길이
int K;	// 배추가 심어져있는 위치의 개수

void dfs(int** arr, bool** visited, int y, int x);


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	int T;	// 테스트 케이스 개수
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> M >> N >> K;
		cnt = 0;

		int** arr = new int* [M];	// 배추밭
		bool** visited = new bool* [M];	// 방문확인
		for (int j = 0; j < M; j++) {
			visited[j] = new bool[N];
			arr[j] = new int[N];
			for (int p = 0; p < N; p++) {
				visited[j][p] = false;
				arr[j][p] = 0;
			}
		}

		int x, y;	// 배추가 심어진 위치
		for (int j = 0; j < K; j++) {
			cin >> x >> y;
			arr[x][y] = 1;
		}

		for (int j = 0; j < M; j++) {
			for (int p = 0; p < N; p++) {
				if (arr[j][p] == 1 && visited[j][p] == false) {
					dfs(arr, visited, j, p);
					cnt++;
				}
			}
		}

		cout << cnt << '\n';
	}



	return 0;
}

void dfs(int** arr, bool** visited, int x, int y) {
	visited[x][y] = true;

	// 네 방향 확인
	for (int i = 0; i < 4; i++) {
		int nx = dx[i] + x;
		int ny = dy[i] + y;

		if (ny < 0 || nx < 0 || nx >= M || ny >= N) {
			continue;
		}

		if (arr[nx][ny] == 1 && visited[nx][ny] == false) {
			dfs(arr, visited, nx, ny);
		}
	}
}