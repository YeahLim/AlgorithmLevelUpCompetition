// 백준 1735번 <분수합>
// 알고리즘 : 유클리드 호제법
#include <iostream>
using namespace std;

int GCD(int a, int b) {
	if (a % b == 0)
		return b;
	else
		return GCD(b, a % b);
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// 입력부
	int A, B, C, D;
	cin >> A >> B;
	cin >> C >> D;

	int Boonja, Boonmo;
	Boonja = A * D + C * B;
	Boonmo = B * D;

	// 출력부
	cout << Boonja / GCD(Boonja, Boonmo) << " " << Boonmo / GCD(Boonja, Boonmo) << "\n";

	return 0;
}