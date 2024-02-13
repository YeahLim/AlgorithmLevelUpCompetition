import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st=  new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        int[] arr = new int[n];

        st = new StringTokenizer(br.readLine());
        for(int i = 0 ; i < n; i++){
            arr[i] = Integer.parseInt(st.nextToken());
        }

        int s = 0;
        int e = 0;
        int sum = arr[s];
        int result = 0;
        while(e < n){
            if(sum < m){
                e += 1;
                if(e < n)
                    sum += arr[e];
            }
            else if(sum > m){
                sum -= arr[s];
                s += 1;
            }
            else{
                result++;
                sum -= arr[s];
                s += 1;
                e += 1;
                if(e < n)
                    sum += arr[e];
            }
        }
        System.out.println(result);

    }
}
