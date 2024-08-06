import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    static char[][][] map = new char[8][8][8];
    static boolean[][][] visited = new boolean[8][8][8];
    static int[] dx = {-1,-1,-1,0,0,0,1,1,1};
    static int[] dy = {-1,0,1,-1,0,1,-1,0,1};

    static int valid = 0;

    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        for(int i=0;i<map.length;i++){
            map[0][i] = br.readLine().toCharArray();
        }

        //1~7초의 상황을 표현하기 위해 1칸씩 벽을 내림
        for(int i=1;i<map.length;i++){
            for(int col =0;col<map[i].length;col++){
                for(int row = map[i].length-2;row >=0;row--){
                    map[i][row+1][col] = map[i-1][row][col];
                }
            }
            Arrays.fill(map[i][0],'.');
        }

        move(new Coordinate(map[0].length-1,0),0);

        System.out.println(valid);
    }

    //dfs로 사람을 움직이는 부분
    public static void move(Coordinate curr, int time){
        //맨 위로 올라갔으면 성공
        if(curr.row == 0){
            valid = 1;
            return ;
        }
        //현재 위치에 벽이 내려왔으면 더이상 가지 못한다.
        if(map[time][curr.row][curr.col] == '#'){
            return;
        }

        //9방향 움직임
        for(int k=0;k<dx.length;k++){
            Coordinate next = new Coordinate(curr.row + dx[k],curr.col + dy[k]);

            if(next.row < 0 || next.row>=map[0].length || next.col < 0 || next.col >= map[0][0].length){
                continue;
            }
            if(visited[time][next.row][next.col]){
                continue;
            }
            if(map[time][next.row][next.col] == '#'){
                continue;
            }

            visited[time][next.row][next.col] = true;
            //7초 이상은 모든 벽이 없어진 상태이므로 모두 같은 시간으로 친다.
            move(next,Math.min(map.length-1,time+1));
        }
    }
}

class Coordinate{
    int row;
    int col;

    public Coordinate(int row, int col){
        this.row = row;
        this.col= col;
    }
}