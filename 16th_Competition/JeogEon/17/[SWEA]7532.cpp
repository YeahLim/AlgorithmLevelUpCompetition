// ���� �˰��� ���͵� 16ȸ��
// SWEA D3
// 7532. �������� SEM�� ����

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// �׽�Ʈ ���̽� ���� �Է�

	for (int t = 1; t <= TC; t++) {
		int S, E, M;
		cin >> S >> E >> M;

		int year = S;

		while (1) {
			if ((year - S) % 365 == 0 && (year - E) % 24 == 0 && (year - M) % 29 == 0) {
				break;
			}

			year += 365;
		}

		cout << "#" << t << " ";
		cout << year << '\n';
	}
}