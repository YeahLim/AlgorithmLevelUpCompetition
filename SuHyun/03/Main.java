import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine());

        for(int testcase =1 ; testcase<=t;testcase++){
            StringTokenizer st = new StringTokenizer(br.readLine());

            int n = Integer.parseInt(st.nextToken());
            int k = Integer.parseInt(st.nextToken());

            int[]num = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();

            Arrays.sort(num);

            int l = 0;
            int r = num.length-1;

            int minDiffer = Integer.MAX_VALUE;
            int count = 0;

            //두 수의 조합을 만들기
            while(l<r){
                int sum = num[l] + num[r];
                int differ = Math.abs(k - sum);
                
                //더 작은 최소 차이를 찾은 경우
                if(minDiffer > differ){
                    count = 1;
                    minDiffer = differ;
                }
                //기존 최소 차이의 경우가 추가로 발견된 경우
                else if(minDiffer == differ){
                    count++;
                }

                //만약 목표 숫자 k 보다 두수의 합이 작으면 이미 r은 최대치이므로 l이 크게하여 두수의 합을 키운다.
                if(sum < k){
                    l++;
                }
                //만약 목표 숫자 k 보다 두수의 합이 크거나 같으면 이미 l은 최소치이므로 l이 작게하여 두수의 합을 작게 만든다.
                else{
                    r--;
                }
            }

            System.out.println(count);
        }
    }
}