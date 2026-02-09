# [백준] 이분 그래프 (2206번 💛4️⃣)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

BFS

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 깊이 우선 탐색 (DFS)
```
    //방문안한 점이면 RED
    if (visited[start] == 0)
        visited[start] = RED;

    //연결된 점들 방문
    for (int i = 0; i < vect[start].size(); i++)
    {
        int idx = vect[start][i];
        if (visited[idx] == 0) //방문 안한 점이면
        {
            //요소에 방문기록 남김(색칠하기)
            if (visited[start] == RED)
                visited[idx] = BLUE;
            else if (visited[start] == BLUE)
                visited[idx] = RED;

            //요소별로 방문
            DFS(idx);
        }
    }
```

## :black_nib: **Review**
- 이분 그래프 내가 알던게 아니였음! 이분 분할이라니!
