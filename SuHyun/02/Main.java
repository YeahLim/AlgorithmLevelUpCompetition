import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
/*
*
* 빨리 끝낸다 -> 최대한 많이 동시에 실행한다. -> 가장 느린것부터 시작하면서 먼저 끝난것에 그다음 느린것을 시작한다.
*
* */
public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        int[] chargeTime = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        Arrays.sort(chargeTime);

        int currentTime = 0;

        PriorityQueue<Integer> flug = new PriorityQueue<>();

        //가장 충전시간이 긴 것부터 실행
        for(int i=chargeTime.length-1;i>=0;i--){
            //더이상 꽇을 플러그가 없다면 가장 먼저 끝나는 플러그를 뽑는다.
            while(flug.size()==M){
                currentTime = flug.poll();
            }
            //플러그에 꽂기
            flug.add(currentTime + chargeTime[i]);
        }

        //나머지 충전시간 중 가장 긴 시간을 저장
        while(!flug.isEmpty()){
            currentTime = flug.poll();
        }

        System.out.println(currentTime);
    }
}