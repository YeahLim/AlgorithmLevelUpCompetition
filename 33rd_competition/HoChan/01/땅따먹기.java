class Solution {
	int solution(int[][] land) {
		int[][] dp = new int[land.length][4];
		for (int i = 0; i < 4; i++) {
			dp[0][i] = land[0][i];
		}
		for (int i = 1; i < dp.length; i++) {
			for (int j = 0; j < 4; j++) {
				for (int m = 0; m < 4; m++) {
					if (j == m)
						continue;
					dp[i][j] = Math.max(dp[i][j], dp[i - 1][m] + land[i][j]);
				}
			}
		}

		int answer = 0;

		for (int score : dp[dp.length - 1]) {
			answer = Math.max(answer, score);
		}

		return answer;
	}
}