import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());

        PriorityQueue<Integer> findSmallerWomanQ = new PriorityQueue<>(Collections.reverseOrder());
        PriorityQueue<Integer> findTallerWomanQ = new PriorityQueue<>();
        PriorityQueue<Integer> findSmallerManQ = new PriorityQueue<>(Collections.reverseOrder());
        PriorityQueue<Integer> findTallerManQ = new PriorityQueue<>();

        st = new StringTokenizer(br.readLine());


        for(int i=0;i<N;i++){
            int height = Integer.parseInt(st.nextToken());

            if(height < 0){
                findSmallerWomanQ.add(height);
            }else{
                findTallerWomanQ.add(height);
            }
        }

        st = new StringTokenizer(br.readLine());

        for(int i=0;i<N;i++){
            int height = Integer.parseInt(st.nextToken());

            if(height < 0){
                findSmallerManQ.add(height);
            }else{
                findTallerManQ.add(height);
            }
        }

        int count = 0;

        //키 작은 여성을 원하는 남성과 키가 큰 남성을 원하는 여성간 조합 찾기
        while(!findSmallerWomanQ.isEmpty()){
            int availableMaxHeight = Math.abs(findSmallerWomanQ.poll()) - 1;

            //다음 여성이 원하는 남성 키는 현재 원하는 남성 키보다 크므로 현재 남성은 원하는 짝을 만들 수 없다.
            if(!findTallerManQ.isEmpty() && findTallerManQ.peek() <= availableMaxHeight){
                findTallerManQ.poll();
                count++;
            }
        }

        //키가 큰 여성을 원하는 남성과 키가 작은 남성을 원하는 여성간 짝 찾기
        while(!findSmallerManQ.isEmpty()){
            int availableMaxHeight = Math.abs(findSmallerManQ.poll()) - 1;

            //다음 남성이 원하는 여성 키는 현재 원하는 여성 키보다 크므로 현재 여성은 원하는 짝을 만들 수 없다.
            if(!findTallerWomanQ.isEmpty() && findTallerWomanQ.peek() <= availableMaxHeight){
                findTallerWomanQ.poll();
                count++;
            }
        }

        System.out.println(count);
    }
}
