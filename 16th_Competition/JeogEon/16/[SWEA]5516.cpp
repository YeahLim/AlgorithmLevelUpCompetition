// ���� �˰��� ���͵� 16ȸ��
// SWEA D3
// 5515. 2016�� ���� ���߱�

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// �׽�Ʈ ���̽� ���� �Է�

	int month[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	for (int t = 1; t <= TC; t++) {
		int m, d;
		cin >> m >> d;

		int date = d;
		for (int i = 0; i < m; i++) {
			date += month[i];
		}

		int result = 0;
		if (date % 7 <= 3 && date % 7 >= 0) {
			result = date % 7 + 3;
		}
		else {
			result = date % 7 - 4;
		}


		cout << "#" << t << " ";
		cout << result << '\n';
	}
}