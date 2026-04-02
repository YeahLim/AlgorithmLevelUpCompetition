import java.util.*;

class Solution {
    
    class Time {
        int startHour, startMin, endHour, endMin;
        
        public Time (String startHour, String startMin, String endHour, String endMin) {
            this.startHour = Integer.parseInt(startHour);
            this.startMin = Integer.parseInt(startMin);
            this.endHour = Integer.parseInt(endHour);
            this.endMin = Integer.parseInt(endMin);
        }
    }
    
    
    public int solution(String[][] book_time) {
        
        // 입실 대기 큐
        PriorityQueue<Time> startQ = new PriorityQueue<>((a, b) -> {
            if (a.startHour == b.startHour) {
                return a.startMin - b.startMin;
            }
            return a.startHour - b.startHour;
        });
        
        for (String[] time : book_time) {
            String startHour = time[0].split(":")[0];
            String startMin = time[0].split(":")[1];
            String endHour = time[1].split(":")[0];
            String endMin = time[1].split(":")[1];
            
            startQ.add(new Time(startHour, startMin, endHour, endMin));
        }
        
        // 퇴실 대기 큐
        PriorityQueue<Time> endQ = new PriorityQueue<>((a, b) -> {
            if (a.endHour == b.endHour) {       
                return a.endMin - b.endMin;
            }
            return a.endHour - b.endHour;
        });
        
        endQ.add(startQ.poll()); // 첫번째 예약 퇴실 큐에 넣기
        int answer = 1;
        
        while (!startQ.isEmpty()) {
            Time next = startQ.poll();
            
            // 이용했던 방이 비는 경우
            if (isCheckedOutRoom(endQ.peek(), next)) {
                endQ.poll(); // 퇴실처리
            }
            endQ.add(next); 
        }
        
        return endQ.size();
    }
    
    private boolean isCheckedOutRoom (Time curr, Time next) { 
              
        int endHour = curr.endHour;
        int endMin = curr.endMin + 10;  // 청소시간 10분 추가
        
        if (endMin >= 60) {
            endMin %= 60;
            endHour++;
        }
        
        if (endHour == next.startHour) {
            return endMin <= next.startMin;
        }
        return endHour < next.startHour;
    }
}