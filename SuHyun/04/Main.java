import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String S = br.readLine();
        String P = br.readLine();

        int count = 0;

        StringBuilder sb = new StringBuilder();

        for(int i=0;i<P.length();i++){
            sb.append(P.charAt(i));

            //현재까지 범위(sb에 들어있는 문자열)의 문자가 S에 포함되어 있지 않다면 이전까지는 포함한다는 의미이기 때문에
            //이전까지 문자열을 copy하고 현재 문자부터 다시 문자열을 만들어 탐색한다.
            if(S.contains(sb.toString())){
                count++;
                sb.setLength(0);
                sb.append(P.charAt(i));
            }

            //S에 범위의 문자열이 포함된다면 다음에도 포함될 수 있으므로 다음으로 넘긴다.
        }

        count++;    //sb에 남은 문자열을 추가로 더한다.

        System.out.println(count);
    }
}
