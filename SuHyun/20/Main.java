import java.io.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader((System.in)));

        int n = Integer.parseInt(br.readLine());

        for(int i=0;i<n;i++){
            long num = Long.parseLong(br.readLine());

            while(!isPrime(num)){
                num++;
            }

            System.out.println(num);
        }
    }

    public static boolean isPrime(long num){
        if(num < 2){
            return false;
        }

        for(long i=2;i<=Math.sqrt(num);i++){
            if(num % i == 0){
                return false;
            }
        }

        return true;
    }
}