// ���� �˰��� ���͵� 9ȸ��
// ���� ��ȣ: 11726��
// ���� �̸�: 2xn Ÿ�ϸ�
// �˰���: DP
// �ۼ���: 24.03.21

#include <iostream>
#include <vector>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> dp;
	dp.push_back(1);
	dp.push_back(2);
	for (int i = 2; i < n; i++) {
		dp.push_back((dp[i - 1] + dp[i - 2]) % 10007);
	}
	cout << dp[n - 1];


	return 0;
}