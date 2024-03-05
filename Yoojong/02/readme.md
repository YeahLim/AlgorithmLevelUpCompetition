# [백준] 문자열 집합 (실4) (14425)

## ⏰  **time**

10분

## :pushpin: **Algorithm**
자료 구조
문자열
해시를 사용한 집합과 맵
트리를 사용한 집합과 맵
## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
- set 길이로 중복 구분
    ```
        for _ in range(m):
          word = sys.stdin.readline().rstrip()
          s.add(word)
          #같지 않다.
          if n != len(s):
             s.remove(word)
            #같아
          else:
            ans+=1
    ```

## :black_nib: **Review**
- set.remove는 해쉬로 없애기에 O(1)이다.
