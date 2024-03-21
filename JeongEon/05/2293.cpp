// 백준 알고리즘 스터디 9회차
// 문제 번호: 2293번
// 문제 이름: 동전 1
// 알고리즘: DP
// 작성일: 24.03.21

#include <iostream>
#include <vector>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력 
	int n, k;	// 동전 개수, 가치
	cin >> n >> k;

	vector<int> dp(k + 1);
	dp[0] = 1;	// 아무 동전도 선택하지 않은 경우

	int coin;
	for (int i = 0; i < n; i++) { //각 동전에 대해
		cin >> coin;
		// 코드
		for (int j = coin; j <= k; j++) {
			dp[j] += dp[j - coin];
		}
	}


	// 출력
	cout << dp[k] << endl;

	return 0;
}