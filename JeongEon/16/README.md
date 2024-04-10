# [SWEA] [S/W 문제해결 기본] 1일차 - Flatten (1208번 D2️⃣)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

정렬

## ⏲️**Time Complexity**

$O(Nlog(N))$

## :round_pushpin: **Logic**
1. 오름차순 정렬 후 (vec[99]] - 1), (vec[0] + 1)
```cpp
void dumping(int cnt) {
    sort(vec.begin(), vec.end());

    // 탈출 조건
    if (cnt >= max_dump) {
        return;
    }

    vec[99]--;
    vec[0]++;
    dumping(cnt + 1);
}
```

## :black_nib: **Review**
- sort때문에 시간초과날줄 알았는데..! 휴 다행이다
