import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Collections;
import java.util.PriorityQueue;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int w = Integer.parseInt(st.nextToken());

        List<Integer> threeCandy = new ArrayList<>();
        List<Integer> fiveCandy = new ArrayList<>();

        //사탕을 각 리스트에 저장
        for(int i=0;i<N;i++){
            st = new StringTokenizer(br.readLine());

            int weight = Integer.parseInt(st.nextToken());
            int sweat = Integer.parseInt(st.nextToken());

            if(weight == 3){
                threeCandy.add(sweat);
            }else{
                fiveCandy.add(sweat);
            }
        }

        //당도가 높은 순서로 정렬
        Collections.sort(threeCandy,Collections.reverseOrder());
        Collections.sort(fiveCandy,Collections.reverseOrder());

        //누적합 계산
        long[]preThreeSum = new long[threeCandy.size()+1];
        long[]preFiveSum = new long[fiveCandy.size()+1];

        for(int i=0;i<threeCandy.size();i++){
            preThreeSum[i+1] = preThreeSum[i] + threeCandy.get(i);
        }
        for(int i=0;i<fiveCandy.size();i++){
            preFiveSum[i+1] = preFiveSum[i] + fiveCandy.get(i);
        }

        //크기가 3인 사탕을 우선 w무게 이하로 가능한만큼 모두 넣었을 떄의 경우의 수 계산
        //이때 가장 작은 당도의 사탕(가장 오른쪽 인덱스 사탕)의 위치를 저장
        int threeRightIdx = Math.min(threeCandy.size(), w/3);
        long max = preThreeSum[threeRightIdx];

        //크기가 3인 사탕을 1개씩 빼고 가능한 만큼 5크기의 사탕을 넣어서 최대합을 구한다.
        while(threeRightIdx >=0){
            int fiveRightIdx = Math.min((w - 3*threeRightIdx)/5, fiveCandy.size());
            max = Math.max(max,preThreeSum[threeRightIdx]+preFiveSum[fiveRightIdx]);

            threeRightIdx--;
        }

        System.out.println(max);
    }
}
