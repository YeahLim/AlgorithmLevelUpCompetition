// ���� �˰��� ���͵� 9ȸ��
// ���� ��ȣ: 2775��
// ���� �̸�: �γ�ȸ���� ���׾�
// �˰���: DP
// �ۼ���: 24.03.21

#include <iostream>
#include <string.h>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int k, n;
		cin >> k >> n;

		int apt[15][15];	// 0���� �ʱ�ȭ
		memset(apt, 0, sizeof(apt));

		for (int j = 0; j <= k; j++) {
			for (int p = 1; p <= n; p++) {
				if (j == 0) {
					apt[j][p] = p;
					continue;
				}
				apt[j][p] = apt[j][p - 1] + apt[j - 1][p];
			}
		}

		cout << apt[k][n] << '\n';
	}

	return 0;
}