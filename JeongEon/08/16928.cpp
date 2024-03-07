// 백준 알고리즘 스터디 7회차
// 문제 번호: 16928번
// 문제 이름: 뱀과 사다리 게임
// 알고리즘: BFS
// 작성일: 24.03.08

#include <iostream>
#include <queue>

using namespace std;

int N;	// 사다리 수
int M;	// 뱀의 수
int board[101] = { 0 };	//	게임 보드
bool visited[101] = { false };	//	방문확인

int bfs();

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	visited[0] = true;

	cin >> N >> M;

	int x, y;
	// 사다리
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		board[x] = y;
	}

	// 뱀
	for (int i = 0; i < M; i++) {
		cin >> x >> y;
		board[x] = y;
	}

	cout << bfs();

	return 0;
}

int bfs() {
	queue<pair<int, int>> q;
	q.push({ 1, 0 });
	visited[1] = true;

	while (!q.empty()) {
		int x = q.front().first;
		int cnt = q.front().second;
		q.pop();

		for (int i = 1; i <= 6; i++) {
			int nx = x + i;

			if (nx <= 0 || nx > 100) {
				continue;
			}

			if (nx == 100) {
				return cnt + 1;
			}

			while (board[nx] != 0) {
				nx = board[nx];
			}
			if (!visited[nx]) {
				q.push({ nx, cnt + 1 });
				visited[nx] = true;
			}
		}
	}

	return 0;
}