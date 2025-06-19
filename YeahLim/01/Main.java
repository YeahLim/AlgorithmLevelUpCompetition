import java.io.*;
import java.util.*;

public class Main {
    static int[] patternCnt = new int[256];
    static int[] windowCnt = new int[256];

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().split(" ");
        int p = Integer.parseInt(input[0]); // 단어 길이
        int s = Integer.parseInt(input[1]); // 암호문 길이

        String pattern = br.readLine(); // 단어
        String text = br.readLine();    // 암호문

        for (int i = 0; i < p; i++) {
            patternCnt[pattern.charAt(i)]++;
        }

        int answer = 0;

        for (int i = 0; i < s; i++) {
            windowCnt[text.charAt(i)]++;

            if (i >= p) {
                // 슬라이딩 윈도우에서 한 칸 밀기
                windowCnt[text.charAt(i - p)]--;
            }

            if (i >= p - 1 && Arrays.equals(patternCnt, windowCnt)) {
                answer++;
            }
        }

        System.out.println(answer);
    }
}
