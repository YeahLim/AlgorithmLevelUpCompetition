import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class April_20055_answer {
    public static int n,k;
    public static int[] belt;
    public static boolean[] robot;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());
        k = Integer.parseInt(st.nextToken());

        belt = new int[n * 2]; // 컨베이어 벨트는 아랫부분까지 있으니까
        robot = new boolean[n]; // 로봇은 윗쪽부분에만 있을 수 있음
        st = new StringTokenizer(br.readLine());

        for(int i = 0 ; i < n * 2 ;  i++){
            belt[i] = Integer.parseInt(st.nextToken());
        }

        int turn = 0;
        while(k > 0){
            // 벨트가 각 칸 위에 있는 로봇과 함께 한 칸 회전한다.
            // 벨트 내구도 옮기기
            int tmp = belt[n * 2 - 1];
            for(int i = n * 2 - 1 ; i > 0 ; i--){
                belt[i] = belt[i-1];
            }
            belt[0] = tmp;

            // 벨트가 옮겨질때 벨트 위 로봇도 함께 옮겨지므로 로봇 위치 변경
            for(int i = n - 1; i > 0 ; i--){
                robot[i] = robot[i - 1];
            }

            // 언제든지 로봇이 내리는 위치에 도달하면 그 즉시 내린다
            robot[n-1] = false;
            robot[0] = false;


            // 가장 먼저 벨트에 올라간 로봇부터, 벨트가 회전하는 방향으로 한 칸 이동할 수 있다면 이동한다
            for(int i = n - 1; i > 0 ; i--){
                if(!robot[i] && robot[i-1] && belt[i] > 0){ // 이동하려는 칸에 로봇이 없고, 이동하려는 칸에 내구도가 1이상이어야함
                    belt[i]--; // 이동했으니까 내구도 줄어듦
                    if(belt[i] == 0){ // 내구도가 0인지 확인
                        k--;
                    }
                    // i-1번째를 i번째로 옮김
                    robot[i] = true;
                    robot[i-1] = false;
                }
            }

            // 올리는 위치에 있는 칸의 내구도가 0이 아니면 올리는 위치에 로봇을 올린다.
            if(belt[0] > 0){
                belt[0]--; // 올릴때 내구도 감소
                if(belt[0] == 0){ // 내구도가 0인지 확인
                    k--;
                }
                robot[0] = true;
            }
            turn++;
        }
        System.out.println(turn);

    }
}
