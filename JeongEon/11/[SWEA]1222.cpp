// ���� �˰��� ���͵� 17ȸ��
// SWEA D4
// 1222. [S/W �����ذ� �⺻] 6���� - ����1

#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC = 10;
	// cin >> TC;

	for (int tc = 1; tc <= TC; tc++) {
		int N;
		cin >> N;

		string input;
		cin >> input;

		int sum = input[0] - '0';
		for (int i = 1; i < N; i++) {
			if ((input[i] - '0') >= 0 && (input[i] - '0') <= 9) {
				sum += input[i] - '0';
			}
		}

		cout << "#" << tc << " ";
		cout << sum << '\n';
	}

	return 0;
}