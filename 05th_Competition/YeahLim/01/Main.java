import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	
	public static void main(String[] args) throws IOException {
		
		// N, M, str 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		int M = Integer.parseInt(br.readLine());
		String str = br.readLine();
		
		// Pn의 개수 구하기
		int count = 0; 
		int answer = 0;
		
		for (int i = 1; i < M - 1; ) {
			
			if (str.charAt(i) == 'O' && str.charAt(i+1) == 'I') {
				count++;
				
				// N개 만큼 'OI'반복했을때
				if (count == N) {
					
					// 'OI'앞이 'I'일때
					if (str.charAt(i - (2*count - 1)) == 'I') {
						answer++;
					}
					count--;
				}

				i += 2; // 2만큼 증가
			}
			else {
				count = 0;
				i++;
			}
		}
		
		System.out.println(answer);
	}
}
