// �� 12ȸ �˰��� ���͵�
// SWEA D3
// ������: ��������
// ������ȣ: 13218��

#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;

		cout << "#" << i + 1 << " " << N / 3 << '\n';
	}

	return 0;
}