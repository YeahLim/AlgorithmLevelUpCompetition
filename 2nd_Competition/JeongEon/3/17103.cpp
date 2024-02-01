// 백준 17103번 <골드바흐 파티션>
// 알고리즘 : 에라토스테네스의 체
#include <iostream>
#include <cmath>
using namespace std;

int GoldBachPartition(bool* Prime, long long N) {
	int cnt = 0;
	int j;
	for (long long i = 2; i <= N / 2; i++) {
		j = N - i;
		if (Prime[i] && Prime[j]) {
			if (i + j == N) {
				cnt++;
				Prime[i] = false;
				Prime[j] = false;
			}
		}
	}

	return cnt;
}

void isPrime(long long N) {
	bool* Prime = new bool[N + 1];

	for (long long i = 0; i <= N; i++) {
		Prime[i] = true;
	}


	for (long long i = 2; i <= N; i++) {
		if (Prime[i]) {
			for (long long j = i * 2; j <= N; j += i) {
				Prime[j] = false;
			}
		}
	}

	cout << GoldBachPartition(Prime, N) << '\n';
}


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	// 입력부
	int N;
	cin >> N;

	long long* arr = new long long[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	// 출력부
	for (int i = 0; i < N; i++) {
		isPrime(arr[i]);
	}

	return 0;
}