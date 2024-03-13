// 백준 알고리즘 스터디 8회차
// 문제 번호: 1629번
// 문제 이름: 곱셈
// 알고리즘: 분할정복
// 작성일: 24.03.13

#include <iostream>

using namespace std;

long long int A, B, C;

long long int multi(long long int B) {
	if (B == 0) {
		return 1;
	}
	else if (B == 1) {
		return A % C;
	}

	long long int K = multi(B / 2) % C;
	if (B % 2 == 0) {
		return K * K % C;
	}
	else {
		return (K * K % C) * (A % C);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	cin >> A >> B >> C;

	cout << multi(B) % C;

	return 0;
}