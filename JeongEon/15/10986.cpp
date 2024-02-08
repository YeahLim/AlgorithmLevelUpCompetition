// <백준>
// 문제번호: 10986번
// 문제이름: 나머지 합
// 알고리즘: 누적합
// 마지막 수정일: 24.02.08

#include <iostream>

using namespace std;

long long sum[1000000];
long long cnt[1001];

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	//// 입력부
	//int N;	// 수 개수
	//int M;	// 나누는 수
	//cin >> N >> M;

	//int cnt[1000001] = { 0 };
	//long long int* arr = new long long int[N + 1];
	//arr[0] = 0;

	//for (long long int i = 1; i <= N; i++) {
	//	int input;
	//	cin >> input;
	//	arr[i] = input + arr[i - 1];	// 누적합
	//	cnt[arr[i] % M]++;	// 구간 합의 나머지 값
	//}

	//long long int result = 0;
	//for (long long int i = 0; i < M; i++) {
	//	result += (cnt[i] * (cnt[i] - 1)) / 2;
	//}

	//cout << cnt[0] + result << '\n';

	int num, m, val;
	long long result = 0;
	cin >> num >> m;
	for (int i = 0; i < num; i++) {
		int val;
		cin >> val;
		val %= m;
		if (i == 0)	sum[i] = val;
		else sum[i] = (sum[i - 1] + val) % m;
		if (sum[i] == 0) result++;
		cnt[sum[i]]++;
	}
	for (int i = 0; i <= m; i++)
		result += (cnt[i] * (cnt[i] - 1)) / 2;
	cout << result;

	return 0;
}