// ���� 13241�� <�ּҰ����>
// �˰��� : ��Ŭ���� ȣ����
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
	// �Էº�
	long long int A, B;
	cin >> A >> B;

	// ��º�
	cout << (A * B) / GCD(A, B) << '\n';

	return 0;
}