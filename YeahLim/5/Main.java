import java.util.*;
import java.io.*;

class Main {
	
	static int count;
	
	public static void main(String[] args) throws IOException {
		
		// N 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int T = Integer.parseInt(br.readLine());
		
		// 중복순열로 1,2,3으로 정수를 구할 수 있는 개수 찾기
		while (T-- > 0) {
			count = 0;
			searchNum(Integer.parseInt(br.readLine()), 0);	
			System.out.println(count);
		}
		
	}

	private static void searchNum(int num, int sum) {		
		
		// 탈출 조건 
		if (sum > num) {
			return;
		}
		
		if (sum == num) {
			count++;
			return;
		}
		
		for (int i = 1; i <= 3; i++) {
			searchNum(num, sum + i);
		}
		
	}
	
}
