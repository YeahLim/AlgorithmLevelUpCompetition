// ���� 1735�� <�м���>
// �˰��� : ��Ŭ���� ȣ����
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
	// �Էº�
	int A, B, C, D;
	cin >> A >> B;
	cin >> C >> D;

	int Boonja, Boonmo;
	Boonja = A * D + C * B;
	Boonmo = B * D;

	// ��º�
	cout << Boonja / GCD(Boonja, Boonmo) << " " << Boonmo / GCD(Boonja, Boonmo) << "\n";

	return 0;
}