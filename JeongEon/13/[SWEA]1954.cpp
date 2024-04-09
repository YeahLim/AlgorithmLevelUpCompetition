// 제 12회 알고리즘 스터디
// SWEA D2
// 문제명: 달팽이 숫자
// 문제번호: 1954번

#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

// 방향벡터
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;

		int arr[10][10] = { 0 };
		memset(arr, 0, sizeof(arr));
		arr[0][0] = 1;
		int cnt = 2;
		int x = 0;
		int y = 0;
		int dir = 0;
		while (N * N >= cnt) {
			int nx = x + dx[dir];
			int ny = y + dy[dir];

			// 범위를 넘어섰거나 이미 수가 있을 때
			if (ny < 0 || nx < 0 || ny >= N || nx >= N || arr[ny][nx] > 0) {
				dir += 1;
				if (dir == 4) {
					dir = 0;
				}
				continue;
			}

			arr[ny][nx] = cnt;
			x = nx;
			y = ny;
			cnt++;
		}

		cout << "#" << i + 1 << '\n';
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				cout << arr[j][k] << " ";
			}
			cout << '\n';
		}
	}

	return 0;
}