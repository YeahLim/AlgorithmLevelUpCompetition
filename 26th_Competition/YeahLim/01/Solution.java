import java.util.*;

// 1. 위에서부터 몇번째 칸인지 구하기

// 2. 왼쪽에서부터 몇번째칸인지 구해서, +-1 하기
// 몫: 홀수 -> 오른쪽부터, 짝수 -> 왼쪽부터  2. 나머지: 칸수

class Solution {
    public int solution(int n, int w, int num) {        
        
        // 기준점 좌표 구하기
        int baseRow = (n - 1) / w;
        int baseCol = (n - 1) % w;
        
        // 기준점이 홀수행일때, 열 좌우반전
        if (baseRow % 2 == 1) {
            baseCol = w - 1 - baseCol;
        }
        
        // 목표점 좌표 구하기
        int targetRow = (num - 1) / w;
        int targetCol = (num - 1) % w;
        
        // 목표점이 홀수행일때, 열 좌우반전
        if (targetRow % 2 == 1) {
            targetCol = w - 1 - targetCol;
        }
        
        int answer = baseRow - targetRow;
        // 행이 하나 더 있는 경우
        if (baseRow % 2 == 0 ? targetCol <= baseCol : baseCol <= targetCol) {
            answer++;
        }
        
        return answer;
    }
}