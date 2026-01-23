import java.util.*;

class Solution {
    public int solution(String skill, String[] skill_trees) { 
        
        int answer = 0;
        
        int[] flags = new int[26];
        
        for (String str : skill_trees) {
            
            boolean enable = true;
            
            for (int i = 0; i < skill.length(); i++) {
                flags[skill.charAt(i)-65] = 1; 
            }
            
            for (Character ch : str.toCharArray()) {                
                if (flags[ch - 65] == 0) {
                    continue;
                }
                
                // skill에 포함돼있는 경우
                for (Character sk : skill.toCharArray()) {
                    int skFlag = flags[sk - 65];
                    if (skFlag == 2) {
                        continue;
                    }
                    
                    if (skFlag == 1 && sk == ch) {
                        flags[ch - 65] = 2;
                        break;
                    }
                    
                    enable = false;
                }
            }
            
            if (enable) {
                answer++;
            }
        }
        
        return answer;
    }
}