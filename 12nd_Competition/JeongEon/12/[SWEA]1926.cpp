// �� 12ȸ �˰��� ���͵�
// SWEA D2
// ������: ������ 369����
// ������ȣ: 1926��

#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int j = 1; j <= N; j++) {
		string num = to_string(j);
		int cnt = 0;
		for (int k = 0; k < num.length(); k++) {
			if (num[k] == '3' || num[k] == '6' || num[k] == '9') {
				cnt++;
			}
		}
		if (cnt == 0) {
			cout << j;
		}
		else {
			for (int i = 0; i < cnt; i++) {
				cout << "-";
			}
		}
		cout << " ";
	}

	return 0;
}