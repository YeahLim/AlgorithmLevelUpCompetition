# [백준 - 실버 4] 1235. 학생 번호

## ⏰  **time**
20분

## :pushpin: **Algorithm**
문자열, 해시(set)

## ⏲️ **Time Complexity**
- 최악의 경우 O(N * L),  
  - N: 학생 수  
  - L: 학생 번호 길이

## :round_pushpin: **Logic**
1. **학생 번호를 뒤집어 저장**
   - 뒤에서부터 최소한의 숫자를 비교하기 위함
2. `length = 1`부터 시작해서
   - `각 학생 번호에서 뒤에서 length만큼 자른 문자열`을 set에 삽입
   - → set의 크기가 N이면, **모든 학생의 번호가 서로 다름**
3. set 크기가 N이 될 때까지 length를 1씩 증가
4. 최종적으로 length를 출력 → **학생을 구분할 수 있는 최소 길이**

### 💡예시 코드 핵심
```cpp
while (1) {
    set<string> s;
    for (int i = 0; i < N; i++) {
        s.insert(student_num[i].substr(0, length));
    }

    if (s.size() == N) break;
    else length++;
}
````

## :black_nib: **Review**

* 문자열 처리에서 뒤쪽부터 비교가 필요할 경우, **reverse 활용이 효과적**
* set을 통해 중복 체크하는 로직은 깔끔하고 빠름
* 직관적인 아이디어로 푸는 것이 중요했던 문제

## 📡 Link
[https://www.acmicpc.net/problem/1235](https://www.acmicpc.net/problem/1235)
