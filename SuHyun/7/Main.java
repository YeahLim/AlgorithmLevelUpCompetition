import java.io.*;
import java.util.*;

public class Main {
    static boolean[][] visited;
    static long[][] dp;
    static int[][] board;
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader((System.in)));

        int[] input = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int N = input[0];

        board = new int[N][N];
        dp = new long[N][N];
        visited = new boolean[N][N];

        for (int i = 0; i < N; i++) {
            input = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            System.arraycopy(input, 0, board[i], 0, input.length);
        }

        dp[0][0] = 1;
        visited[0][0] = true;

        System.out.println(getNumberOfCase(new Coordinate(N-1, N-1)));
    }

    public static void printArr(long[][] arr){
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr[0].length;j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
    }
    public static long getNumberOfCase(Coordinate curr){
        if(visited[curr.row][curr.col]){
            return dp[curr.row][curr.col];
        }

        visited[curr.row][curr.col] = true;

        int[] dx = {0, -1};
        int[] dy = {-1, 0};

        for (int i = curr.row-1; i >= 0; i--) {
            Coordinate before = new Coordinate(i, curr.col);

            if(board[before.row][before.col]+before.row == curr.row){
                dp[curr.row][curr.col] += getNumberOfCase(before);
            }
        }

        for (int i = curr.col-1; i >= 0; i--) {
            Coordinate before = new Coordinate(curr.row, i);

            if(board[before.row][before.col]+before.col == curr.col){
                dp[curr.row][curr.col] += getNumberOfCase(before);
            }
        }
        return dp[curr.row][curr.col];
    }
}
class Coordinate{
    int row;
    int col;

    public Coordinate(int row, int col){
        this.row = row;
        this.col = col;
    }

    public boolean isEqual(Coordinate o){
        if(this.row == o.row && this.col == o.col){
            return true;
        }
        return false;
    }
}