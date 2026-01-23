import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Queue;
import java.util.StringTokenizer;

class Case{
    int r,c,cnt,d,t;

    public Case(int row, int col, int breakCount, int distance,int time){
        this.r = row;
        this.c = col;
        this.cnt = breakCount;
        this.d = distance;
        this.t = time;
    }
}

public class Main {
    static boolean[][][][] v;
    static int[] dx = {-1,1,0,0};
    static int[] dy = {0,0,-1,1};
    static int[][] m;
    static int N,M,K,a;

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        K = Integer.parseInt(st.nextToken());
        m = new int[N][M];
        v = new boolean[N][M][K+1][2];
        v[0][0][0][0] = true;

        for(int i=0;i<N;i++){
            String s = br.readLine();

            for(int j=0;j<s.length();j++){
                m[i][j] = s.charAt(j) - '0';
            }
        }

        Queue<Case> q = new ArrayDeque<>();
        q.add(new Case(0,0,0,1,0));
        a = -1;

        while(!q.isEmpty()){
            Case curr = q.poll();

            if(curr.r == N-1 && curr.c == M-1){
                a = curr.d;
                break;
            }

            //4방향 탐색
            for(int k=0;k<4;k++){
                int nx = curr.r + dx[k];
                int ny = curr.c + dy[k];

                if(nx<0 || ny<0 || nx>=N || ny >=M){
                    continue;
                }

                if(m[nx][ny] == 1){
                    if(curr.t == 0 && curr.cnt < K  && !v[nx][ny][curr.cnt+1][1]) {
                        v[nx][ny][curr.cnt+1][1]=true;
                        q.add(new Case(nx, ny, curr.cnt + 1, curr.d + 1, 1));
                    }else if(curr.t == 1 && curr.cnt < K && !v[curr.r][curr.c][curr.cnt][0]){
                        v[curr.r][curr.c][curr.cnt][0] = true;
                        q.add(new Case(curr.r, curr.c, curr.cnt,curr.d+1,0));
                    }
                }
                if (m[nx][ny] == 0){
                    if(curr.t == 0 && !v[nx][ny][curr.cnt][1]){
                        v[nx][ny][curr.cnt][1] = true;
                        q.add(new Case(nx,ny,curr.cnt,curr.d + 1,1));
                    }else if(curr.t == 1 && !v[nx][ny][curr.cnt][0]){
                        v[nx][ny][curr.cnt][0] = true;
                        q.add(new Case(nx,ny,curr.cnt,curr.d + 1,0));
                    }
                }
            }
        }

        System.out.println(a);
    }
}
