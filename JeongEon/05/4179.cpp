// 백준 알고리즘 스터디 8회차
// 문제 번호: 4179번
// 문제 이름: 불!
// 알고리즘: BFS
// 작성일: 24.03.13

#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

int R = 1000, C = 1000;	// 미로의 가로 세로 크기
int maze[1000][1000] = { 0 };	// 미로
queue<pair<int, int>> J;	// 지훈이 위치
int Jihoon[1000][1000] = { 0 };
queue<pair<int, int>> F;	// 불 위치
int fire[1000][1000] = { 0 };
priority_queue<int, vector<int>, greater<>> result;	// 시간 저장

// 방향벡터   상  하  좌  우
int dy[4] = { 1, -1,  0, 0 };
int dx[4] = { 0,  0, -1, 1 };

void Fire();	// 불이 번짐
void Move();	// 지훈이가 이동함
bool Can_escape();	// 탈출할수있는가 (성공 = true, 실패 = false)

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	cin >> R >> C;

	char input;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> input;
			if (input == '#') {	// 벽
				maze[i][j] = 1;
			}
			else if (input == '.') {	// 길
				maze[i][j] = 0;
			}
			else if (input == 'J') {	// 지훈이 위치
				if (i == 0 || i == R - 1) {
					if (j >= 0 && j < C) {
						cout << 1;
						return 0;
					}
				}

				if (j == 0 || j == C - 1) {
					if (i >= 0 && i < R) {
						cout << 1;
						return 0;
					}
				}

				maze[i][j] = 0;
				J.push({ i, j });
			}
			else if (input == 'F') {	// 불 위치
				maze[i][j] = 2;
				F.push({ i, j });
			}
		}
	}

	// 코드
	Fire();
	Move();

	if (Can_escape()) {
		cout << result.top();
	}
	else {
		cout << "IMPOSSIBLE";
	}

	return 0;
}

void Fire() {
	memset(fire, 0, sizeof(fire));

	while (!F.empty()) {
		int y = F.front().first;
		int x = F.front().second;
		F.pop();


		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			// 범위 넘어가면
			if (ny < 0 || nx < 0 || ny >= R || nx >= C) {
				continue;
			}

			if (maze[ny][nx] == 0) {
				if (fire[ny][nx] == 0 || fire[ny][nx] > fire[y][x] + 1) {
					fire[ny][nx] = fire[y][x] + 1;
					F.push({ ny,nx });
				}
			}
		}
	}
}

void Move() {
	memset(Jihoon, 0, sizeof(Jihoon));

	while (!J.empty()) {
		int y = J.front().first;
		int x = J.front().second;
		J.pop();

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			// 범위 넘어가면
			if (ny < 0 || nx < 0 || ny >= R || nx >= C) {
				continue;
			}

			if (maze[ny][nx] == 0) {
				if (Jihoon[ny][nx] == 0 || Jihoon[ny][nx] > Jihoon[y][x] + 1) {
					Jihoon[ny][nx] = Jihoon[y][x] + 1;
					J.push({ ny,nx });
				}
			}
		}
	}
}

bool Can_escape() {
	for (int i = 0; i < R; i++) {
		if (Jihoon[i][0] != 0) {
			if (fire[i][0] == 0 || Jihoon[i][0] < fire[i][0]) {
				result.push(Jihoon[i][0] + 1);
			}
		}
		if (Jihoon[i][C - 1] != 0) {
			if (fire[i][C - 1] == 0 || Jihoon[i][C - 1] < fire[i][C - 1]) {
				result.push(Jihoon[i][C - 1] + 1);
			}
		}
	}

	for (int i = 0; i < C; i++) {
		if (Jihoon[0][i] != 0) {
			if (fire[0][i] == 0 || Jihoon[0][i] < fire[0][i]) {
				result.push(Jihoon[0][i] + 1);
			}
		}

		if (Jihoon[R - 1][i] != 0) {
			if (fire[R - 1][i] == 0 || Jihoon[R - 1][i] < fire[R - 1][i]) {
				result.push(Jihoon[R - 1][i] + 1);
			}
		}
	}

	if (!result.empty()) {
		return true;
	}

	return false;
}