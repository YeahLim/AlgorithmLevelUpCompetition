// <백준>
// 문제번호: 25682번
// 문제이름: 체스판 다시 칠하기 2
// 알고리즘: 누적합
// 마지막 수정일: 24.02.08

#include <iostream>
#include <cmath>

using namespace std;

int N, M, K;	// 체스판 크기(세로, 가로, 다시 만들 크기)
int B[2001][2001];	// 정상 체스판(B먼저)
int W[2001][2001];	// 정상 체스판(W먼저)
int minimum = 4000000;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 입력부
	cin >> N >> M >> K;	// 체스판 크기(세로, 가로, 다시 만들 크기)

	// 정상 체스판
	bool black = false; bool white = true;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			B[i][j] = black;
			W[i][j] = white;
			black = !black; white = !white;
		}
		if (M % 2 == 0) {
			black = !black; white = !white;
		}
	}

	// 0 : Black, 1 : White
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			char tmp;
			cin >> tmp;
			int temp = (tmp == 'B') ? 0 : 1;
			// 같은 경우 0, 다른 경우 1 -> XOR 연산자 이용
			B[i][j] = temp ^ B[i][j];
			W[i][j] = temp ^ W[i][j];

			// 2차원 배열 누적합
			B[i][j] = B[i - 1][j] + B[i][j - 1] - B[i - 1][j - 1] + B[i][j];;
			W[i][j] = W[i - 1][j] + W[i][j - 1] - W[i - 1][j - 1] + W[i][j];;
		}
	}


	//// 0 : Black, 1 : White
	//for (int i = 1; i <= N; i++) {
	//	for (int j = 1; j <= M; j++) {
	//		char inp;
	//		cin >> inp;

	//		int input;
	//		if (inp == 'B') {
	//			input == 0;
	//		}
	//		else {
	//			input == 1;
	//		}
	//		
	//		// xor 연산자 : 같으면 0, 다르면 1
	//		B[i][j] = input ^ B[i][j];
	//		W[i][j] = input ^ W[i][j];

	//		// 누적합 = 위 + 왼쪽 - 좌상단 대각선
	//		B[i][j] += B[i - 1][j] + B[i][j - 1] - B[i - 1][j - 1];
	//		W[i][j] += W[i - 1][j] + W[i][j - 1] - W[i - 1][j - 1];
	//	}
	//}

	for (int i = 1; i <= N - K + 1; i++) {
		for (int j = 1; j <= M - K + 1; j++) {
			// 위치를 다음 같다고 하자. 네모친 곳을 구간이라고 하자.
			//  1  2  3  4
			//     ________
			//  5 | 6  7  8|
			//  9 |10 11 12|
			// 13 |14 15 16|
			//    ----------
			// 본인 = K * K 구간 중 가장 큰 수 = 구간 내 바껴야되는 횟수가 누적합된 곳 = 16번 위치
			// 구간합 = 본인(16) - 구간 밖 좌(13) - 구간 밖 위(4) + 구간 밖 좌상단 대각선(1)
			int x = i, y = j; // 구간 내 첫번째(6)의 x, y값
			int xx = i + K - 1, yy = j + K - 1;	// 구간 내 가장 큰 수의 x, y값(본인 위치)
			minimum = min(minimum, B[xx][yy] - B[xx][y - 1] - B[x - 1][yy] + B[x - 1][y - 1]);
			minimum = min(minimum, W[xx][yy] - W[xx][y - 1] - W[x - 1][yy] + W[x - 1][y - 1]);
		}
	}

	cout << minimum;


	return 0;
}