import java.util.*;

class Solution {
	// 주 컨테이너 벨트: Queue
	// 보조 컨테이너 벨트: Stack
	public int solution(int[] order) {
		Deque<Integer> st = new ArrayDeque<>();
		int answer = 0; // 주 컨테이너 적재 수
		for (int i=0; i<order.length; i++) {
			// 주 컨테이너 적재
			if(order[answer] == (i+1)) {
				answer++;
				continue;
			}
			// 보조 컨테이너 -> 주 컨테이너 이동
			while(!st.isEmpty() && st.peek() == order[answer]) {
				st.pop();
				answer++;
			}
			// 보조 컨테이너 적재
			st.push(i+1);
		}
		// 보조 컨테이너 -> 주 컨테이너 이동
		while(!st.isEmpty() && st.peek() == order[answer]) {
			st.pop();
			answer++;
		}
		return answer;
	}
}