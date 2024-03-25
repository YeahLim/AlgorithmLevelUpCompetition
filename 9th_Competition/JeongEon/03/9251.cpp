// 백준 알고리즘 스터디 9회차
// 문제 번호: 9251번
// 문제 이름: LCS
// 알고리즘: DP
// 작성일: 24.03.19

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

	// 입력
	string input1;
	cin >> input1;

	string input2;
	cin >> input2;

	// 코드
	memset(dp, 0, sizeof(dp));	// 0으로 초기화

	for (int i = 1; i <= input2.size(); i++) {
		for (int j = 1; j <= input1.size(); j++) {
			if (input1[j - 1] != input2[i - 1]) {	// 다른 알파벳
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
			}
			else if (input1[j - 1] == input2[i - 1]) {	// 같은 알파벳
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
		}
	}

	// 출력
	cout << dp[input2.size()][input1.size()] << '\n';


	return 0;
}