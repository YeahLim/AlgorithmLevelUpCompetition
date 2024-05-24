import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        //2를 연산하기 쉽게 -1로 변경
        int[] statues = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).map(x -> x ==2 ? -1 : 1).toArray();

        int max = statues[0];   //왼쪽을 바라보는 연속된 석상의 최대 합
        int min = statues[0];   //오른쪽을 바라보는 연속된 석상의 최대 합
        int result = Math.max(Math.abs(max),Math.abs(min));

        //0~i범위의 최대값[i] = max(0~i범위의 최대값[i-1] + 석상[i], 석상[i])
        //0~i범위의 최소값[i] = min(0~i범위의 최소값[i-1] + 석상[i], 석상[i])
        for(int i=1;i<statues.length;i++){
            max = Math.max(max + statues[i], statues[i]);
            min = Math.min(min + statues[i], statues[i]);
            
            //전체 범위 절대값 최대값 갱신
            result = Math.max(result, max);
            result = Math.max(result, Math.abs(min));
        }

        System.out.println(result);
    }
}