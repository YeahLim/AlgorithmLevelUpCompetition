import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class March19_1966 {
    public static Queue<int[]> queue;
    public static int n, m;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int testcase = Integer.parseInt(br.readLine());
        StringTokenizer st = null;
        queue = new LinkedList<>();

        for(int tc = 0 ; tc < testcase ; tc++){
            st = new StringTokenizer(br.readLine());
            n = Integer.parseInt(st.nextToken());
            m = Integer.parseInt(st.nextToken());
            queue = new LinkedList<>();

            st = new StringTokenizer(br.readLine());
            for(int i = 0 ; i < n ; i++){
                int important = Integer.parseInt(st.nextToken());
                queue.add(new int[]{i,important});
            }



            // n개가 있고 m번째 있는 원소가 몇번째 나올 것인가를 묻는 문제
            // 1. queue의 맨 앞에 있는 문서의 중요도를 확인한다
            int cnt = 1;
            while(true){
                if(queue.size() == 0) {
                    break;
                }

                int[] top = queue.peek();
                int topIdx = top[0];
                int topImportant = top[1];


                if(back()){ // 중요도 높은 문서가 하나라도 있으면
                    top = queue.poll();
                    queue.add(top);
                }else{ // 중요도 높은 문서가 한개도 없으면
                    // 우리가 찾는 target이면 정답을 출력
                    if(topIdx == m){
                        System.out.println(cnt);
                        break;
                    }else {
                        // 우리가 찾는 target이 아니면 아예 제거
                        queue.remove();
                        cnt++;
                    }
                }
            }

        }

    }

    private static boolean back() {
        // 큐를 한바퀴 돌면서 뒤에 나보다 큰 수가 있는지 확인
        Queue<int[]> queuetmp = new LinkedList<>();
        int queuesize = queue.size();
        int[] now = queue.poll(); // 맨 앞에 것을 뽑아서 저장하고
        boolean have = false;
        queuetmp.add(now); // 다시 맨 뒤에 저장
        for(int i = 0 ;  i < queuesize - 1 ; i++){
            int[] nxt = queue.poll();
            if(nxt[1] > now[1]){
                have = true;
                queuetmp.add(nxt);
                break;
            }else{
                queuetmp.add(nxt);
            }
        }
        while(!queue.isEmpty()){
            int[] tmp = queue.poll();
            queuetmp.add(tmp);
        }
        queue = queuetmp;
        return have;
    }
}
