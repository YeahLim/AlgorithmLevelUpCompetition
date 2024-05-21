# [백준 - 골드 4] 알파벳 (1987)
 
## ⏰  **time**
25분

## :pushpin: **Algorithm**
DFS, 백트래킹

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
- 가장 많이 갈 수 있는 것을 골라야하기 때문에 DFS를 이용해야한다.
- `visited`처리는 알파벳 기준으로 해줬다. 아스키 코드를 이용해서 알파벳의 인덱스값을 구했다.
    ```java
        boolean[] visited = new boolean[26];
        visited[board[0][0] - 'A'] = true;
    ```

## :black_nib: **Review**
- 오랜만에 BFS가 아닌 DFS로 그래프 문제 풀었다. DFS에서 `visited[i] = false`해주는 것 잊지않기!