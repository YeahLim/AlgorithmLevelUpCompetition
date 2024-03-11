// 백준 알고리즘 스터디 8회차
// 문제 번호: 13549번
// 문제 이름: 숨바꼭질 3
// 알고리즘: BFS
// 작성일: 24.03.11

#include <iostream>
#include <vector>
#include <queue>
#include <string.h>

int dx[2] = { 1, -1 };

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;	// 수빈이 위치
	int K;	// 동생 위치
	cin >> N >> K;

	int visited[100001];
	memset(visited, -1, sizeof(visited));

	queue<pair<int, int>> q;
	q.push({ N, 0 });
	int result = 100001;

	while (!q.empty()) {
		int x = q.front().first;
		int sec = q.front().second;
		q.pop();

		if (x == K) {
			if (result > sec) {
				result = sec;
			}
			continue;
		}

		for (int i = 0; i < 3; i++) {
			int nx = x;
			if (i == 2) {
				nx *= 2;
			}
			else {
				nx += dx[i];
			}

			if (nx < 0 || nx > 100000) {
				continue;
			}

			if (i == 2 && (visited[nx] > sec || visited[nx] == -1)) {
				q.push({ nx, sec });
				visited[nx] = sec;
			}
			else if (visited[nx] > sec + 1 || visited[nx] == -1) {
				q.push({ nx, sec + 1 });
				visited[nx] = sec + 1;
			}
		}
	}

	cout << result;

	return 0;
}