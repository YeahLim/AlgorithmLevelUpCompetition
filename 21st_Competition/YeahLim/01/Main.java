import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Solution {
	
	
	static class Line {
		int begin, end;
		
		public Line(int begin, int end) {
			this.begin = begin;
			this.end = end;
		}
	}
	
	
	public static void main(String[] args) throws IOException {
		
		// 변수 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		
		Line[] lines = new Line[N];
		for (int i = 0; i < N; i++) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			lines[i] = new Line(Integer.parseInt(st.nextToken()), Integer.parseInt(st.nextToken()));
		}
		
		Arrays.sort(lines, (a, b) -> {
			
			if (a.begin == b.begin) {
				return a.end - b.end;
			}
			return a.begin - b.begin;
		});
		
		
		// 최소/최대값, 길이 구하기
		int min = lines[0].begin, max = lines[0].end;
		int length = max - min;
		for (int i = 1; i < N; i++) {
			Line curr = lines[i];
			
			// 이미 그어진 선에 완전히 겹친 경우
			if (curr.end <= max) {
				continue;
			}
			
			// 일부만 겹친 영우
			else if (curr.begin < max) {
				length += curr.end - max;
			}
			
			// 겹치는 부분이 없는 경우
			else if (curr.begin >= max) {
				length += curr.end - curr.begin;
			}
			
			min = curr.begin;
			max = curr.end;
		}
		
		
		System.out.println(length);
	}
}
