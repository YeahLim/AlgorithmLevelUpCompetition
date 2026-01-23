import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	
	public static void main(String[] args) throws IOException {
		
		// 변수 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String S = br.readLine();
		String P = br.readLine();
		
		
		// S에서 P로 만들때 복사해야하는 횟수 구하기
		int index = 0;
		int count = 0;
		for (int i = 0; i < P.length(); i++) {
			
			if (S.contains(P.substring(index, i + 1))) {
				continue;
			}
			index = i;
			count++;
		}
		
		System.out.println(count+1);

	}


}