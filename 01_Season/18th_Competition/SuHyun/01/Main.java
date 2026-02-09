import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

public class Main {
    public static int J = 0;    //정글
    public static int O = 1;    //바다
    public static int I = 2;    //얼음

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st= new StringTokenizer(br.readLine());

        int M = Integer.parseInt(st.nextToken());
        int N = Integer.parseInt(st.nextToken());

        int[][][]map = new int[3][M+1][N+1];
        int[][][]preSum = new int[3][M+1][N+1];

        int K = Integer.parseInt(br.readLine());

        Map<Character,Integer> keyMap = new HashMap<>(); //알파벳->인덱스 변경 맵

        keyMap.put('J',J);
        keyMap.put('O',O);
        keyMap.put('I',I);

        //정글, 바다, 얼음 별 맵 생성
        for(int i=1;i<=M;i++){
            String input = br.readLine();

            for(int j=1;j<=N;j++){
                map[keyMap.get(input.charAt(j-1))][i][j] = 1;
            }
        }

        //누적합 생성
        for(int i=1;i<=M;i++){
            for(int j=1;j<=N;j++){
                preSum[J][i][j] = preSum[J][i-1][j] + preSum[J][i][j-1] - preSum[J][i-1][j-1] + map[J][i][j];
                preSum[O][i][j] = preSum[O][i-1][j] + preSum[O][i][j-1] - preSum[O][i-1][j-1] + map[O][i][j];
                preSum[I][i][j] = preSum[I][i-1][j] + preSum[I][i][j-1] - preSum[I][i-1][j-1] + map[I][i][j];
            }
        }

        //누적합을 이용해 범위내 개수 구하기
        for(int i=0;i<K;i++){
            st = new StringTokenizer(br.readLine());

            int startRow = Integer.parseInt(st.nextToken());
            int startCol = Integer.parseInt(st.nextToken());
            int endRow = Integer.parseInt(st.nextToken());
            int endCol = Integer.parseInt(st.nextToken());

            int junglePreSum = preSum[J][endRow][endCol] - preSum[J][startRow-1][endCol] - preSum[J][endRow][startCol-1] +  preSum[J][startRow-1][startCol-1];
            int oceanPreSum = preSum[O][endRow][endCol] - preSum[O][startRow-1][endCol] - preSum[O][endRow][startCol-1] +  preSum[O][startRow-1][startCol-1];
            int icePreSum = preSum[I][endRow][endCol] - preSum[I][startRow-1][endCol] - preSum[I][endRow][startCol-1] +  preSum[I][startRow-1][startCol-1];

            StringBuilder sb= new StringBuilder();
            sb.append(junglePreSum).append(" ").append(oceanPreSum).append(" ").append(icePreSum);

            System.out.println(sb);
        }
    }
}