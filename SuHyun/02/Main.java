import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        int[] soldier = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int[] select = new int[N];
        int l = 0;
        int r = 0;
        select[0] = soldier[0];

        //현재 병사를 최적의 위치에 넣는다.
        for(int i=1;i<soldier.length;i++){
            //가장 작은것 보다 작다면 오른쪽에 추가할 수 있다.
            if(select[r] > soldier[i]){
                r++;
                select[r] = soldier[i];
            }
            //더이상 길어질 수 없는 병사라면 앞으로 해당 병사를 사용했을 때 가장 최적의 위치에 넣는다.
            //최적의 위치 = 자신보다 작거나 같은 병사
            //그래야 자신 오른쪽에 더 많은 병사를 넣을 수 있기 때문이다.
            else{
                for(int j=l;j<=r;j++){
                    if(select[j] <= soldier[i]){
                        select[j] = soldier[i];
                        break;
                    }
                }
            }
        }

        //전체 병사 수에서 현재 최적의 위치 병사의 수만큼 뺴주면 제거해야 하는 병사 수가 나온다.
        System.out.println(N-r-1);
    }
}