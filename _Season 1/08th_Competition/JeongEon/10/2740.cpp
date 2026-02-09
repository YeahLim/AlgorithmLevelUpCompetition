// 백준 알고리즘 스터디 8회차
// 문제 번호: 2740번
// 문제 이름: 행렬곱셈
// 알고리즘: 분할정복
// 작성일: 24.03.13

#include <iostream>
#include <string.h>

using namespace std;

int N, M;	// A
int K;		// B

int A[101][101];
int B[101][101];
int result[101][101];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> A[i][j];
		}
	}

	cin >> M >> K;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < K; j++) {
			cin >> B[i][j];
		}
	}

	// 결과
	memset(result, 0, sizeof(result));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			for (int k = 0; k < M; k++) {
				result[i][j] += A[i][k] * B[k][j];
			}
			cout << result[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}