import java.util.*;

class Solution {

	public int[] solution(int[] numbers) {
		Deque<Integer> st1 = new ArrayDeque<>();
		Deque<Integer> st2 = new ArrayDeque<>();

		for (int num : numbers) {
			st1.push(num);
		}

		int[] answer = new int[numbers.length];
		for (int i = numbers.length - 1; i >= 0; i--) {
			int cur = st1.pop();
			if (st2.isEmpty()) {
				answer[i] = -1;
				st2.push(cur);
			} else if (cur < st2.peek()) {
				answer[i] = st2.peek();
				st2.push(cur);
			} else {
				while (!st2.isEmpty()) {
					if (cur >= st2.peek()) {
						st2.pop();
					} else {
						break;
					}
				}
				answer[i] = st2.isEmpty() ? -1 : st2.peek();
				st2.push(cur);
			}
		}
		return answer;
	}
}