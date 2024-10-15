import java.util.*;

// 첫 문자가 그 전단어의 마지막 문자와 일치하는지 확인
// 앞에 나왔던 단어인지 확인

class Solution {
    public int[] solution(int n, String[] words) {
        int[] answer = {};
        
        Set<String> set = new HashSet<>();
        
        int index = -1;
        int turn = 0;
        
        while (index < words.length) {
            turn++;
            
            for (int i = 1; i <= n; i++) {
                
                if (++index == 0) {
                    set.add(words[index]);
                    continue;
                }
                
                if (index == words.length) {
                    break;
                }
                
                char ch = words[index - 1].charAt(words[index - 1].length() - 1);
                
                // 끝말잇기 규칙에 어긋나는 경우
                if (ch != words[index].charAt(0) || set.contains(words[index])) {
                    return new int[] {i, turn};
                }
                
                set.add(words[index]);
            }
        }
        
        

        return new int[] {0,0};
    }
}