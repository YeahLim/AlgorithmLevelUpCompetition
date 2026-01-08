class Solution {
    public String solution(String[] cards1, String[] cards2, String[] goal) {
        
        String answer = "Yes";
        
        int index1 = 0, index2 = 0;
        for (String g : goal) {
            
            if (index1 < cards1.length && cards1[index1].equals(g)) {
                index1++;
            } else if (index2 < cards2.length && cards2[index2].equals(g)) {
                index2++;
            } else {
                answer = "No";
                break;
            }
        }
        
        return answer;
    }
}