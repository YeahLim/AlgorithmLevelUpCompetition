import java.util.*;
import java.io.*;

public class Main {
    
    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int X = sc.nextInt();

        int[] days = new int[N];
        for (int i = 0; i < N; i++) {
            days[i] = sc.nextInt();
        }

        // 슬라이딩 윈도우로 X 범위의 합이 가장 큰 경우 찾기
        int total = 0;
        for (int i = 0; i < X; i++) {
            total += days[i];
        }

        int max = total;
        int count = 1;
        for (int i = X; i < N; i++) {
            total = total - days[i-X] + days[i];

            if (total > max) {
                max = total;
                count = 1;
            }
            else if (total == max) {
                count++;
            }

        }

        if (total == 0) {
            System.out.println("SAD");
        }
        else {
            System.out.println(max +"\n" + count);
        }
        
    }
}