# [백준 - 골드 5] 1914. 하노이 탑

## ⏰  **time**
30분

## :pushpin: **Algorithm**
재귀

## ⏲️**Time Complexity**
$O(NlogN)$

## :round_pushpin: **Logic**
1. 하노이는 본인보다 작은 원판 위로 놓을 수 없다.
2. 옮긴 횟수를 토대로 하노이탑을 옮긴다.
```cpp
void hanoi(int start, int tmp, int end, int n) {
    if (n == 1) {
        cout << start << " " << end << "\n";
        return;
    }

    hanoi(start, end, tmp, n - 1);
    cout << start << " " << end << "\n";
    hanoi(tmp, start, end, n - 1);
}
```

## :black_nib: **Review**
- 하노이~~

## 📡**Link**
https://www.acmicpc.net/problem/1914
