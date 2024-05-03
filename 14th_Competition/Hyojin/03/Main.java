import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class April25_2293 {
    public static int[] dp, arr;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());

        arr = new int[n + 1]; // 각 동전 가치
        dp = new int[k + 1]; //동전을 조합해서 만들 수 있는 금액의 경우의 수
        dp[0] = 1; // 0원을 만드는 경우 1가지

        for (int i = 1; i <= n; i++) {
            arr[i] = Integer.parseInt(br.readLine()); // 있는 동전
            for (int j = arr[i]; j <= k; j++) {
                // j원을 만드는 경우의 수는 이전까지의 경우의 수에 현재 동전 추가해서 j원 만들 수 있는 경우의 수
                dp[j] = dp[j] + dp[j - arr[i]];
            }
        }

        System.out.println(dp[k]);

    }
}
