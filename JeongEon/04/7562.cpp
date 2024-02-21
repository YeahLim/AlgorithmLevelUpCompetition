// 백준 알고리즘 스터디 5회차
// 문제 번호: 7562번
// 문제 이름: 나이트의 이동
// 알고리즘: 너비 우선 탐색
// 작성일: ~24.02.21

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int T;	// 테스트 케이스 개수
int I;	// 체스판 한 변의 길이

// 나이트가 움직이는 방향벡터
int dx[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int dy[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };

int bfs(vector<bool>* visited, vector<int>* arr, int y, int x);

int now_y, now_x;	// 현재 나이트 위치
int target_y, target_x;	// 나이트 도착 위치

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> I;
		vector<bool>* visited = new vector<bool>[I];	//	 방문확인
		vector<int>* arr = new vector<int>[I];	// 횟수 측정
		for (int i = 0; i < I; i++) {
			for (int j = 0; j < I; j++) {
				visited[i].push_back(false);
				arr[i].push_back(0);
			}
		}

		cin >> now_y >> now_x;
		cin >> target_y >> target_x;

		cout << bfs(visited, arr, now_y, now_x) << '\n';
	}

	return 0;
}

int bfs(vector<bool>* visited, vector<int>* arr, int y, int x) {
	queue<pair<int, int>> q;
	q.push({ y, x });
	visited[y][x] = true;
	int cnt;

	while (!q.empty()) {
		int ny = q.front().first;
		int nx = q.front().second;
		q.pop();

		if (ny == target_y && nx == target_x) {
			cnt = arr[ny][nx];
			break;
		}

		for (int i = 0; i < 8; i++) {
			int nny = dy[i] + ny;
			int nnx = dx[i] + nx;

			if (nny < 0 || nnx < 0 || nny >= I || nnx >= I) {
				continue;
			}

			if (visited[nny][nnx] == false) {
				q.push({ nny, nnx });
				visited[nny][nnx] = true;
				arr[nny][nnx] = arr[ny][nx] + 1;
			}
		}
	}

	return cnt;
}