import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int[] arr = new int[N];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        // 수는 한개 이상
        int start = 0;
        int end = 0;
        int result = Integer.MIN_VALUE;
        int sum = 0;
        while (end < N) { // arr인덱스는 0~n-1까지니까
            sum += arr[end];
            if (result < sum) {
                result = sum;
            }
            if (sum < 0) { // 합이 음수가 됐다는 것은 얘는 포함시키면 안돼
                start = end + 1;
                end = start;
                if (start == N) break;
                sum = 0;
            } else {
                end++;
            }
        }
        System.out.println(result);
    }

}