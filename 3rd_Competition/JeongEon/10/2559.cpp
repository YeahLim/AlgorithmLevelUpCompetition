// <백준>
// 문제번호: 2559번
// 문제이름: 수열
// 알고리즘: 누적합
// 마지막 수정일: 24.02.05

#include <iostream>

using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 입력부
	int N;	// 온도를 측정한 전체 날짜의 수
	int K;	// 합을 구하기 위한 연속적인 날짜의 수
	cin >> N >> K;

	int* arr = new int[N + 1];
	int* sum = new int[N + 1];
	for (int i = 0; i < N + 1; i++) {
		sum[i] = 0;
	}

	int maximum = -10000000; // -1억
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
		sum[i] += sum[i - 1] + arr[i];
		if (i > K) {
			sum[i] -= arr[i - K];
		}

		if (i >= K && sum[i] > maximum) {
			maximum = sum[i];
		}
	}

	cout << maximum << '\n';

	return 0;
}