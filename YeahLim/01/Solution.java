class Solution {
    public String solution(String s, int n) {
        String answer = "";
        
        for (char c : s.toCharArray()) {
            if (c == ' ') {
                answer += c;
            }
            
            else if (c >= 'a' && c <= 'z') {
                int rest = (c + n - 'a') % 26;
                answer += (char)('a' + rest);
            }
            
            else if (c >= 'A' && c <= 'Z') {
                int rest = (c + n - 'A') % 26;
                answer += (char)('A' + rest);
            }
        }
        
        return answer;
    }
}