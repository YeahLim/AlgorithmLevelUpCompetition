import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
/*
 *
 * 걸린시간 : 2시간
 *
 * N = 4
 *
 * 근우가 1~4에서 얻을 수 있는 최대 점수 = max(명우가 2~3에서 얻을 수 있는 최대 점수를 제외한 모든 2~4까지의 점수 + num[1],
 *                                         명우가 1~3에서 억을 수 있는 최대 점수를 제외한 모든 1~3까지의 점수 + num[4]
 *
 * 이를 점화식으로 표현하면 다음과 같다
 *
 * 최대 점수[근우][시작 번호][끝 번호] = max(누적합[시작 번호+1][끝번호] - 최대 점수[명우][시작 번호+1][끝 번호] + num[시작번호],
 *                                       누적합[시작 번호][끝번호-1] - 최대 점수[명우][시작 번호][끝 번호-1] + num[끝번호]
 * 최대 점수[명우][시작 번호][끝 번호] = max(누적합[시작 번호+1][끝번호] - 최대 점수[근우][시작 번호+1][끝 번호] + num[시작번호],
 *                                       누적합[시작 번호][끝번호-1] - 최대 점수[근우][시작 번호][끝 번호-1] + num[끝번호]
 * */
public class Main {
    static int[][][]dp; //[근우 : 0, 명우 : 1][시작번호][끝번호]
    static int[] card;
    static int[] sum;  //누적합

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int T = Integer.parseInt(br.readLine());
        for(int testcase=1;testcase<=T;testcase++){
            int N = Integer.parseInt(br.readLine());

            card = new int[N+1];
            dp = new int[2][N+1][N+1];
            sum = new int[N+1];

            StringTokenizer st = new StringTokenizer(br.readLine());

            //누적합 및 가드 값 저장
            for(int i=1;i<=N;i++){
                card[i] = Integer.parseInt(st.nextToken());
                sum[i] = card[i] + sum[i-1];
            }

            int max = getMax(0,1,N);
            System.out.println(max);
        }
    }

    //범위의 최대값을 구하는 메소드
    public static int getMax(int people, int start, int end){
        //이미 값을 아는 경우
        if (dp[people][start][end] > 0){
            return dp[people][start][end];
        }
        //먹을 수 있는 카드가 1개인 경우
        else if(start == end){
            dp[people][start][end] = card[start];
            return dp[people][start][end];
        }
        //다음 사람이 최대한 먹을 수 있는 점수를 제외하고 나머지 점수를 먹는 경우
        //1. 첫번째 카드 고르기
        //2. 끝 카드 고르기
        dp[people][start][end] = Math.max(sum[end] - sum[start] - getMax((people+1)%2,start+1,end) + card[start]
                ,sum[end-1] - sum[start-1]  - getMax((people+1)%2,start,end-1) + card[end]);
        return dp[people][start][end];
    }
}
