import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());

        for(int testcase =0 ;testcase<T;testcase++){
            StringTokenizer st = new StringTokenizer(br.readLine());

            int N = Integer.parseInt(st.nextToken());
            int M = Integer.parseInt(st.nextToken());
            int K = Integer.parseInt(st.nextToken());

            int[]jewels = new int[N*2];

            st = new StringTokenizer(br.readLine());

            int sum = 0;

            for(int i=0;i<N;i++){
                int jewel = Integer.parseInt(st.nextToken());

                //0~M-1 범위의 값을 미리 구한다.
                if(i < M){
                    sum+=jewel;
                }

                //양 끝이 연결되어 있으므로 배열의 길이를 2배로 늘려서 표현한다.
                jewels[i] = jewel;
                jewels[i+N] =jewel;
            }

            int count = sum < K ? 1 : 0;

            int l = 0;
            int r = M;

            //M과 N의 크기가 같으면 0~N-1영역을 반복해서 확인하기 때문에 탐색할 필요가 없다.
            if(M != N){
                //슬라이딩 윈도우를 이용해 범위 값 구하기
                while(l+1<N){
                    sum = sum - jewels[l] + jewels[r];

                    if(sum < K){
                        count++;
                    }

                    l++;
                    r++;
                }
            }

            System.out.println(count);
        }
    }
}