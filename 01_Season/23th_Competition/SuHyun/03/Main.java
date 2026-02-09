import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        int[] money = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();

        long sum = 0;
        //0~m까지의 합(초기 윈도우 값) 계산
        for(int i=0;i<m;i++){
            sum+=money[i];
        }

        long max = sum;

        //한칸씩 오른쪽으로 이동하면 윈도우 값 및 최대값 계산
        for(int end=m;end<n;end++){
            sum-=money[end-m];
            sum+=money[end];

            max = Math.max(sum,max);
        }

        System.out.println(max);
    }
}
