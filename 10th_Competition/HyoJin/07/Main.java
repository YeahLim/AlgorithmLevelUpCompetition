import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class March29_10773 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        Stack<Integer> stack = new Stack<>();

        for(int i = 0 ; i < n ; i++){
            int num = Integer.parseInt(br.readLine());
            if(num == 0){
                stack.pop();
            }else{
                stack.add(num);
            }
        }

        int sum = 0;
        int size = stack.size();
        for(int i = 0 ; i < size ; i++){
            sum += stack.pop();
        }
        System.out.println(sum);
    }
}
