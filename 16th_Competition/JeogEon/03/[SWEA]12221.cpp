// ���� �˰��� ���͵� 16ȸ��
// SWEA D3
// 12221. ������2

#include <iostream>
#include <string.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// �׽�Ʈ ���̽� ���� �Է�

	for (int t = 1; t <= TC; t++) {
		int A, B;
		cin >> A >> B;

		cout << "#" << t << " ";
		if (A < 10 && B < 10) {
			cout << A * B << '\n';
		}
		else {
			cout << -1 << '\n';
		}
	}
}