class Solution {
	public int solution(int n) {
		final int MOD = 1_000_000_007;

		if (n <= 2) {
			return n;
		}

		int prev2 = 1; // dp[1]
		int prev1 = 2; // dp[2]

		for (int i = 3; i <= n; i++) {
			int current = (prev2 + prev1) % MOD;
			prev2 = prev1;
			prev1 = current;
		}

		return prev1;
	}
}