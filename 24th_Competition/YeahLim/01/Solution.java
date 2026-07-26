import java.util.*;

class Solution {
    public String solution(String video_len, String pos, String op_start, String op_end, String[] commands) {
        int videoLen = Integer.parseInt(video_len.split(":")[0]) * 60 + Integer.parseInt(video_len.split(":")[1]);
        int curr = Integer.parseInt(pos.split(":")[0]) * 60 + Integer.parseInt(pos.split(":")[1]);
        int opStart = Integer.parseInt(op_start.split(":")[0]) * 60 + Integer.parseInt(op_start.split(":")[1]);
        int opEnd = Integer.parseInt(op_end.split(":")[0]) * 60 + Integer.parseInt(op_end.split(":")[1]);
        
        // 오프닝 구간인 경우
        if (curr >= opStart && curr <= opEnd) {
            curr = opEnd;
        }
        
        for (String cmd : commands) {
            
            if (cmd.equals("prev")) {
                curr -= 10;
                curr = curr < 0 ? 0 : curr;
            } else if (cmd.equals("next")) {
                curr += 10;
                curr = curr > videoLen ? videoLen : curr;
            }
            
            // 오프닝 구간인 경우
            if (curr >= opStart && curr <= opEnd) {
                curr = opEnd;
            }

        }
        
        String answer = "";
        
        int min = curr / 60;
        if (min < 10) answer += "0";
        answer += min;
        
        answer += ":";
        
        int sec = curr % 60;
        if (sec < 10) answer += "0";
        answer += sec;
        
        return answer;
    }
}