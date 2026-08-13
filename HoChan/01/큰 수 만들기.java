public String solution(String number, int k) {
	Deque<Character> st = new ArrayDeque<>();

	for (char n : number.toCharArray()) {
		while (!st.isEmpty() && k > 0 && st.peekLast() < n) {
			st.pollLast();
			k--;
		}
		st.offerLast(n);
	}

	while (k > 0) {
		st.pollLast();
		k--;
	}

	StringBuilder sb = new StringBuilder();
	for (char n : st) {
		sb.append(n);
	}
	return sb.toString();
}