import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static int[] nums;
    public static int[] dp;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        nums = new int[n];
        dp = new int[n];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for(int i = 0 ; i < n ; i++){
            nums[i] = Integer.parseInt(st.nextToken());
        }

        int result = 0;
        for(int i = 0 ; i < n ; i++){
            result = result < LIS(i) ? LIS(i) : result;
        }
        System.out.println(result);
    }
    public static int LIS(int n){
        if(dp[n] == 0){
            dp[n] = 1;

            for(int i = n - 1; i >= 0 ; i--){
                if(nums[i] < nums[n]){
                    dp[n] = Math.max(dp[n], dp[i] + 1);
                }
            }
        }
        return dp[n];

    }
}