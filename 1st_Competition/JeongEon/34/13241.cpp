// 백준 13241번 <최소공배수>
// 알고리즘 : 유클리드 호제법
#include <iostream>
using namespace std;

long long int GCD(long long int A, long long int B) {
	if (B == 0)
		return A;

	return GCD(B, A % B);
}


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// 입력부
	long long int A, B;
	cin >> A >> B;

	// 출력부
	cout << (A * B) / GCD(A, B) << '\n';

	return 0;
}