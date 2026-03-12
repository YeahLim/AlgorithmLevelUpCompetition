import java.util.*;

class Solution {
    public int solution(int[] queue1, int[] queue2) {
        
        int[] q = new int[queue1.length + queue2.length];
        for (int i = 0; i < queue1.length; i++) {
            q[i] = queue1[i];
            q[i + queue1.length] = queue2[i];
        }
        
        int first = 0;
        int second = queue1.length;
        
        long sum1 = Arrays.stream(queue1).sum();
        long sum2 = Arrays.stream(queue2).sum();
        
        long target = (sum1 + sum2) / 2;
        
        int answer = -1;
        
        while (first < second) {
            answer++;

            if (sum1 == target) {
                break;
            } else if (second < q.length && sum1 < target) {
                sum1 += q[second++];
            } else {
                sum1 -= q[first++];
            } 
        }
        
        if (sum1 != target) {
            return -1;
        }
        
        return answer;
    }
}