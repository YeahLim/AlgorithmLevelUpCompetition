// �� 12ȸ �˰��� ���͵�
// SWEA D3
// ������: ��ȯ���� �����
// ������ȣ: 3431��

#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		long long int L, U, X;
		cin >> L >> U >> X;

		int I;
		if (X < L) {
			I = L - X;
		}
		else if (X >= L && X <= U) {
			I = 0;
		}
		else if (X > U) {
			I = -1;
		}

		cout << "#" << i + 1 << " " << I << '\n';
	}

	return 0;
}