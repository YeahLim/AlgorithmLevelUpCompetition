# [백준 - 실버 3] 1021. 회전하는 큐

## ⏰  **time**

10분

## \:pushpin: **Algorithm**

덱(Deque) 시뮬레이션 + 그리디 회전

## ⏲️**Time Complexity**

\$O(N \times M)\$

* 각 원소를 꺼내기 위해 덱을 좌/우로 회전하며 처리

## \:round\_pushpin: **Logic**

1. 초기 상태로 덱에 `1..N`을 차례대로 넣는다.
2. 뽑아야 할 수 `x`의 \*\*현재 위치 `idx`\*\*를 선형 탐색으로 찾는다.
3. `idx`가 덱의 **왼쪽 절반**(`idx ≤ size/2`)에 있으면 **왼쪽 회전(2번 연산)**,
   아니면 \*\*오른쪽 회전(3번 연산)\*\*을 선택한다.

   * 왼쪽 회전: `push_back(front)`, `pop_front()`
   * 오른쪽 회전: `push_front(back)`, `pop_back()`
4. `front == x`가 되면 `pop_front()`로 제거(1번 연산)하고 다음 타겟으로 진행.
5. 회전 횟수를 누적해 출력.

```cpp
if (idx <= dq.size() / 2) {           // 왼쪽이 더 가깝다
  while (dq.front() != x) {
    ++res;
    dq.push_back(dq.front());
    dq.pop_front();
  }
  dq.pop_front();
} else {                              // 오른쪽이 더 가깝다
  while (dq.front() != x) {
    ++res;
    dq.push_front(dq.back());
    dq.pop_back();
  }
  dq.pop_front();
}
```

## \:black\_nib: **Review**

* 매 타겟마다 “왼쪽/오른쪽 중 더 가까운 쪽”으로만 회전하면 최소 횟수 보장.
* `idx` 탐색이 선형이라도 `N`이 작아 충분히 빠르다.

## 📡 Link

[https://www.acmicpc.net/problem/1021](https://www.acmicpc.net/problem/1021)
