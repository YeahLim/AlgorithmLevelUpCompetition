// �� 12ȸ �˰��� ���͵�
// SWEA D2
// ������: ���ο� �Ҹ��� ġ���
// ������ȣ: 1288��

#include <iostream>
#include <string.h>
#include <string>

using namespace std;

bool check[10];	// 0 ~ 9

bool all_fine() {
	for (int i = 0; i < 10; i++) {
		if (!check[i]) {
			return true;
		}
	}
	return false;
}

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;

		memset(check, false, sizeof(check));

		int multi = 1;
		while (all_fine()) {
			string num = to_string(N * multi);
			for (int j = 0; j < num.length(); j++) {
				if (!check[num[j] - '0']) {
					check[num[j] - '0'] = true;
				}
			}

			multi++;
		}

		cout << "#" << i + 1 << " " << N * (multi - 1) << '\n';
	}

	return 0;
}