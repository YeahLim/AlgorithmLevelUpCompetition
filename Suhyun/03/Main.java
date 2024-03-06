import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Main{
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        int[] A = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();

        //정렬
        PriorityQueue<Num> pq = new PriorityQueue<>(new Comparator<Num>() {
            @Override
            public int compare(Num o1, Num o2) {
                if(o1.val == o2.val){
                    return o1.i - o2.i;
                }

                return o1.val - o2.val;
            }
        });

        for(int i=0; i<A.length; i++){
            pq.add(new Num(i+1,A[i]));
        }

        int M = Integer.parseInt(br.readLine());

        for(int m =0 ; m<M;m++){
            int[] input = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            int command = input[0];

            if(command == 1){
                int i = input[1];
                int v = input[2];

                A[i-1] = v;
                pq.add(new Num(i,v)) ;
            }else if(command == 2){

                //변경된 값과 다르다면 이전 값이므로 무시한다.
                while(pq.peek().val != A[pq.peek().i-1]){
                    pq.poll();
                }

                Num num = pq.poll();
                System.out.println(num.i);
                pq.add(num);
            }
        }
    }
}

class Num{
    int i;
    int val;

    public Num(int i, int val){
        this.i = i;
        this.val = val;
    }
}