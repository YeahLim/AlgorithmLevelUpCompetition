import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    private static int WIDTH = 0;
    private static int HEIGHT = 1;
    private static int DIAG = 2;

    private static int WALL = 1;

    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        int[][] map = new int[N+1][N+1];

        for(int i=1;i<=N;i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            for(int j=1;j<=N;j++){
                map[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        long[][][]dp = new long[3][N+1][N+1];
        dp[WIDTH][1][2] =1; //좌표 (1 , 2) 경우의수 초기화

        //좌표 (1 , i) 초기화
        for(int i=3;i<=N;i++){
            //벽인경우 이후 좌표도 이동할 수 없다.
            if(map[1][i] == WALL){
                break;
            }
            dp[WIDTH][1][i] = 1;
        }

        //행 좌표가 2이상인 경우의 수 구하기
        for(int i=2;i<=N;i++){
            for(int j=1;j<=N;j++){
                if(map[i][j] == WALL){
                    continue;
                }

                //가로로 움직인 경우
                dp[WIDTH][i][j] = dp[WIDTH][i][j-1] + dp[DIAG][i][j-1];
                //세로로 움직인 경우
                dp[HEIGHT][i][j] = dp[HEIGHT][i-1][j] + dp[DIAG][i-1][j];

                //대각선으로 움직인 경우
                //대각선으로 움직이려면 위칸과 왼쪽칸이 벽이 아니어야 가능하다
                if(map[i-1][j] != WALL && map[i][j-1] != WALL) {
                    dp[DIAG][i][j] = dp[DIAG][i-1][j-1] + dp[WIDTH][i-1][j-1] + dp[HEIGHT][i-1][j-1];
                }
            }
        }

        long count = dp[WIDTH][N][N] + dp[DIAG][N][N] + dp[HEIGHT][N][N];

        System.out.println(count);
    }
}

