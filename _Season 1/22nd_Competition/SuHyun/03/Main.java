import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        PriorityQueue<Integer> pq = new PriorityQueue<>();

        for(int i=0;i<N;i++){
            pq.add(Integer.parseInt(br.readLine()));
        }

        int damage = 1;
        long cost = 0;

        //가장 작은것 부터 모독 판별
        while(!pq.isEmpty()){
            int curr = pq.poll();

            //만약 현재 데미지보다 작으면 이전 데미지로도 평판이 0이기 때문에 이미 박탈당한 국회의원이다.
            if(damage > curr){
                continue;
            }

            //부족한 평판만큼 해커를 투입한다.
            cost += curr - damage;
            damage++;
        }

        System.out.println(cost);
    }
}