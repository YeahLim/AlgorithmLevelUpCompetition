import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
	
	static int N, M;
	static int[] nums;
	static StringBuilder answer = new StringBuilder();
	
	public static void main(String[] args) throws IOException {
		
		// N, M, nums 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		
		st = new StringTokenizer(br.readLine());
		nums = new int[N];
		for (int i = 0; i < N; i++) {
			nums[i] = Integer.parseInt(st.nextToken());
		}
		Arrays.sort(nums); // 오름차순
		
		
		// 중복가능 수열 구하기
		searchArray(0, 0, new int[M]);
		
		
		// 출력
		System.out.println(answer);
		
	}

	private static void searchArray(int depth, int index, int[] array) {
		
		if (depth == M) {
			addArray(array);
			return;
		}
		
		int before = 0;
		for (int i = 0; i < N; i++) {
			
			if (before == nums[i]) {
				continue;
			}
			
			before = nums[i];
			array[depth] = nums[i];
			searchArray(depth+1, i, array);
		}
		
	}

	private static void addArray(int[] array) {
		
		for (int i = 0; i < M; i++) {
			answer.append(array[i]).append(" ");
		}
		
		
	}
	
	
}