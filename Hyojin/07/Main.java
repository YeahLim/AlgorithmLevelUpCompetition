import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.nio.Buffer;
import java.util.StringTokenizer;

public class April12_1629 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        int c = Integer.parseInt(st.nextToken());

        // a^b 를 c로 나눈 나머지를 구하라
        System.out.println(rec(a,b,c));
    }
    public static long rec(long a, long b, long c){ // a^b 를 c로 나눈 나머지
        if(b == 1) return a % c;
        long val = rec(a, b / 2, c); // a^(b/2)를 c로 나눈 나머지
        long now = val * val % c; // b일때는 a^(b/2)를 c로 나눈 나머지 *  a^(b/2)를 c로 나눈 나머지를 한 후 c로 나눈 나머지
        if(b % 2 == 0) return now; // 근데 b가 짝수이면 이게 맞지만
        return now * a % c; // b가 홀수이면 a를 한번 더 곱해줘야된다
    }
}
