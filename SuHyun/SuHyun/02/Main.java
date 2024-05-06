import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int[] num = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();

        int[] length = new int[N+1]; //num[i]를 마지막으로 하는 연속되면서 증가하는 수열의 길이
        int max = 0; //연속되면서 증가하는 수열중 가장 긴 수열의 길이

        //1~i까지 연속되면서 증가하는 수열의 길이 = 1~i-1까지 연속되면서 증가하는 수열의 길이 + 1
        //이때 1~1수열을 위해 length[0]도 필요하므로 length[N] 수열을 N+1개로 증가시킨다.

        for(int i=0;i<num.length;i++){
            length[num[i]] = length[num[i]-1]+1;
            max = Math.max(max,length[num[i]]);
        }

        //이미 정렬된 가장 긴 수열을 제외하고 나머지를 이동한다.
        System.out.println(N - max);
    }
}