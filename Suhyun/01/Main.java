import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    final static int UP = 1;
    final static int LEFT= 2;
    final static int MIDDLE = 0;
    final static int RIGHT = 4;
    final static int DOWN = 3;

    final static int INF = 4 * 100_000 + 1; //최악의 경우는 최대 비용 * 개수 이므로 1을 더해 절대 도달할 수 없는 값으로 INF 설정

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int[] input = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int[] command = new int[input.length+1];

        //인덱스를 1부터 시작하게 해서 순서와 인덱스를 같게 만들어 코드 보기 편하도록 조정
        System.arraycopy(input,0,command,1,input.length);

        int[][][] minCost = new int[command.length-1][5][5]; // [순서][왼발][오른발]

        //최대값으로 초기화
        for(int i=0;i<minCost.length;i++){
            for(int j=0;j<minCost[i].length;j++){
                Arrays.fill(minCost[i][j],INF);
            }
        }

        //0,0 초기화
        minCost[0][0][0] = 0;

        //입력 순서대로 최소값 [현재][왼발][오른발] 계산
        for(int time=1;time<minCost.length;time++){
            //이전 오른발을 현재 방향으로 가는 경우
            for(int left = 0; left < 5; left++){
                for(int right = 0; right < 5; right++){
                    //이전 오른발이 중앙인 경우(비용 = 2)
                    if(right == 0){
                        minCost[time][left][command[time]] = Math.min(minCost[time][left][command[time]],minCost[time-1][left][right]+2);
                    }
                    //이전 오른발이랑 현재 방향이 같은 경우(비용 = 1)
                    else if(right == command[time]){
                        minCost[time][left][command[time]] = Math.min(minCost[time][left][command[time]],minCost[time-1][left][right]+1);
                    }
                    //이전 오른발이랑 현재 방향이 반대 방향인 경우(비용 = 4)
                    else if(Math.abs(command[time] - right) == 2){
                        minCost[time][left][command[time]] = Math.min(minCost[time][left][command[time]],minCost[time-1][left][right]+4);
                    }
                    //이전 오른발이랑 현재 방향이 인접 방향인 경우(비용 = 3)
                    else{
                        minCost[time][left][command[time]] = Math.min(minCost[time][left][command[time]],minCost[time-1][left][right]+3);
                    }
                }
            }
            //이전 왼발을 현재 방향으로 가는 경우
            for(int right = 0; right < 5; right++){
                for(int left = 0; left < 5; left++){
                    //이전 왼발이 중앙인 경우(비용 = 2)
                    if(left == 0){
                        minCost[time][command[time]][right] = Math.min(minCost[time][command[time]][right],minCost[time-1][left][right]+2);
                    }
                    //이전 왼발이랑 현재 방향이 같은 경우(비용 = 1)
                    else if(left == command[time]){
                        minCost[time][command[time]][right] = Math.min(minCost[time][command[time]][right],minCost[time-1][left][right]+1);
                    }
                    //이전 왼발이랑 현재 방향이 반대 방향인 경우(비용 = 4)
                    else if(Math.abs(command[time] - left) == 2){
                        minCost[time][command[time]][right] = Math.min(minCost[time][command[time]][right],minCost[time-1][left][right]+4);
                    }
                    //이전 왼발이랑 현재 방향이 인접 방향인 경우(비용 = 3)
                    else{
                        minCost[time][command[time]][right] = Math.min(minCost[time][command[time]][right],minCost[time-1][left][right]+3);
                    }
                }
            }

        }

        //모든 입력방향대로 다 움직였을 때 최소 비용
        int min = INF;

        //최종 비용 중 최소값 찾기
        for(int left = 0; left < 5; left++){
            for(int right = 0; right < 5; right++){
                min = Math.min(minCost[minCost.length-1][left][right],min);
            }
        }

        System.out.println(min);
    }
}
