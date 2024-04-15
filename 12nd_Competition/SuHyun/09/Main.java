import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;


/*
 *
 * 15배수 만들기
 *
 * 1) 각 자리 합이 3의 배수일 것
 * 2) 끝 자리가 5일 것
 *
 * 해당 조건에 맞는 경우의 수는 아래와 같다.
 *
 * 1)111과 15배수의 조합
 *   111의 순서를 바꿔도 값은 그대로 이므로 1개의 경우의 수가 추가된다.
 * 2)555와 15배수의 조합
 *   555의 순서를 바꿔도 값은 그대로 이므로 1개의 경우의 수가 추가된다.
 * 3)15와 15배수의 조합
 *  15
 *       1515
 *           151515
 *           511515
 *           115515
 *       5115
 *           155115
 *           515115
 *           551115
 *       1155
 *           151155
 *           511155
 *           115155
 *
 *   규칙에 따라 3배씩 늘어난다.
 *
 * dp[n] = dp[n-2]*3 + dp[n-3]*2
 *
 * */


public class Main {
    static int MOD = 1_000_000_007;
    static int INF = -1;
    static long[] dp;

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        dp = new long[1516];
        Arrays.fill(dp,-1);

        //초기값 설정
        dp[0] = 0;
        dp[1] = 0;
        dp[2] = 1;
        dp[3] = 1;

        System.out.println(getCount(N));
    }

    public static long getCount(int n){
        if(dp[n] != INF){
            return dp[n] % MOD;
        }

        dp[n] = ((getCount(n-2)*3) % MOD + (getCount(n-3)*2) % MOD)%MOD;

        return dp[n];
    }
}