// �� 12ȸ �˰��� ���͵�
// SWEA D3
// ������: 24�ð�
// ������ȣ: 12368��

#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int A, B;
		cin >> A >> B;

		int time = A + B;

		if (time >= 24) {
			time = time - 24;
		}

		cout << "#" << i + 1 << " " << time << '\n';
	}

	return 0;
}