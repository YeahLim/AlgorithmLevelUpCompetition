import java.util.*;

class Solution {
    public int solution(String[] want, int[] number, String[] discount) {
        
        int total = 0;
        
        Map<String, Integer> answer = new HashMap<>();
        
        for (int i = 0; i < want.length; i++) {
            answer.put(want[i], number[i]);
        }
        
        for (int i = 0; i <= discount.length - 10; i++) {
            Map<String, Integer> count = new HashMap<>();
            
            for (int j = i; j < i + 10; j++) {
                count.put(discount[j], count.getOrDefault(discount[j], 0) + 1);
            }
            
            boolean hasAll = true;
            
            for (String key : answer.keySet()) {
                if (answer.get(key) != count.get(key)) {
                    hasAll = false;
                    break;
                }
            }
            
            total += hasAll ? 1 : 0;
        }
        
        
        return total;
    }
}