// 백준 알고리즘 스터디 7회차
// 문제 번호: 2468번
// 문제 이름: 안전영역
// 알고리즘: DFS
// 작성일: 24.03.07

#include <iostream>

using namespace std;

int n; // 배열 크기
int arr[101][101]; // 비 양 배열
bool visited[101][101]; // 방문 확인
int maxH = 0; // 최대 비 양
int result = 0;
int cnt = 0;

// 방향벡터
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };

void dfs(int y, int x);

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (maxH < arr[i][j]) {
				maxH = arr[i][j];
			}
		}
	}

	// 코드
	for (int i = 0; i <= maxH; i++) {
		cnt = 0;

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (arr[j][k] <= i) {
					visited[j][k] = true;
				}
				else {
					visited[j][k] = false;
				}
			}
		}

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (!visited[j][k]) {
					dfs(j, k);
					cnt++;
				}
			}
		}

		if (result < cnt) {
			result = cnt;
		}
	}

	cout << result;
}

void dfs(int y, int x) {
	visited[y][x] = true;

	for (int i = 0; i < 4; i++) {
		int ny = dy[i] + y;
		int nx = dx[i] + x;

		if (ny >= 0 && ny < n && nx >= 0 && nx < n) {
			if (!visited[ny][nx]) {
				dfs(ny, nx);
			}
		}
	}

}