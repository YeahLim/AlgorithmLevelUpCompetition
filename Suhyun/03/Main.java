import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    final static int A = 100; //알파 위치 값
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        int[][] sand = new int[N][N];

        for(int i=0;i<N;i++){
            sand[i] = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        }

        //토네이도 위치 벡터
        int[][] tornado = {{0,0,5,0,0},{0,10,A,10,0},{2,7,0,7,2},{0,1,0,1,0},{0,0,0,0,0}};
        boolean[][]visited = new boolean[N][N];

        Queue<Coordinate> q = new LinkedList<>();

        q.add(new Coordinate(N/2,N/2));

        int[] dx = {-1,0,1,0};
        int[] dy = {0,-1,0,1};
        int i = 0;
        int sum = 0;

        while(!q.isEmpty()){
            Coordinate x = q.poll();

            visited[x.row][x.col] = true;

            //토네이도 이동 방향으로 다음 좌표 선택
            Coordinate y = new Coordinate(x.row+dx[(i + 1) %4],x.col+dy[(i + 1) %4]);

            //
            if(y.row < 0 || y.col < 0 || y.row >=N || y.col >= N){
                y = new Coordinate(x.row+dx[i],x.col+dy[i]);
            }else if(visited[y.row][y.col]){
                y = new Coordinate(x.row+dx[i],x.col+dy[i]);
            }
            //
            else{
                i = (i + 1) %4;
                tornado = rotate90(tornado);
            }

            //밖으로 나간 모래 더하기
            sum += spreadSand(sand,tornado,y);

            //다 돌았으면 반복 종료
            if(y.row == 0 && y.col == 0){
                break;
            }
            q.add(y);
        }

        System.out.println(sum);
    }
    public static int spreadSand(int[][] sand, int[][] tornado,Coordinate y){
        int sum = 0;
        Coordinate leftTop = new Coordinate(y.row -2,y.col -2);
        int rest = sand[y.row][y.col];

        Coordinate a = null;
        
        //토네이도 위치 왼쪽 위부터 모두 순회함
        for(int i=0;i<tornado.length;i++){
            for(int j=0;j<tornado[i].length;j++){
                Coordinate coord = new Coordinate(leftTop.row + i,leftTop.col + j);
                
                //알파 위치 좌표 저장
                if(tornado[i][j] == A){
                    a = coord;
                    continue;
                }

                int movedSand = (int) ((double)sand[y.row][y.col] * tornado[i][j] / 100);
                rest -= movedSand;

                //밖으로 넘어가면 나간 모래 더하기
                if(coord.row < 0 || coord.col < 0 || coord.row >= sand.length || coord.col >=sand[0].length){
                    sum += movedSand;
                }
                //아니라면 해당 위치 모래 추가
                else{
                    sand[coord.row][coord.col] +=movedSand;
                }
            }
        }
        
        //알파 위치 모래 개수 저장
        if(a.row < 0 || a.col < 0 || a.row >= sand.length || a.col >=sand[0].length ){
            sum += rest;
        }else{
            sand[a.row][a.col] += rest;
        }
        
        //움직인 모래 없애기
        sand[y.row][y.col] = 0;

        return sum;
    }

    public static int[][] rotate90(int[][] arr){
        int[][] temp = new int[arr.length][arr[0].length];

        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr[i].length;j++){
                temp[i][j] = arr[j][arr.length -1 - i];
            }
        }

        return temp;
    }
    public static void printArr(int[][] arr){
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr[i].length;j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
        System.out.println();
    }
}

class Coordinate{
    int row;
    int col;

    public Coordinate(int row, int col){
        this.row = row;
        this.col = col;
    }

    @Override
    public String toString() {
        return "Coordinate{" +
                "row=" + row +
                ", col=" + col +
                '}';
    }
}