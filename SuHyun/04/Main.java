import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;

/*
 * 
 * 걸린시간 : 26분
 * 
 * 현재 값을 삭제한 수열의 최대합 = max(이전 삭제하지 않은 최대합에서 현재 값 삭제하기, 이전 삭제한 최대합에서 현재값 더하기)
 * 현재 값을 삭제하지 않은 수열의 최대합= = max(이전 삭제하지 않는 최대합 + 현재 값, 현재 값)
 * */

public class Main {
	static int NOT_DELETE = 0;
	static int DELETE = 1;
	
	public static void main(String[] args) throws Exception {
       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       int n = Integer.parseInt(br.readLine());
       
       int[]num = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
       int[][]dp = new int[2][n];
       
       dp[NOT_DELETE][0] = num[0];
       dp[DELETE][0] = num[0];
       int max = num[0];
       
       //DP 진행
       for(int i=1;i<dp[0].length;i++) {
    	   dp[NOT_DELETE][i] = Math.max(dp[NOT_DELETE][i-1] + num[i], num[i]);
    	   dp[DELETE][i] = Math.max(dp[NOT_DELETE][i-1], dp[DELETE][i-1] + num[i]);
    	   
    	   max = Math.max(dp[DELETE][i],max);
    	   max = Math.max(max,dp[NOT_DELETE][i]);
       }
       
       System.out.println(max);
       
	}
}