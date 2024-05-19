// ���� �˰��� ���͵� 17ȸ��
// SWEA D3
// 15230. ���ĺ� ����

#include <iostream>
#include <string>

using namespace std;

string alphabet = { "abcdefghijklmnopqrstuvwxyz" };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;

	for (int tc = 1; tc <= TC; tc++) {
		string input;
		cin >> input;

		int result = 0;
		for (int i = 0; i < input.length(); i++) {
			if (input[i] == alphabet[i]) {
				result++;
			}
			else {
				break;
			}
		}

		cout << "#" << tc << " ";
		cout << result << '\n';
	}

	return 0;
}