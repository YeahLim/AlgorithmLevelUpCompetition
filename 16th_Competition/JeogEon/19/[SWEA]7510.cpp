// ���� �˰��� ���͵� 16ȸ��
// SWEA D3
// 7510. ������� ���� ��

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// �׽�Ʈ ���̽� ���� �Է�

	for (int t = 1; t <= TC; t++) {
		int N;
		cin >> N;

		int cnt = 1;
		for (int i = 1; i <= N; i++) {
			if (i > N) {
				break;
			}
			int tmp = N;
			for (int j = i; j <= N; j++) {
				if (tmp <= 0) {
					if (tmp == 0) {
						cnt++;
					}
					break;
				}
				tmp -= j;
			}
		}

		cout << "#" << t << " ";
		cout << cnt << '\n';
	}
}