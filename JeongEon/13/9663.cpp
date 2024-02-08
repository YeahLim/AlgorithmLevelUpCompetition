// <백준>
// 문제번호: 9663번
// 문제이름: N-Queen
// 알고리즘: 백트레킹
// 마지막 수정일: 24.02.07

#include <iostream>

using namespace std;

//void nqueen(int x);
//bool check(int col, int row);
void queen(int x);
int col[16];
int n;
int ans = 0;

//bool arr[16][16] = { false };
//int N;	// 퀸 N개
//int sum = 0;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	queen(0);
	//nqueen(1);

	cout << ans;
	//cout << sum;

	return 0;
}

//void nqueen(int x) {
//	if (x > N) {
//		sum++;
//	}
//	else {
//		for (int i = 1; i <= N; i++) {
//			arr[x][i] = true;
//			if (check(x, i)) {
//				nqueen(x + 1);
//			}
//			arr[x][i] = false;
//		}
//	}
//}

void queen(int x) {
	if (n == x) {
		ans++; // 카운트 +1
	}
	else {
		for (int i = 0; i < n; i++) {
			col[x] = i; // 퀸의 위치를 정함
			bool can = true;
			for (int j = 0; j < x; j++) {
				if (col[x] == col[j] || abs(col[x] - col[j]) == x - j) {
					//정한 위치의 퀸이 위쪽 퀸과 충돌하는 지 확인
					// 1. 같은 행에 있는가
					// 2. 대각선에 있는가
					can = false; //충돌하면 다른 열의 위치로 놓아야함
					break;
				}
			}
			if (can) { // 충돌하지 않는다면 다음 행으로 넘어감.
				queen(x + 1);
			}
		}
	}
} //백트래킹

//bool check(int col, int row) {
//	int temp = 1;
//	for (int i = col - 1; i > 0; i--, temp++) {
//		if (arr[i][row] == true || arr[col - temp][row - temp] == true || arr[col - temp][row + temp] == true) {
//			// 같은 열일 때, 왼쪽위 대각선 상에 있을 때, 오른쪽 위 대각선 상에 있을 때
//			return false;
//		}
//	}
//
//	return true;
//}
