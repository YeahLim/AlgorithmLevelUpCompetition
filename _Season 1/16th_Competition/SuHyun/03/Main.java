import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    static List<Integer> graph[];

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        graph = new ArrayList[N+1];

        for(int i=0;i<=N;i++){
            graph[i] = new ArrayList<>();
        }

        int[]parent = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();

        for(int i=1;i<parent.length;i++){
            graph[parent[i]].add(i);
        }

        int totalTime = getTotalCallTime(0);

        System.out.println(totalTime);
    }

    public static int getTotalCallTime(int curr){
        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());

        int callTime = 0;

        //부하직원이 없으면 걸리는 시간도 없다
        if(graph[curr].isEmpty()){
            return 0;
        }

        //모든 부하의 부하직원에게 뉴스를 전달하는데 걸리는 시간 + 해당 부하직원에게 뉴스를 전달하는데 걸리는 시간(1분)
        for(int next : graph[curr]){
            pq.add(getTotalCallTime(next)+1);
        }

        int addTime = 0; //현재까지 전달한 부하직원의 수

        while(!pq.isEmpty()){
            callTime = Math.max(callTime,pq.poll() + addTime); //부하 중 오래 걸리는 시간이 curr직원이 걸리는 시간이다.
            addTime++;
        }

        return callTime;
    }
}