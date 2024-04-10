# [SWEA] [S/W 문제해결 응용] 2일차 - 최대 상금 (1244번 D2️⃣)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

DFS

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 완전탐색을 통해 가장 큰 수가 됐을 때 탈
```cpp
void dfs(int ptr, int cnt) {
    // 탈출 조건
    if (cnt == max_cnt) {
        result = max(result, stoi(num));
        return;
    }
    for (int i = ptr; i < num.length() - 1; i++) {
        for (int j = i + 1; j < num.length(); j++) {
            if (num[i] <= num[j]) {
                swap(num[i], num[j]);
                dfs(i, cnt + 1);
                swap(num[i], num[j]);
            }
            // 무조건 바꾸어야하는 경우
            if (i == num.length() - 2 && j == num.length() - 1) {
                swap(num[i], num[j]);
                dfs(i, cnt + 1);
                swap(num[i], num[j]);
            }
        }
    }
}
```

## :black_nib: **Review**
- 무조건 바꿔야하는 경우가 있었다..!
