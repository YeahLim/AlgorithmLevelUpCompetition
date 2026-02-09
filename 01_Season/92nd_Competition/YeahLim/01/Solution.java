class Solution {
    public int solution(int n, int k) {
        
        // 1. k진수로 변환
        String convertedNum = Integer.toString(n, k);
        
        // 2. 0으로 구분 짓기
        String[] splitedNum = convertedNum.split("0");
        
        // 3. 소수인지 확인해 개수 구하기
        int answer = 0;
        for (String strNum : splitedNum) {
            
            if (strNum.isEmpty() || strNum.equals("")) continue;
            
            long num = Long.parseLong(strNum);
            answer += isPrimeNum(num);
        }
        
        return answer;
    }
    
    private int isPrimeNum(long num) {
        
        if (num == 2) {
            return 1;
        }
        
        if (num <= 1 || num % 2 == 0) {
            return 0;
        }
        
        for (long i = 3; i * i <= num; i += 2) {
            if (num % i == 0) return 0;
        }
        
        return 1;
    }
}