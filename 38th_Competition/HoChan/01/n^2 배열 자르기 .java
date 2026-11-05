class Solution {
	public int[] solution(int n, long left, long right) {
		int[] answer = new int[(int) (right - left + 1)];

		for (int i = 0; i < answer.length; i++) {
			long idx = left + i;
			answer[i] = (int) Math.max(idx / n, idx % n) + 1;
		}

		return answer;
	}
}