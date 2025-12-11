import java.util.*;

class Solution {
    
    public class Plan {
        String name;
        int hour, min, time;
        
        public Plan(String[] plan) {
            name = plan[0];
            hour = Integer.parseInt(plan[1].split(":")[0]);
            min = Integer.parseInt(plan[1].split(":")[1]);
            time = Integer.parseInt(plan[2]);
        }
    }
    
    public String[] solution(String[][] plans) {
        
        List<Plan> planList = new ArrayList<>();
        List<String> completed = new ArrayList<>();
        
        for (int i = 0; i < plans.length; i++) {
               planList.add(new Plan(plans[i]));
        }
        
        // 시간 순으로 정렬
        Collections.sort(planList, (a, b) -> {
            
            if (a.hour == b.hour) {
                return a.min - b.min;
            }
            
            return a.hour - b.hour;
        });
        
        Stack<Plan> remains = new Stack<>(); 
        
        int index = 0;
        while (index < plans.length - 1) {
            
            Plan curr = planList.get(index);
            Plan next = planList.get(index+1);
            
            // 다음 숙제 시간까지 남은 시간 구하기
            int time = calculateTime(curr, next);
            
            // 현제 과제의 숙제 시간이 다음 숙제 시간을 초과하는 경우
            if (curr.time > time) {
                curr.time -= time;
                remains.push(curr);
            } 
            // 아닌 경우
            else {
                time -= curr.time;
                completed.add(curr.name);
                
                // 진행 중이었던 숙제 마저하기
                while (time > 0 && !remains.isEmpty()) {
                    Plan remain = remains.peek();
                    
                    if (remain.time > time) {
                        remain.time -= time;
                        break;
                    }
                    
                    else {
                        remains.pop();
                        completed.add(remain.name);
                        time -= remain.time;
                    }

                }
            }
            index++;
        }
        
        // 마지막 숙제 추가하기
        completed.add(planList.get(index).name);
        
        // 남은 숙제 완료하기
        while (!remains.isEmpty()) {
            Plan curr = remains.pop();
            completed.add(curr.name);
        }
        
        String[] answer = new String[completed.size()];
        for (int i = 0; i < completed.size(); i++) {
            answer[i] = completed.get(i);
        }
        
        return answer;
    }
    
    private int calculateTime(Plan curr, Plan next) {        
        return (next.hour - curr.hour) * 60 + next.min - curr.min;
    }
}