import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.PriorityQueue;
import java.util.StringTokenizer;

public class Main2 {
	
	
	public static void main(String[] args) throws IOException {
		
		// 변수 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		int K = Integer.parseInt(st.nextToken());
		int B = Integer.parseInt(st.nextToken());
		
		int[] nums = new int[N+1];
	
		for (int i = 0; i < B; i++) {
			int num = Integer.parseInt(br.readLine());
			nums[num] = 1;
		}
		
	
		// 누적합으로 최소 몇 개의 신호등을 수리해야하는지 구하기
		for (int i = 1; i <= K; i++) {
			nums[i] += nums[i-1];
		}
		
		int min = nums[K];
		for (int i = K+1; i <= N; i++) {
			nums[i] += nums[i-1];
			min = Math.min(min,  nums[i] - nums[i - K]);
		}
		
		System.out.println(min);
	}
}