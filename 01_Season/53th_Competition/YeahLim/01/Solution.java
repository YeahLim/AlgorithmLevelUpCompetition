import java.util.*;

class Solution {
    public int solution(String s) {
        int answer = 0;
        
        StringBuilder str = new StringBuilder(s);
        
        for (int i = 0; i < s.length(); i++) {
            
            // 괄호 문자열인지 확인
            answer = checkString(str) ? answer+1 : answer;
            
            // 왼쪽으로 한 칸 회전
            char ch = str.charAt(0);
            str.deleteCharAt(0);
            str.append(ch);
        }
        
        return answer;
    }
    
    public boolean checkString(StringBuilder str) {
        
        Stack<Character> stack = new Stack<>();
        stack.push(str.charAt(0));
        
        for (int i = 1; i < str.length(); i++) {
            
            if (stack.isEmpty()) {
                stack.push(str.charAt(i));
                continue;
            }
            
            if (stack.peek() == '(' && str.charAt(i) == ')') {
                stack.pop();
            }
            
            else if (stack.peek() == '{' && str.charAt(i) == '}') {
                stack.pop();
            }
            
            else if (stack.peek() == '[' && str.charAt(i) == ']') {
                stack.pop();
            }
            
            else {
                stack.push(str.charAt(i));
            }
        }
        
        return stack.isEmpty();
    }
}