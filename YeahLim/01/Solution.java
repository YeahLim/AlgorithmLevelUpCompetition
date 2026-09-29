import java.util.*;

class Solution {
    public int solution(int n) {
        
        // 3진법 변환
        String str = Integer.toString(n, 3);
        
        // 앞뒤 반전
        StringBuilder sb = new StringBuilder(str);
        sb.reverse();
        
        // 10진번 변환
        int num = Integer.parseInt(sb.toString(), 3);
        
        return num;
    }
}