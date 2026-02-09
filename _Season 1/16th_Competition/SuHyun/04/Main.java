import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.PriorityQueue;
import java.util.stream.Collectors;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        int[] num = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();

        int S = Integer.parseInt(br.readLine());
        int changeIdx = 0;

        //S번 횟수 미만으로 0~N-1 번째 까지 순회하며 변경할 수 있는 가장 큰 숫자 찾기
        while(S>0 && changeIdx < num.length-1){
            PriorityQueue<Num> pq = new PriorityQueue<>((a,b)->b.value - a.value);

            for(int i=changeIdx+1;i<num.length;i++){
                pq.add(new Num(num[i],i));
            }

            //바꿀 수 있는 숫자 탐색
            while(!pq.isEmpty()){
                Num curr = pq.poll();

                //대상 숫자가 값이 작은 경우
                if(num[changeIdx] >= curr.value){
                    continue;
                }
                //S번 횟수로 바꿀 수 없는 경우
                if(curr.idx - changeIdx > S){
                    continue;
                }
                //바꿀 숫자위치까지 숫자 이동
                for(int i=curr.idx;i>changeIdx;i--){
                    num[i] = num[i-1];
                }
                //목표 위치에 가장 큰 숫자 대입
                num[changeIdx] = curr.value;
                S-= (curr.idx - changeIdx);

                break;
            }
            //다음 위치 이동
            changeIdx++;
        }

        System.out.println(Arrays.stream(num).mapToObj(String::valueOf).collect(Collectors.joining(" ","","")));
    }
}

class Num{
    int value;
    int idx;

    public Num(int value, int idx){
        this.value = value;
        this.idx = idx;
    }
}