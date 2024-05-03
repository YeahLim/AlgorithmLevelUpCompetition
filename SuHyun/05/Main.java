import java.io.BufferedReader;
import java.io.InputStreamReader;


public class Main {
    static int TOTAL = 0;
    static int UP = 1;
    static int DOWN = 2;
    static int MOD = 1_000_000_007;

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        long[][] dp = new long[1_000_000+1][3];

        dp[1][TOTAL] = 2;
        dp[1][UP] = 1;
        dp[1][DOWN] = 1;

        dp[2][TOTAL] = 7;
        dp[2][UP] = 3;
        dp[2][DOWN] = 3;

        for(int i=3;i<=N;i++){
            dp[i][TOTAL] = (dp[i-1][TOTAL] * 2 + dp[i-2][TOTAL] + dp[i-1][UP] + dp[i-1][DOWN]) % MOD;
            dp[i][UP] = (dp[i-1][TOTAL] + dp[i-1][DOWN])%MOD;
            dp[i][DOWN] = (dp[i-1][TOTAL] + dp[i-1][UP])%MOD;
        }

        System.out.println(dp[N][TOTAL]);
    }
}