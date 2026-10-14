import java.util.*;

class Solution {
    public int solution(int[][] signals) {
        
        int[] time = new int[signals.length];
        int lcm = 1;
        
        // 모든 신호등의 최소 공배수 구하기
        for (int i = 0; i < signals.length; i++) {
            time[i] += signals[i][0] + signals[i][1] + signals[i][2];
            lcm = lcm * time[i] / gcd(lcm, time[i]);
        }
        
        // 동시에 노란 신호등 켜질때 구하기
        for (int t = 0; t <= lcm; t++) {
            boolean all = true;
            for (int i = 0; i < signals.length; i++) {
                int pos = (t - 1) % time[i];
                int green = signals[i][0];
                int yellow = signals[i][1];
                if (pos < green || pos >= green + yellow) {
                    all = false;
                    break;
                }
            }
            
            if (all) {
                return t;
            }
        }
        
        return -1;
    }
    
    private int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
}