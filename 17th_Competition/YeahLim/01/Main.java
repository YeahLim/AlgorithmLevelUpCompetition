import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.PriorityQueue;
import java.util.StringTokenizer;

public class Main {
	
	
	public static void main(String[] args) throws IOException {
		
		// 변수 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		int M = Integer.parseInt(br.readLine());
		int answer;
		
		// 고장난 리모콘이 없을 경우
		if (M == 0) {
			answer = Math.min(Math.abs(N - 100), Integer.toString(N).length());
			System.out.println(answer);
			return;
		}
		
		boolean[] brokenButton = new boolean[10];
		StringTokenizer st = new StringTokenizer(br.readLine());
		while (M-- > 0) {
			brokenButton[Integer.parseInt(st.nextToken())] = true;
		}
		
		
		
		// +1, -1로만 채널 탐색
		answer = Math.abs(N - 100);
		
		// 숫자버튼 돌리면서 채널 탐색
		for (int channel = 0; channel < 1000000; channel++) {
	
			// 고장난 버튼이 포함돼있는지 확인
			boolean broken = false;
			String strChannel = Integer.toString(channel);
			for (int i = 0; i < strChannel.length(); i++) {
				if (brokenButton[strChannel.charAt(i) - '0']) {
					broken = true;
					break;
				}
			}
			
			// 고장난 버튼이 포함 안돼있다면
			if (!broken) {
				answer = Math.min(answer, strChannel.length() + Math.abs(channel - N));
			}	
		}
		
		
		System.out.println(answer);
	}


}
