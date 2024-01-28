// ���� 17103�� <������ ��Ƽ��>
// �˰��� : �����佺�׳׽��� ü
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

	// �Էº�
	int N;
	cin >> N;

	long long* arr = new long long[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	// ��º�
	for (int i = 0; i < N; i++) {
		isPrime(arr[i]);
	}

	return 0;
}