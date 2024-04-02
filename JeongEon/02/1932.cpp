// �ڵ� �׽�Ʈ ���͵� 11ȸ��
// ���̵�: �ǹ� 1
// ������ȣ: 1932��
// �����̸�: ���� �ﰢ��

#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	int tri[501][501];
	int sum[501][501];
	memset(sum, 0, sizeof(sum));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> tri[i][j];
		}
	}

	sum[1][1] = tri[1][1];
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			sum[i][j] = max(sum[i - 1][j - 1], sum[i - 1][j]) + tri[i][j];
		}
	}

	int maxi = -1;
	for (int i = 1; i <= n; i++) {
		if (maxi < sum[n][i]) {
			maxi = sum[n][i];
		}
	}

	cout << maxi;

	return 0;
}