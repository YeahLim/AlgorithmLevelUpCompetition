import java.util.*;

class Solution {
    public int solution(int[] arrayA, int[] arrayB) {
        
        Arrays.sort(arrayA);
        Arrays.sort(arrayB);
        
        // arrayA에서 나눠지고, arrayB에서 나누지 못하는 케이스 구하기
        List<Integer> successA = isSucceedToDivide(arrayA);
        int ans1 = isFailedToDivide(arrayB, successA);
        
        // arrayB에서 나눠지고, arrayA에서 나누지 못하는 케이스 구하기
        List<Integer> successB = isSucceedToDivide(arrayB);
        int ans2 = isFailedToDivide(arrayA, successB);
        
        return Math.max(ans1, ans2);
    }
    
    private List<Integer> isSucceedToDivide(int[] array) {
        
        List<Integer> successList = new ArrayList<>();
        
        for (int i = array[0]; i >= 2; i--) {
            
            boolean success = true;
            
            for (int num : array) {
                if (num % i != 0) {
                    success = false;
                    break;
                }
            }
            
            if (success) {
                successList.add(i);
            }
        }
        
        return successList;
    }
    
    private int isFailedToDivide(int[] array, List<Integer> successList) {
        
        for (int i : successList) {
            
            boolean failure = true;
            
            for (int num : array) {
                
                if (num % i == 0) {
                    failure = false;
                    break;
                }
            }
            
            if (failure) {
                return i;
            }
        }
        return 0;
    }
}