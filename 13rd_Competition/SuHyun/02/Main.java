import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());

        int n = 1;
        int target = 1;

        //가능한 최대의 물병크기 구하기
        while(true){
            if(n>N){
                n/=2;
                break;
            }
            n*=2;
        }

        //가장 큰 물병부터 2배로 작아지게 물병을 사용하면서 가장 마지막으로 쓰는 물병 크기 구하기
        while(N > 0 && K > 0){
            N -= n;
            K--;
            target = n;
            while(N < n){
                n/=2;
            }
        }

        //목표 물의 양을 모두 다 체웠으면 추가 물 필요없음
        if(N == 0){
            System.out.println(0);
        }
        //아직 물이 남았다면 가장 마지막으로 쓴 물병크기로 남은 물만큼 추가 구입
        else{
            System.out.println(target - N);
        }

    }
}