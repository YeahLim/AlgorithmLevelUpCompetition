import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.time.LocalDate;
import java.util.PriorityQueue;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        Flower[] flowers = new Flower[N+1];
        int idx = 0;

        PriorityQueue<Flower> pq = new PriorityQueue<>();

        for(int i=0;i<N;i++){
            StringTokenizer st = new StringTokenizer(br.readLine());

            pq.add(new Flower(
                    LocalDate.of(2020,Integer.parseInt(st.nextToken()),Integer.parseInt(st.nextToken()))
                    ,LocalDate.of(2020,Integer.parseInt(st.nextToken()),Integer.parseInt(st.nextToken()))));
        }

        //다음 피어야 하는 꽃의 시간
        LocalDate start = LocalDate.of(2020,3,1);
        LocalDate end = LocalDate.of(2020,12,1);
        boolean valid = true;
        int count = 0;

        //출발 꽃 찾기
        while(start.isBefore(end) ){
            boolean find = false;

            //가장 긴 마지막 꽃이 지는 시간
            LocalDate tempEnd = start;

            while(!pq.isEmpty()){
                //현재 꽃이 피는 시간보다 피어야 하는 꽃의 시간보다 늦게 피면 꽃이 없는 공백기간이므로 현재 시간에서 가능한 경우의 수는 다 찾아봤다
                if(pq.peek().start.isAfter(start)){
                    break;
                }

                Flower curr = pq.poll();
                //현재 꽃이 지는 시간이 탐색한 꽃 중 가장 늦게 지는 시간보다 길면 더 오래 꽃이 피기 때문에 현재 꽃을 채택한다.
                if(curr.end.isAfter(tempEnd)) {
                    tempEnd  = curr.end;
                    find = true; //현재 피어야하는 꽃을 찾음
                }
            }

            //현재 피어야할 꽃을 찾은 경우
            if(find){
                //현재 꽃들이 피면 tempEnd -1일까지 핀다.
                //그러므로 다음 꽃은 최소 tempEnd일 부터 펴야한다.
                start = tempEnd;
                count++;
            }else{
                valid= false;
                break;
            }
        }

        if(valid){
            System.out.println(count);
        }else{
            System.out.println(0);
        }

    }
}

class Flower implements Comparable<Flower>{
    LocalDate start;
    LocalDate end;

    public Flower(LocalDate start, LocalDate end){
        this.start = start;
        this.end = end;
    }

    @Override
    public int compareTo(Flower o) {
        if(this.start.equals(o.start)) {
            if(this.end.isBefore(o.end)){
                return -1;
            }
            return 1;
        }else if(start.isBefore(o.start)){
            return -1;
        }

        return 1;
    }
}
