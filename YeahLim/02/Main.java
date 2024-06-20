import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		
		// 변수 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String num = br.readLine();
		int length = num.length();
		
        if (num.charAt(0) == '0') {
			System.out.println(0);
			return;
		}
        
		final int MOD = 1000000;
		
		int[] dp = new int[length+1];		
		dp[0] = dp[1] = 1;
		
		for (int i = 2; i <= length; i++) {
			
			int one = num.charAt(i-1) - '0';
			
			if (one != 0) {
				dp[i] += dp[i-1] % MOD;
			}
			
			int two = one + (num.charAt(i-2) - '0')*10;
			if (two >= 10 && two <= 26) {
				dp[i] += dp[i-2] % MOD;
			}
		}
		
		System.out.println(dp[length] % MOD);
	}

}