class Solution {
    public int[] solution(int[] sequence, int k) {
        
        int left = 0;
        int right = 0;
        
        int start = 0;
        int end = sequence.length;
        
        int sum = sequence[left];
        
        while (left <= right) {
            
            if (sum == k) {
                // 길이가 더 짧을 경우
                if (right - left < end - start) {
                    start = left;
                    end = right;
                }
            }
            
            if (sum <= k && right + 1 < sequence.length) {
                right++;
                sum += sequence[right];
            }
            else {
                sum -= sequence[left];
                left++;
            }
        }
        
        return new int[] {start, end};
    }
}