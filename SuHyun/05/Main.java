import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int d = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());
        int c = Integer.parseInt(st.nextToken());

        int[] sushi = new int[N*2];
        
        //원모양으로 연결되어 있므르로 배열의 크기를 2배로 하여 연속된 모습을 표현
        for(int i=0;i<N;i++){
            int val = Integer.parseInt(br.readLine());
            sushi[i] = val;
            sushi[i+N] = val;
        }

        Map<Integer,Integer> selectMap = new HashMap<>();
        
        //1~k번째 초밥 선택
        for(int i=0;i<k;i++){
            selectMap.put(sushi[i],selectMap.getOrDefault(sushi[i],0)+1);
        }
        
        //c초밥이 있으면 1개를 더 추가하여 최대값 초기화
        int max = selectMap.size() + (selectMap.getOrDefault(c,0) > 0 ? 0:1);
        
        //한칸씩 옆으로 이동하며 초밥 선택
        for(int i=1;i<N;i++){
            //이전 초밥 개수 감소
            selectMap.put(sushi[i-1],selectMap.get(sushi[i-1])-1);
            
            //이전 초밥이 없으면 제거
            if(selectMap.get(sushi[i-1]) == 0){
                selectMap.remove(sushi[i-1]);
            }
            
            //다음 초밥 개수 증가
            selectMap.put(sushi[i+k-1],selectMap.getOrDefault(sushi[i+k-1],0)+1);
            
            //최대값 갱신
            max = Math.max(max, selectMap.size() + (selectMap.getOrDefault(c,0) > 0 ? 0:1));
        }

        System.out.println(max);
    }
}
