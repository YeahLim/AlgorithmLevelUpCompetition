// 백준 알고리즘 스터디 9회차
// 문제 번호: 11726번
// 문제 이름: 2xn 타일링
// 알고리즘: DP
// 작성일: 24.03.21

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