// ���� �˰��� ���͵� 16ȸ��
// SWEA D3
// 13547. �Ⱦ���

#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// �׽�Ʈ ���̽� ���� �Է�

	for (int t = 1; t <= TC; t++) {
		string input;
		cin >> input;

		int o = 0;
		int x = 0;
		for (int i = 0; i < input.length(); i++) {
			if (input[i] == 'o') {
				o++;
			}
			else {
				x++;
			}
		}

		cout << "#" << t << " ";
		if (x <= 7) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}

	}
}