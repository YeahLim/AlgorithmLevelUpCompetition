// ���� �˰��� ���͵� 16ȸ��
// SWEA D3
// 11688. Calkin-Wilf tree 1

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

		int a = 1;
		int b = 1;
		for (int i = 0; i < input.length(); i++) {
			if (input[i] == 'L') {
				b = a + b;
			}
			else if (input[i] == 'R') {
				a = a + b;
			}
		}

		cout << "#" << t << " ";
		cout << a << " " << b << '\n';
	}
}