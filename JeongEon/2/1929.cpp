// 백준 1929번 <소수 구하기>
// 알고리즘 : 에라토스테네스의 체
#include <iostream>
using namespace std;

void isPrime(long long M, long long N) {
	bool* isPrime = new bool[N + 1];

	for (long long i = 0; i <= N; i++) {
		isPrime[i] = true;
	}


	for (long long i = 2; i <= N; i++) {
		if (isPrime[i]) {
			if (i >= M) {
				cout << i << '\n';
			}
			for (long long j = i * 2; j <= N; j += i) {
				isPrime[j] = false;
			}
		}
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	// 입력부
	long long M, N;
	cin >> M >> N;

	// 출력부
	isPrime(M, N);

	return 0;
}