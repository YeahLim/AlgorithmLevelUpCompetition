class Solution {
	public int solution(int storey) {
		int answer = 0;

		while (storey > 0) {
			int digit = storey % 10;
			storey /= 10;

			if (digit > 5) {
				answer += 10 - digit;
				storey++; // 다음 자리에 올림
			} else if (digit < 5) {
				answer += digit;
			} else {
				answer += 5;

				if (storey % 10 >= 5) {
					storey++;
				}
			}
		}

		return answer;
	}
}