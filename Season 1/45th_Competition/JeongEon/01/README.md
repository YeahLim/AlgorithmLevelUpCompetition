# [백준 - 실버 4] 2422. 한윤정이 이탈리아에 가서 아이스크림을 사먹는데

## ⏰  **time**
30분

## :pushpin: **Algorithm**
브루트포스

## ⏲️**Time Complexity**
$O(N^3)$

## :round_pushpin: **Logic**
1. 두 수의 조합이 체크 되었는지 확인한다.
```cpp
    for (int i = 1; i <= N; ++i) {
        for (int j = i + 1; j <= N; ++j) {
            if (chk[i][j]) {
                continue;
            }
            for (int k = j + 1; k <= N; ++k) {
                if (chk[i][k] || chk[j][k]) {
                    continue;
                }
                ++ans;
            }
        }
    }
```

## :black_nib: **Review**
- 아앗... 이상하게 풀다가 엄청 틀렸다

## 📡**Link**
https://www.acmicpc.net/problem/2422
