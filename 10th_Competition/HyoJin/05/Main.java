import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());

        /*
        1. 몇자리 수인지 확인하기
        2. 자릿수 배열 헉...

        1-9까지 배열만들어놓고
        그냥 숫자 돌면서 갯수 카운트
         */
        int[] arr = new int[10];
        String num = Integer.toString(n);

        for(int i = 0 ; i < num.length() ; i++){
            arr[num.charAt(i)-'0']++;
        }

        StringBuilder sb = new StringBuilder();
        for(int i = 9 ; i >= 0 ; i--){
            while(arr[i]-- > 0){
                sb.append(i);
            }
        }
        System.out.println(sb);


    }
}