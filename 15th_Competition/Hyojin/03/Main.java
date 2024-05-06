import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class May02_1 {
    public static int n, m;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());

        // 1. 균등하게 넣을 밑줄 계산하기
        String[] words = new String[n];
        int totalAlpha = 0; // 전체 알파벳 길이

        for (int i = 0; i < n; i++) {
            words[i] = br.readLine();
            totalAlpha += words[i].length();
        }

        int blank = (m - totalAlpha) / (n - 1);
        int remain = (m - totalAlpha) % (n - 1);

        // 남은 빈칸 remain이 0이상일 경우 모든 단어를 탐색하면서 소문자일때 빈칸 추가
        for (int i = 1; i < n; i++) {// 어차피 나머지니까 0 ~ n-1개니까 일단 소문자있는 곳에 붙이자
            if (remain > 0 && 'a' <= words[i].charAt(0) && words[i].charAt(0) <= 'z') {
                words[i] = '_' + words[i];
                remain--;
            }
        }

        // 모든 단어 탐색후에도 넣어줘야할 빈칸이 있을 경우 뒤에서부터 대문자로 시작하는 단어에 빈칸을 추가한다...흠냐..
        for (int i = n - 1; i > 0; i--) {
            if (remain > 0 && 'A' <= words[i].charAt(0) && words[i].charAt(0) <= 'Z') {
                words[i] = '_' + words[i];
                remain--;
            }
        }

        String tmp = "";
        for (int i = 0; i < blank; i++) {
            tmp += "_";
        }


        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < n - 1; i++) {
            sb.append(words[i]).append(tmp);
        }
        sb.append(words[n - 1]);

        System.out.print(sb);

    }
}


