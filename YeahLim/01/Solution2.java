import java.util.*;

class Solution {
    public int solution(String skill, String[] skill_trees) { 
        
        int answer = 0;
        
        for (String str : skill_trees) {
            
            StringBuilder sb = new StringBuilder();
            
            for (Character ch : str.toCharArray()) {
                if (skill.contains(ch + "")) {
                    sb.append(ch);
                }
            }
            
            if (skill.indexOf(sb.toString()) == 0) {
                answer++;
            }

        }
        
        return answer;
    }
}