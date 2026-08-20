class Solution {
    public long solution(int price, int money, int count) {
        long total = (long) money;
        
        for (int i = 1; i <= count; i++) {
            total -= price * i;
        }

        return total > 0 ? 0 : total*-1;
    }
}