// ���� �˰��� ���͵� 17ȸ��
// SWEA D3
// 14692. �볪�� �ڸ���

#include <iostream>

using namespace std;

string alphabet = { "abcdefghijklmnopqrstuvwxyz" };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;

	for (int tc = 1; tc <= TC; tc++) {
		int N;
		cin >> N;

		cout << "#" << tc << " ";

		if (N % 2 == 0) {
			cout << "Alice\n";
		}
		else {
			cout << "Bob\n";
		}

	}

	return 0;
}