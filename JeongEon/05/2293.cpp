// ���� �˰��� ���͵� 9ȸ��
// ���� ��ȣ: 2293��
// ���� �̸�: ���� 1
// �˰���: DP
// �ۼ���: 24.03.21

#include <iostream>
#include <vector>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է� 
	int n, k;	// ���� ����, ��ġ
	cin >> n >> k;

	vector<int> dp(k + 1);
	dp[0] = 1;	// �ƹ� ������ �������� ���� ���

	int coin;
	for (int i = 0; i < n; i++) { //�� ������ ����
		cin >> coin;
		// �ڵ�
		for (int j = coin; j <= k; j++) {
			dp[j] += dp[j - coin];
		}
	}


	// ���
	cout << dp[k] << endl;

	return 0;
}