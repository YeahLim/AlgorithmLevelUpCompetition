// 백준 알고리즘 스터디 4회차
// 문제 번호: 11047번
// 문제 이름: 동전 0
// 알고리즘: 그리디 알고리즘
// 작성일: ~24.02.13

#include <iostream>

using namespace std;

int main(void) {
	// 입력부
	int N;	// 동전의 종류 개수
	int K;	// 동전의 합
	cin >> N >> K;

	int* arr = new int[N];	// 동전의 종류
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int coin_cnt = 0;	// 필요한 동전의 개수 -> 결과값
	for (int i = N - 1; i >= 0; i--) {
		if (arr[i] <= K) {
			coin_cnt += K / arr[i];
			K -= (K / arr[i]) * arr[i];
		}
	}

	// 출력) K원을 만드는데 필요한 동전의 개수 최소값
	cout << coin_cnt;

	return 0;
}