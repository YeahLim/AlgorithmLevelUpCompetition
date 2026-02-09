# [백준] 가장 긴 증가하는 부분 수열 (11053번 🩶2️⃣)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. 맨 처음부터 해당 수까지 for문을 돌면서 자신보다 작은 아이가 있다면 해당 dp의 수에 +1을 한 것과 현재 dp의 수를 비교하여 더 큰 값을 저장
```
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (A[i] > A[j])
                B[i] = max(B[j] + 1, B[i]);
        }
    }
```

## :black_nib: **Review**
- DP 많이 어려운데..? 약간 아직도 이해 안됐다.
