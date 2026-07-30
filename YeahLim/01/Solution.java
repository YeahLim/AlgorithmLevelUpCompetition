class Solution {
    public int solution(String t, String p) {
        int answer = 0;
        
        int n = p.length();
        
        for (int i = 0; i <= t.length() - n; i++) {
            
            String num = t.substring(i, i + n);
            if (Long.parseLong(num) <= Long.parseLong(p)) {
                answer++;
            }
            
        }
        
        return answer;
    }
}
