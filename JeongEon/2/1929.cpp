// ���� 1929�� <�Ҽ� ���ϱ�>
// �˰��� : �����佺�׳׽��� ü
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

	// �Էº�
	long long M, N;
	cin >> M >> N;

	// ��º�
	isPrime(M, N);

	return 0;
}