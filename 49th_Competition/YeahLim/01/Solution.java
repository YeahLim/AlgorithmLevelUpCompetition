import java.util.*;

class Solution {
    public int solution(int[] elements) {
        Set<Integer> set = new HashSet<>();
            
        for (int i = 1; i <= elements.length; i++) { // 개수
            for (int j = 0; j < elements.length; j++) { // 시작점
                int num = 0;
                for (int k = j; k < j+i; k++) {
                    num += elements[k%elements.length];
                }
                set.add(num);
            }
        }
            
        return set.size();
    }
}