// ���� �˰��� ���͵� 16ȸ��
// SWEA D3
// 1289. ������ �޸� �����ϱ�

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


		bool change = false;
		int cnt = 0;
		if (input[0] == '1') {
			cnt++;
			change = true;
		}
		for (int i = 0; i < input.length(); i++) {
			if (change) {
				if (input[i] == '1') {
					if (i + 1 < input.length() && input[i + 1] != '1') {
						change = false;
						cnt++;
					}
				}
			}

			if (!change) {
				if (input[i] == '0') {
					if (i + 1 < input.length() && input[i + 1] != '0') {
						change = true;
						cnt++;
					}
				}
			}
		}

		cout << "#" << t << " ";
		cout << cnt << '\n';
	}
}