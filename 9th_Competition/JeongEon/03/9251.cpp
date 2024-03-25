// ���� �˰��� ���͵� 9ȸ��
// ���� ��ȣ: 9251��
// ���� �̸�: LCS
// �˰���: DP
// �ۼ���: 24.03.19

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <string.h>

int dp[1001][1001] = { 0 };

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	string input1;
	cin >> input1;

	string input2;
	cin >> input2;

	// �ڵ�
	memset(dp, 0, sizeof(dp));	// 0���� �ʱ�ȭ

	for (int i = 1; i <= input2.size(); i++) {
		for (int j = 1; j <= input1.size(); j++) {
			if (input1[j - 1] != input2[i - 1]) {	// �ٸ� ���ĺ�
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
			}
			else if (input1[j - 1] == input2[i - 1]) {	// ���� ���ĺ�
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
		}
	}

	// ���
	cout << dp[input2.size()][input1.size()] << '\n';


	return 0;
}