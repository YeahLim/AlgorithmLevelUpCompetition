// 백준 알고리즘 스터디 7회차
// 문제 번호: 1388번
// 문제 이름: 바닥 장식
// 알고리즘: DFS
// 작성일: 24.03.07

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N;	// 세로 크기
int M;	// 가로 크기
char room[50][50];	// 방 바닥
bool visited[50][50] = { false };	// 방문확인
int cnt = 0;	// 나무 판자 개수

// 방향벡터
int dy[2] = { 1, 0 };
int dx[2] = { 0, 1 };

void width(int i, int j);
void length(int i, int j);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> room[i][j];
		}
	}

	// 코드
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (!visited[i][j]) {
				cnt++;
				if (room[i][j] == '-') {
					width(i, j);
				}

				if (room[i][j] == '|') {
					length(i, j);
				}
			}
		}
	}

	cout << cnt;

	return 0;
}

void width(int i, int j) {
	if (i < 0 || j < 0 || i >= N || j >= M) {
		return;
	}

	if (room[i][j] == '|') {
		return;
	}

	if (room[i][j] == '-') {
		visited[i][j] = true;
		width(i, j + 1);
	}
}

void length(int i, int j) {
	if (i < 0 || j < 0 || i >= N || j >= M) {
		return;
	}

	if (room[i][j] == '-') {
		return;
	}

	if (room[i][j] == '|') {
		visited[i][j] = true;
		length(i + 1, j);
	}
}