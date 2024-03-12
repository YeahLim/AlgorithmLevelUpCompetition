// 백준 알고리즘 스터디 8회차
// 문제 번호: 14502번
// 문제 이름: 연구소
// 알고리즘: BFS
// 작성일: 24.03.12

#include <iostream>
#include <queue>

using namespace std;

int N, M;	// 연구소 세로, 가로 크기
int lab[8][8];	// 연구소
int map[8][8];	// 복사 맵
int MAX_SAFETY = 0;	// 최대 안전지대

// 방향벡터	 상  하  좌  우
int dy[4] = { 1, -1,  0, 0 };
int dx[4] = { 0,  0, -1, 1 };

void copy_lab();	// 맵 복사
void wall(int cnt);	// 벽 세우기
void Virus();	// 바이러스 퍼트리기

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> lab[i][j];
		}
	}

	wall(0);

	cout << MAX_SAFETY;

	return 0;
}

void copy_lab() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			map[i][j] = lab[i][j];
		}
	}
}

void wall(int cnt) {
	if (cnt == 3) {
		copy_lab();
		Virus();
		return;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (lab[i][j] == 0) {
				lab[i][j] = 1;	// 벽 세움
				wall(cnt + 1);
				lab[i][j] = 0;	// 초기화
			}
		}
	}
}

void Virus() {
	queue<pair<int, int>> q;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] == 2) {
				q.push({ i, j });
			}
		}
	}

	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= N || nx >= M) {
				continue;
			}

			if (map[ny][nx] == 0) {
				map[ny][nx] = 2;
				q.push({ ny, nx });
			}
		}
	}

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] == 0) {
				cnt++;
			}
		}
	}

	if (MAX_SAFETY < cnt) {
		MAX_SAFETY = cnt;
	}
}