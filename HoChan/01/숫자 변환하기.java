import java.util.Arrays;

class Solution {
	public int solution(int x, int y, int n) {
		int[] dp = new int[y + 1];
		Arrays.fill(dp, -1);
		dp[x] = 0;

		for (int i = x; i <= y; i++) {
			if (dp[i] == -1) continue;

			int[] next = {i + n, i * 2, i * 3};

			for (int value : next) {
				if (value <= y) {
					if (dp[value] == -1 || dp[value] > dp[i] + 1) {
						dp[value] = dp[i] + 1;
					}
				}
			}
		}

		return dp[y];
	}
}