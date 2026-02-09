import java.util.*;

class Solution {
        
    public int solution(int[] players, int m, int k) {
        
        Queue<Integer> server = new LinkedList<>();
        int answer = 0;
        
        for (int i = 0; i < players.length; i++) {
            
            // 필요한 서버 개수
            int count = players[i] / m;
            
            // 시간 지난 서버 제거
            while (!server.isEmpty() && server.peek() + k <= i) {
                server.poll();
            }
            
            // 서버 증설이 필요한 경우
            while (count > server.size()) {
                server.add(i);
                answer++;
            }
            
        }
        
        return answer;
    }
}