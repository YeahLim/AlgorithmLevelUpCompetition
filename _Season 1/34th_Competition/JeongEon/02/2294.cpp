#include <iostream>
#include <algorithm>
#define MAX 10001
#define INF 123456789

using namespace std;

int coin[MAX];
int dp[MAX];

int main(void) {
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		cin >> coin[i];
	}

	for (int i = 1; i <= k; i++) {
		dp[i] = INF;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = coin[i]; j <= k; j++) {
			dp[j] = min(dp[j], dp[j - coin[i]] + 1);
		}
	}

	if (dp[k] == INF) {
		cout << -1;
	}
	else {
		cout << dp[k];
	}

	return 0;
}
