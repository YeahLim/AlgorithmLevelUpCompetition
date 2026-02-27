import java.util.*;

class Solution {
    public long solution(int[] weights) {
        
        Arrays.sort(weights);
        
        Map<Double, Integer> map = new HashMap<>();
        long answer = 0;
        
        for (int weight : weights) {
            double type1 = weight * 1.0;
            double type2 = weight * 2.0 / 3.0;
            double type3 = weight * 2.0 / 4.0;
            double type4 = weight * 3.0 / 4.0;
            
            if (map.containsKey(type1)) {
                answer += map.get(type1);
            }
            if (map.containsKey(type2)) {
                answer += map.get(type2);
            }
            if (map.containsKey(type3)) {
                answer += map.get(type3);
            }
            if (map.containsKey(type4)) {
                answer += map.get(type4);
            }
            
            map.put(type1, map.getOrDefault(type1, 0) + 1);
        }
        
        return answer;
    }
}