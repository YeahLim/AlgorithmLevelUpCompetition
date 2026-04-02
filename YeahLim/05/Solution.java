class Solution {
    public boolean solution(int x) {
        
        int num = x;
        
        int sum = 0;
        while (x != 0) {
            System.out.println(x%10);
            sum += x % 10;
            x /= 10;
            System.out.println(x);
        }
        
        return num % sum == 0;
    }
}