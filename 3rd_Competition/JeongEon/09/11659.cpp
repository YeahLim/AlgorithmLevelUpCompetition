// <백준>
// 문제번호: 11659번
// 문제이름: 구간 합 구하기 4
// 알고리즘: 누적합
// 마지막 수정일: 24.02.04

#include <iostream>

using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 입력부
	int N;	// 수의 개수
	int M;	// 합을 해야하는 횟수
	cin >> N >> M;

	long long int* arr = new long long int[N + 1];	// 입력된 수
	arr[0] = 0;
	long long int input;
	for (int i = 1; i <= N; i++) {
		cin >> input;
		arr[i] = arr[i - 1] + input;
	}

	int i; int j;	//  i번째 수부터 j번째 수
	for (int k = 0; k < M; k++) {
		cin >> i >> j;
		cout << arr[j] - arr[i - 1] << '\n';
	}

	return 0;
}