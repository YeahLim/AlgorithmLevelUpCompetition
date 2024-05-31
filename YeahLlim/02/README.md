# [백준 - 골드 5] 집합의 표현 (1717)
 
## ⏰  **time**
30분

## :pushpin: **Algorithm**
유니온파인드

## ⏲️**Time Complexity**
$O(α(N))$

## :round_pushpin: **Logic**

기본적인 유니온파인드 문제
1. makeSet() - 기본 집합 만드는 메소드
2. Union() - 두 개의 집합 합하는 메소드
3. find() - 루트 찾는 메소드

## :black_nib: **Review**
- 오랜만의 유니온파인드 문제
- 경로 압축안하니까 시간 초과 떴다. 아래처럼 꼭 압축하기~ 압축하면 시간복잡도가 상수로 나온다.
    ```
        return parent[a] = findParent(parent[a]);
    ```