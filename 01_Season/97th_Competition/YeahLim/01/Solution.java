import java.util.*;

class Solution {
    public int solution(String[] friends, String[] gifts) {
        
        // <이름, 인덱스> 만들기
        Map<String, Integer> name = new HashMap<>();
        
        for (int i = 0; i < friends.length; i++) {
            name.put(friends[i], i);
        }
        
        // 선물 관계 그래프, 선물 지수 구하기
        int[][] graph = new int[friends.length][friends.length]; // 선물 관계 그래프
        int[] index = new int[friends.length]; // 선물 지수
        
        for (String gift : gifts) {
            
            String giver = gift.split(" ")[0];
            String taker = gift.split(" ")[1];
            
            graph[name.get(giver)][name.get(taker)]++;
            
            index[name.get(giver)]++;
            index[name.get(taker)]--;
        }
        
        // 다음달 선물 받는 것 구하기
        int[] count = new int[friends.length];
        
        for (int i = 0; i < friends.length; i++) {            
            for (int j = i + 1; j < friends.length; j++) {

                // i가 j에게 더 많이 줬을 때
                if (graph[i][j] > graph[j][i]) {
                    count[i]++;
                }
                
                // j가 i에게 더 많이 줬을 때
                else if (graph[i][j] < graph[j][i]) {
                    count[j]++;
                }
                
                // 주고받은 선물 수가 같거나 없을때
                else if (graph[i][j] == graph[j][i]) {
                    
                    // i의 선물 지수가 더 큰 경우
                    if (index[i] > index[j]) {
                        count[i]++;
                    }
                
                    // j의 선물지수가 더 큰 경우
                    else if (index[i] < index[j]) {
                        count[j]++;
                    }                 
                }
                
            }
        }    
        
        // 다음달에 가장 많이 받는 사람의 선물 개수
        int answer = 0;
        for (int cnt : count) {
            if (answer < cnt) {
                answer = cnt;
            }
        }
        
        return answer;
    }
}