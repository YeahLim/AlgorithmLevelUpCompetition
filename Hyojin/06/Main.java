import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class April12_1436 {
    public static void main(String[] args) throws IOException {
        // 종말의 수 : 6이 3개이상 연속으로 들어가는 수
        /*
        세자리 666
        네자리 1666 2666 3666 ... 9666
        다섯자리 10666 11666 .. 99666 16660
        헉 그럼 그냥 숫자 업하면서 연속된거 있는지 확인하면 안되나?
         */
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        int cnt = 0;
        for(int i = 666 ; i <= 100000000 ; i++){
            String str = Integer.toString(i);
            for(int j = 0 ; j <= str.length() - 3 ; j++){
                if(str.charAt(j) == '6' && str.charAt(j + 1) == '6' && str.charAt(j + 2) == '6'){
                    cnt++;
                    break;
                }
            }
            if(cnt == n){
                System.out.println(i);
                break;
            }
        }

    }
}
