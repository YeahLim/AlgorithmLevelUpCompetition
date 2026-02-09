class Solution {
    public int[] solution(int n, long left, long right) {
        int[] answer = new int[(int)(right - left + 1)];

        int leftRow = (int)(left / n);
        int leftCol = (int)(left % n);
        int rightRow = (int)(right / n);
        int rightCol = (int)(right % n);

        int index = 0;
        
        // 행이 하나인 경우
        if (leftRow == rightRow) {
            for (int j = leftCol; j <= rightCol; j++) {
                answer[index++] = Math.max(leftRow, j) + 1;
            }
            return answer;
        } 

        // leftRow 행
        for (int j = leftCol; j < n; j++) {
            answer[index++] = Math.max(leftRow, j) + 1;
        }

        // leftRow + 1 ~ rightRow - 1 행
        for (int i = leftRow + 1; i < rightRow; i++) {
            for (int j = 0; j < n; j++) {
                answer[index++] = Math.max(i, j) + 1;
            }
        }

        // rightRow 행
        for (int j = 0; j <= rightCol; j++) {
            answer[index++] = Math.max(rightRow, j) + 1;
        }

        return answer;
    }
}
