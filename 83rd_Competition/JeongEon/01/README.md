# \[백준 - 실버 2] 1406. 에디터

## ⏰  **time**

10분

## \:pushpin: **Algorithm**

스택(Stack) 활용 (커서 양쪽 관리)

## ⏲️**Time Complexity**

* 초기 문자열 처리: $O(N)$
* 명령 $M$개 처리: $O(M)$
* 전체: $O(N + M)$

## \:round\_pushpin: **Logic**

1. **커서 왼쪽** 문자들을 `left` 스택에,
   **커서 오른쪽** 문자들을 `right` 스택에 저장.

   * 처음엔 커서가 맨 뒤 → 입력 문자열 전체를 `left`에 push.

2. **명령 처리**

   * `L`: 커서를 왼쪽으로 ← → `left.top()`을 `right`로 이동
   * `D`: 커서를 오른쪽으로 → → `right.top()`을 `left`로 이동
   * `B`: 커서 왼쪽 문자 삭제 → `left.pop()`
   * `P x`: 커서 왼쪽에 문자 추가 → `left.push(x)`

3. 최종 출력

   * 커서 왼쪽(`left`)을 뒤집어 `right`에 옮기고,
   * `right`를 top부터 하나씩 출력.

```cpp
// 예: abcd|ef → left: abcd, right: fe
if (cmd == 'L' && !left.empty()) {
    right.push(left.top());
    left.pop();
}
else if (cmd == 'D' && !right.empty()) {
    left.push(right.top());
    right.pop();
}
else if (cmd == 'B' && !left.empty()) {
    left.pop();
}
else if (cmd == 'P') {
    cin >> c;
    left.push(c);
}

// 출력: left 뒤집어서 right에 넣고, right 출력
while (!left.empty()) {
    right.push(left.top());
    left.pop();
}
while (!right.empty()) {
    cout << right.top(); right.pop();
}
```

## \:black\_nib: **Review**

* 리스트처럼 커서 이동 구현이 어려울 땐 **두 개의 스택**으로 나눠 처리하는 패턴이 유용하다.
* 시간 복잡도도 $O(1)$ 연산의 연속이라 빠르고 효율적.

## 📡 Link

[https://www.acmicpc.net/problem/1406](https://www.acmicpc.net/problem/1406)
