import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        int[] teamHI = new int[N];

        st = new StringTokenizer(br.readLine());

        for(int i=0;i<N;i++){
            teamHI[i] = Integer.parseInt(st.nextToken());
        }

        int[] teamARC = new int[M];
        int[] teamARCCount = new int[100001];

        st = new StringTokenizer(br.readLine());

        for(int i=0;i<M;i++){
            teamARC[i] = Integer.parseInt(st.nextToken());
            teamARCCount[teamARC[i]]++;
        }

        Arrays.sort(teamHI);
        Arrays.sort(teamARC);

        long hiwin=0, draw=0;
        int arcIdx = 0;
        long hiWinCount = 0;

        //hi팀 i번째(hiIdx)가 arc를 최대한 이길 수 있는 부분(arcIdx)을 탐색
        //이때 hi와 arc 모두 오름차순으로 정렬되어있으므로 i+1번째는 i번째가 이기는 사람을 모두 이긴다.
        //이를 이용해 누적합을 적용하여 i번째가 이기는 사람은 모두 i+1번째가 이기는 것으로 처리하고
        //i번째가 이기지 못한 arc팀원부터 탐색한다.
        for(int hiIdx = 0; hiIdx < N; hiIdx++){
            while(arcIdx < M){
                if(teamARC[arcIdx] >= teamHI[hiIdx]){
                    break;
                }
                //다음 arc 팀원 탐색
                arcIdx++;
                //현재~N번째까지 hi가 이기는 최소 횟수
                hiWinCount++;
            }

            hiwin+=hiWinCount;
            //hi팀원이 비기는 횟수는 arc의 코드력이 같은 사람의 개수와 같다.
            draw+=teamARCCount[teamHI[hiIdx]];
        }

        //모든 경우의 수는 N*M개이므로 hi가 이기는 수와 비기는 수를 제외하면 arc가 이기는 수이다.
        long arcWin = (long)N * M - draw - hiwin;

        System.out.println(String.format("%d %d %d",hiwin,arcWin,draw));
    }
}