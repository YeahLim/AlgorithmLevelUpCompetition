import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.util.Stack;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
			
		// 변수 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		StringTokenizer st = new StringTokenizer(br.readLine());
		int[] array = new int[N];
		for (int i = 0; i < N; i++) {
			array[i] = Integer.parseInt(st.nextToken());
		}
		
		int[] answer = new int[N];
		Arrays.fill(answer, -1);
		
		Stack<Integer> stack = new Stack<>();
		stack.add(0);
		for (int i = 1; i < N; i++) {
			while (!stack.isEmpty() && array[stack.peek()] < array[i]) {
				answer[stack.pop()] = array[i];
			}
			stack.add(i);
		}
		
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		for (int an : answer) {
			bw.write(an + " ");
		}
		bw.flush();
	}

}