# [백준] 구간 합 구하기 4 (11659번)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

누적합

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 누접합이라는 성징을 이용해 입력받는 수를 더한 값으로 배열에 저장
``` 
     arr[i] = arr[i - 1] + input;
```
- 빠른 입력
  ```
     ios::sync_with_stdio(false);
  	 cin.tie(0);
  	 cout.tie(0);
  ```

## :black_nib: **Review**

- 누적합의 의미를 몰라 계속 시간 초과가 났다.
- 빠른 입력 main에 안 적혀 있어서 계속 시간 초과 났다...
