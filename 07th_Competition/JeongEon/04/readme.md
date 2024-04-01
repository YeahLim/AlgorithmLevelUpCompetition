# [백준] 트리의 부모 찾기 (11725번 🩶2️⃣)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

BFS

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 너비우선탐색(BFS)
```
    while (!q.empty()) {
        int parent = q.front();
        q.pop();

        for (int i = 0; i < graph[parent].size(); i++) {
            int child = graph[parent][i];
            if (!visit[child]) {
                ans[child] = parent;
                visit[child] = true;
                q.push(child);
            }
        }
    }
```

## :black_nib: **Review**
- 
