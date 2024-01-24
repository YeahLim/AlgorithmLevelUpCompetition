// 백준 4134번 <다음 소수>
// 알고리즘 : 브루스포스, 소수 판정
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool isPrime(long long n) {
	for (long long i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	// 입력부
	long long N;
	cin >> N;

	long long* arr = new long long[N];
	for (long long i = 0; i < N; i++) {
		cin >> arr[i];
	}

	// 출력부
	for (long long i = 0; i < N; i++) {
		if (arr[i] == 0 || arr[i] == 1) {
			cout << 2 << '\n';
		}
		else {
			for (long long j = arr[i]; j < 2 * arr[i]; j++) {
				if (isPrime(j)) {
					cout << j << '\n';
					break;
				}
			}
		}
	}

	return 0;
}