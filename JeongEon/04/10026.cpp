// 백준 알고리즘 스터디 8회차
// 문제 번호: 10026번
// 문제 이름: 적록색약
// 알고리즘: DFS
// 작성일: 24.03.13

#include <iostream>
#include <string.h>

using namespace std;

int N = 100;	// 그림 크기
char picture[100][100];	// 그림
bool visited_RGB[100][100] = { false };	// 비장애인 방문확인
bool visited_B[100][100] = { false };	// 적록생맹 방문확인

// 방향벡터	  상 하  좌  우
int dy[4] = { 1, -1,  0, 0 };
int dx[4] = { 0,  0, -1, 1 };

void Check_RGB(int y, int x);	// 비장애인 방문처리
void Check_B(int y, int x);		// 적록색맹 방문처리

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	cin >> N;

	string input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		for (int j = 0; j < N; j++) {
			picture[i][j] = input[j];
		}
	}

	// 코드
	memset(visited_RGB, false, sizeof(visited_RGB));
	memset(visited_B, false, sizeof(visited_B));

	int RGB = 0;	// 비장애인이 구분 가능한 색 블록 개수
	int B = 0;		// 적록색맹이 구분 가능한 색 블록 개수

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited_B[i][j]) {
				Check_B(i, j);
				B++;
			}

			if (!visited_RGB[i][j]) {
				Check_RGB(i, j);
				RGB++;
			}
		}
	}

	cout << RGB << " " << B;

	return 0;
}

void Check_RGB(int y, int x) {
	if (visited_RGB[y][x]) {
		return;
	}

	visited_RGB[y][x] = true;

	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= N || nx >= N) {
			continue;
		}

		if (picture[ny][nx] == picture[y][x]) {
			Check_RGB(ny, nx);
		}
	}
}

void Check_B(int y, int x) {
	if (visited_B[y][x]) {
		return;
	}

	visited_B[y][x] = true;

	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= N || nx >= N) {
			continue;
		}

		if (picture[y][x] == 'R' || picture[y][x] == 'G') {
			if (picture[ny][nx] == 'R' || picture[ny][nx] == 'G') {
				Check_B(ny, nx);
			}
		}
		else if (picture[ny][nx] == picture[y][x]) {	 // 파란색
			Check_B(ny, nx);
		}
	}
}