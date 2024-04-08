# [백준] N과 M (5) (15654번 🩶3️⃣)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 조합
```cpp
void DFS(int idx) {
    if (idx == M) {
        for (int i = 0; i < M; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < vec.size(); i++) {
        if (visited[i]) {
            continue;
        }
        visited[i] = true;
        arr[idx] = vec[i];
        DFS(idx + 1);
        visited[i] = false;
    }
}
```

## :black_nib: **Review**
- 컴파일에러나서 계속 수정했다.
