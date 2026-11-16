class Solution {
    public int solution(int a, int b, int n) {
        int answer = 0;
        
        while (n >= a) {
            int given = n / a * b; // 받을 수 있는 콜라
            answer += given;
            int rest = n % a;
            n = given + rest; // 현재 병 개수
        }
        
        return answer;
    }
}