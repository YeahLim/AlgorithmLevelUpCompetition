import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	
	public static void main(String[] args) throws IOException {
		
		// 변수 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		int S = Integer.parseInt(st.nextToken());
		
		int[] array = new int[N];
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; i++) {
			array[i] = Integer.parseInt(st.nextToken());
		}
		

		// 투 포인터로 길이 구하기
		int left = 0;
		int right = 0;
		int sum = array[left];
		int answer = N+1;

		while (true) {
			
			if (sum >= S) {
				answer = Math.min(answer, right - left + 1);
				sum -= array[left++];
			}
			
            else if (++right == N) {
                break;
            }
            
			else {
				sum += array[right];
			}
			
			
		}
		
		
		System.out.println(answer == N+1 ? 0 : answer);
	}

}